#!/usr/bin/env python3
import argparse, pathlib, subprocess, sys, re

BYTE_COUNTS={512:{'pk':800,'sk':1632,'ct':768},768:{'pk':1184,'sk':2400,'ct':1088},1024:{'pk':1568,'sk':3168,'ct':1568}}


def to_mem(hexstr,out):
    hexstr=re.sub(r'[^0-9a-fA-F]','',hexstr)
    if len(hexstr)%2: raise ValueError('hex length odd')
    data=[hexstr[i:i+2] for i in range(0,len(hexstr),2)]
    out.write_text('\n'.join(data)+'\n')


def main():
    ap=argparse.ArgumentParser(description='Generate vectors/c_ref_*.mem from C ref JSON output')
    ap.add_argument('--workspace',default='.')
    ap.add_argument('--mode',nargs='+',type=int,default=[512,768,1024])
    ap.add_argument('--json-tool',default='',help='Command that prints JSON list/object with fields mode,pk,sk,ct,ss_enc,ss_dec')
    args=ap.parse_args()
    ws=pathlib.Path(args.workspace).resolve(); vec=ws/'vectors'; vec.mkdir(exist_ok=True)
    cmd=args.json_tool.strip()
    if not cmd:
        default_tool = ws / 'kyber' / 'ref' / 'tools' / 'gen_kem_vectors.py'
        if default_tool.exists():
            cmd = 'python3 kyber/ref/tools/gen_kem_vectors.py'
        else:
            print('Khong tim thay C-ref vector tool mac dinh.', file=sys.stderr)
            print('Hay chay: make bootstrap', file=sys.stderr)
            print('Hoac truyen ro: --json-tool "<your command>"', file=sys.stderr)
            return 2
    try:
        raw=subprocess.check_output(cmd,shell=True,cwd=ws,text=True)
    except subprocess.CalledProcessError as e:
        print('Failed running json tool:',e,file=sys.stderr); return 2
    import json
    obj=json.loads(raw)
    rows=obj if isinstance(obj,list) else obj.get('vectors',[])
    by_mode={int(r['mode']):r for r in rows}
    for m in args.mode:
        if m not in by_mode:
            print(f'Missing mode {m} in JSON output',file=sys.stderr);return 3
        r=by_mode[m]
        for k in ['pk','sk','ct','ss_enc','ss_dec']:
            p=vec/f'c_ref_{m}_{k}.mem'
            to_mem(r[k],p)
            print('wrote',p)
    return 0

if __name__=='__main__':
    raise SystemExit(main())
