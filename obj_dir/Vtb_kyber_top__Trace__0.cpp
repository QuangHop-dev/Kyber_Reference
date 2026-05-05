// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_kyber_top__Syms.h"


void Vtb_kyber_top___024root__trace_chg_0_sub_0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_kyber_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_chg_0\n"); );
    // Body
    Vtb_kyber_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_kyber_top___024root*>(voidSelf);
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_kyber_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_kyber_top___024root__trace_chg_dtype____0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar);
void Vtb_kyber_top___024root__trace_chg_dtype____1(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar);
void Vtb_kyber_top___024root__trace_chg_dtype____2(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);

void Vtb_kyber_top___024root__trace_chg_0_sub_0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<50>/*1599:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_kyber_top__DOT__clear_tb_ram__Vstatic__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_kyber_top__DOT__print_hex_block__Vstatic__i),32);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_kyber_top__DOT__print_hex_block__Vstatic__b),8);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_kyber_top__DOT__dump_hex_file__Vstatic__i),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_kyber_top__DOT__dump_hex_file__Vstatic__fd),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_kyber_top__DOT__dump_mem_file__Vstatic__i),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_kyber_top__DOT__dump_mem_file__Vstatic__fd),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_kyber_top__DOT__dump_ref_vectors__Vstatic__mode_tag),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__pk_bytes),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__sk_bytes),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__ct_bytes),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__mode_tag),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_kyber_top__DOT__compare_with_file__Vstatic__i),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_kyber_top__DOT__compare_with_file__Vstatic__fd),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_kyber_top__DOT__compare_with_file__Vstatic__mism),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__host_cpu_sk_assemble__DOT__bi),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__host_cpu_sk_assemble__DOT__s_sz),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+17,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__flip_bytes_32__Vstatic__i),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__barrett_reduce_q__Vstatic__t),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__barrett_reduce_q__Vstatic__r),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__flip_bytes_32__Vstatic__fi),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+29,(vlSelfRef.tb_kyber_top__DOT__rst));
        bufp->chgBit(oldp+30,(vlSelfRef.tb_kyber_top__DOT__start));
        bufp->chgCData(oldp+31,(vlSelfRef.tb_kyber_top__DOT__opcode),2);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_kyber_top__DOT__mode_k),2);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_kyber_top__DOT__mode_sel),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_kyber_top__DOT__check_ref),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_kyber_top__DOT__compare_errors),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_kyber_top__DOT__dump_ref),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+37,(vlSelfRef.tb_kyber_top__DOT__done));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_kyber_top__DOT__busy));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_kyber_top__DOT__ext_we));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_kyber_top__DOT__ext_re));
        bufp->chgIData(oldp+41,(vlSelfRef.tb_kyber_top__DOT__ext_addr),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_kyber_top__DOT__ext_dout),32);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state),8);
        bufp->chgWData(oldp+44,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_rho),256);
        bufp->chgWData(oldp+52,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_sigma),256);
        bufp->chgWData(oldp+60,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_z),256);
        bufp->chgWData(oldp+68,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_m),256);
        bufp->chgWData(oldp+76,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_K_bar),256);
        bufp->chgWData(oldp+84,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_r_seed),256);
        bufp->chgWData(oldp+92,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_H_pk),256);
        bufp->chgWData(oldp+100,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_H_c),256);
        bufp->chgWData(oldp+108,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_trng_seed),512);
        bufp->chgBit(oldp+124,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_ct_match));
        bufp->chgBit(oldp+125,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_reenc_mode));
        bufp->chgBit(oldp+126,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__enc_kdf_ready));
        bufp->chgBit(oldp+127,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_kdf_ready));
        bufp->chgBit(oldp+128,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_from_scratch));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_use_tomont));
        bufp->chgCData(oldp+130,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__enc_noise_kind),2);
        bufp->chgCData(oldp+131,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__enc_ntt_phase),2);
        bufp->chgSData(oldp+132,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dma_cnt),12);
        bufp->chgCData(oldp+133,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_i),3);
        bufp->chgCData(oldp+134,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_j),3);
        bufp->chgCData(oldp+135,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase),4);
        bufp->chgBit(oldp+136,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_dec_intt_gs_en));
        bufp->chgBit(oldp+137,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_we));
        bufp->chgSData(oldp+138,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_addr_a),11);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_din),8);
        bufp->chgSData(oldp+140,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_addr_b),11);
        bufp->chgCData(oldp+141,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_dout),8);
        bufp->chgBit(oldp+142,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_we));
        bufp->chgSData(oldp+143,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_addr_a),11);
        bufp->chgCData(oldp+144,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_din),8);
        bufp->chgSData(oldp+145,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_addr_b),11);
        bufp->chgCData(oldp+146,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dout),8);
        bufp->chgBit(oldp+147,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_we));
        bufp->chgSData(oldp+148,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_addr_a),11);
        bufp->chgCData(oldp+149,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_din),8);
        bufp->chgSData(oldp+150,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_addr_b),11);
        bufp->chgCData(oldp+151,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_dout),8);
        bufp->chgBit(oldp+152,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_we));
        bufp->chgSData(oldp+153,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_addr_a),11);
        bufp->chgCData(oldp+154,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_din),8);
        bufp->chgSData(oldp+155,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_addr_b),11);
        bufp->chgCData(oldp+156,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_dout),8);
        bufp->chgBit(oldp+157,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_start));
        bufp->chgCData(oldp+158,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_cmd),3);
        bufp->chgWData(oldp+159,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din),1088);
        bufp->chgCData(oldp+193,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_bytes),8);
        bufp->chgBit(oldp+194,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_prf_eta3));
        bufp->chgBit(oldp+195,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_en));
        bufp->chgBit(oldp+196,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_valid));
        bufp->chgBit(oldp+197,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_last));
        bufp->chgWData(oldp+198,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din),1088);
        bufp->chgCData(oldp+232,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_bytes),8);
        bufp->chgBit(oldp+233,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__stream_ack));
        bufp->chgWData(oldp+234,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout),1536);
        bufp->chgBit(oldp+282,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_done));
        bufp->chgBit(oldp+283,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))));
        bufp->chgBit(oldp+284,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_start));
        bufp->chgSData(oldp+285,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_base_addr),11);
        bufp->chgBit(oldp+286,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_eta3_mode));
        bufp->chgBit(oldp+287,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_we));
        bufp->chgBit(oldp+288,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_done));
        bufp->chgSData(oldp+289,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_ram_addr),11);
        bufp->chgSData(oldp+290,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_poly_out),16);
        bufp->chgBit(oldp+291,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_start));
        bufp->chgBit(oldp+292,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_transposed));
        bufp->chgBit(oldp+293,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_we));
        bufp->chgBit(oldp+294,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_done));
        bufp->chgSData(oldp+295,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_ram_addr),12);
        bufp->chgSData(oldp+296,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_ram_din),16);
        bufp->chgBit(oldp+297,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_start));
        bufp->chgBit(oldp+298,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mode));
        bufp->chgBit(oldp+299,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_done));
        bufp->chgBit(oldp+300,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_we));
        bufp->chgCData(oldp+301,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr),8);
        bufp->chgSData(oldp+302,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_din),16);
        bufp->chgCData(oldp+303,(((0x24U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state))
                                   ? ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_reenc_mode)
                                       ? 5U : 1U) : 
                                  ((0x26U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state))
                                    ? ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_reenc_mode)
                                        ? 6U : 2U) : 
                                   (((0x33U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state)) 
                                     & ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase)) 
                                        & (1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__enc_ntt_phase))))
                                     ? 3U : (4U & (- (IData)(
                                                             (0x36U 
                                                              == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state))))))))),4);
        bufp->chgSData(oldp+304,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout),16);
        bufp->chgSData(oldp+305,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b),16);
        bufp->chgBit(oldp+306,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_start));
        bufp->chgBit(oldp+307,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_done));
        bufp->chgCData(oldp+308,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr),8);
        bufp->chgCData(oldp+309,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_addr),8);
        bufp->chgSData(oldp+310,(((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_from_scratch)
                                   ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_dout_a)
                                   : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))),16);
        bufp->chgSData(oldp+311,(((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_from_scratch)
                                   ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_dout_b)
                                   : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))),16);
        bufp->chgSData(oldp+312,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_dout_a),16);
        bufp->chgSData(oldp+313,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_dout_b),16);
        bufp->chgSData(oldp+314,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a),16);
        bufp->chgSData(oldp+315,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_b),16);
        bufp->chgSData(oldp+316,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a) 
                                                 - 
                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU))))))),16);
        bufp->chgSData(oldp+317,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a) 
                                                 - 
                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU))))))),16);
        bufp->chgBit(oldp+318,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_we));
        bufp->chgCData(oldp+319,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__pair_hold),8);
        bufp->chgSData(oldp+320,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a0),16);
        bufp->chgSData(oldp+321,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a1),16);
        bufp->chgSData(oldp+322,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b0),16);
        bufp->chgSData(oldp+323,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b1),16);
        bufp->chgSData(oldp+324,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_zeta),16);
        bufp->chgSData(oldp+325,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0),16);
        bufp->chgSData(oldp+326,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1),16);
        bufp->chgSData(oldp+327,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s3_c0_old),16);
        bufp->chgSData(oldp+328,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s3_c1_old),16);
        bufp->chgSData(oldp+329,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_real),16);
        bufp->chgCData(oldp+330,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_addr),7);
        bufp->chgBit(oldp+331,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_start));
        bufp->chgBit(oldp+332,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_done));
        bufp->chgBit(oldp+333,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_not_equal));
        bufp->chgSData(oldp+334,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_addr_c),11);
        bufp->chgSData(oldp+335,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_addr_c_prime),11);
        bufp->chgSData(oldp+336,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_op)
                                                  ? 
                                                 (((IData)(1U) 
                                                   + 
                                                   (VL_SHIFTL_III(32,32,32, 
                                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a))), 1U) 
                                                    >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))) 
                                                  >> 1U)
                                                  : 
                                                 (VL_DIV_III(32, 
                                                             ((IData)(0x00000680U) 
                                                              + 
                                                              ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a) 
                                                               << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))), (IData)(0x00000d01U)) 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d)) 
                                                     - (IData)(1U)))))),16);
        bufp->chgCData(oldp+337,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel),3);
        bufp->chgCData(oldp+338,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel),3);
        bufp->chgBit(oldp+339,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_we_a));
        bufp->chgBit(oldp+340,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_we_b));
        bufp->chgSData(oldp+341,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_addr_a),12);
        bufp->chgSData(oldp+342,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_addr_b),12);
        bufp->chgSData(oldp+343,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_din_a),16);
        bufp->chgSData(oldp+344,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_din_b),16);
        bufp->chgBit(oldp+345,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_we));
        bufp->chgCData(oldp+346,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_addr),8);
        bufp->chgSData(oldp+347,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_din),16);
        bufp->chgSData(oldp+348,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_acc_base),12);
        bufp->chgSData(oldp+349,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dbg_pwma_u_pair_cnt),16);
        bufp->chgSData(oldp+350,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dbg_pwma_v_pair_cnt),16);
        bufp->chgSData(oldp+351,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dbg_pwma_dec_pair_cnt),16);
        bufp->chgSData(oldp+352,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_group_idx),10);
        bufp->chgCData(oldp+353,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_slot_idx),4);
        bufp->chgSData(oldp+354,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_cap_idx),12);
        bufp->chgBit(oldp+355,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_unpack_group_valid));
        bufp->chgWData(oldp+356,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_unpack_coeff_latch),128);
        bufp->chgCData(oldp+360,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_j_idx),3);
        bufp->chgCData(oldp+361,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_j_work),3);
        bufp->chgCData(oldp+362,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w),3);
        bufp->chgWData(oldp+363,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w),88);
        bufp->chgIData(oldp+366,(VL_MULS_III(32, (IData)(0x000005a1U), 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout)))),32);
        bufp->chgIData(oldp+367,(VL_MULS_III(32, (IData)(0x000005a1U), 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b)))),32);
        bufp->chgSData(oldp+368,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                               (VL_MULS_III(32, (IData)(0x000005a1U), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))) 
                                                                - 
                                                                VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                            VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))))))), 0x00000010U))),16);
        bufp->chgSData(oldp+369,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                               (VL_MULS_III(32, (IData)(0x000005a1U), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))) 
                                                                - 
                                                                VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                            VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))))))), 0x00000010U))),16);
        bufp->chgWData(oldp+370,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out),128);
        bufp->chgCData(oldp+374,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_poly_idx),3);
        bufp->chgSData(oldp+375,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__add_main_d1),16);
        bufp->chgSData(oldp+376,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__add_main_d2),16);
        bufp->chgSData(oldp+377,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__add_main_d3),16);
        bufp->chgSData(oldp+378,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__add_main_d4),16);
        bufp->chgBit(oldp+379,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_we_a));
        bufp->chgBit(oldp+380,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_we_b));
        bufp->chgSData(oldp+381,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_a),12);
        bufp->chgSData(oldp+382,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_b),12);
        bufp->chgSData(oldp+383,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_din_a),16);
        bufp->chgSData(oldp+384,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_din_b),16);
        bufp->chgBit(oldp+385,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm));
        bufp->chgSData(oldp+386,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_fsm),12);
        bufp->chgSData(oldp+387,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_din_fsm),16);
        bufp->chgBit(oldp+388,(((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                 ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_we)
                                 : ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                     ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_we)
                                     : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_we_a)))));
        bufp->chgBit(oldp+389,(((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                 ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_we)
                                 : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_we_b))));
        bufp->chgSData(oldp+390,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__addr_a),12);
        bufp->chgSData(oldp+391,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__addr_b),12);
        bufp->chgSData(oldp+392,((0x0000ffffU & ((1U 
                                                  == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                                  ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_poly_out)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a) 
                                                   - 
                                                   VL_MULS_III(32, (IData)(0x00000d01U), 
                                                               VL_EXTENDS_II(32,16, 
                                                                             (0x0000ffffU 
                                                                              & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU)))))
                                                   : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_din_a))))),16);
        bufp->chgSData(oldp+393,((0x0000ffffU & ((2U 
                                                  == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a) 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU)))))
                                                  : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_din_b)))),16);
        bufp->chgSData(oldp+394,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_dout_a),16);
        bufp->chgSData(oldp+395,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_dout_b),16);
        bufp->chgSData(oldp+396,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_addr_even),12);
        bufp->chgSData(oldp+397,((0x00000fffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_addr_even)))),12);
        bufp->chgBit(oldp+398,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel));
        bufp->chgSData(oldp+399,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_a_mux),12);
        bufp->chgSData(oldp+400,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_b_mux),12);
        bufp->chgBit(oldp+401,(((~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel)) 
                                & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_we_a))));
        bufp->chgBit(oldp+402,(((~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel)) 
                                & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_we_b))));
        bufp->chgBit(oldp+403,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_start));
        bufp->chgBit(oldp+404,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_done));
        bufp->chgSData(oldp+405,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_u_addr),11);
        bufp->chgCData(oldp+406,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_v_addr),8);
        bufp->chgBit(oldp+407,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_ext_we));
        bufp->chgIData(oldp+408,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_ext_addr),32);
        bufp->chgIData(oldp+409,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_ext_dout),32);
        bufp->chgSData(oldp+410,((0x00000fffU & VL_SHIFTL_III(12,12,32, 
                                                              (VL_SHIFTL_III(12,12,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_i), 1U) 
                                                               + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_j)), 8U))),12);
        bufp->chgSData(oldp+411,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even),12);
        bufp->chgSData(oldp+412,((0x00000fffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even)))),12);
        bufp->chgSData(oldp+413,((0x0000ffffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr))
                                                  ? 
                                                 (- (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_real))
                                                  : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_real)))),16);
        bufp->chgBit(oldp+414,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_sent));
        bufp->chgBit(oldp+415,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_sent));
        bufp->chgBit(oldp+416,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_sent));
        bufp->chgBit(oldp+417,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sent));
        bufp->chgBit(oldp+418,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_sent));
        bufp->chgBit(oldp+419,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_sent));
        bufp->chgBit(oldp+420,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_sent));
        bufp->chgCData(oldp+421,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_phase),2);
        bufp->chgCData(oldp+422,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_poly),3);
        bufp->chgCData(oldp+423,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_pair),8);
        bufp->chgCData(oldp+424,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_step),3);
        bufp->chgIData(oldp+425,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_pk_addr),32);
        bufp->chgIData(oldp+426,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_sk_addr),32);
        bufp->chgIData(oldp+427,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_pk_byte_idx),32);
        bufp->chgSData(oldp+428,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_c0),16);
        bufp->chgSData(oldp+429,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_c1),16);
        bufp->chgCData(oldp+430,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_b0),8);
        bufp->chgCData(oldp+431,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_b1),8);
        bufp->chgCData(oldp+432,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_b2),8);
        bufp->chgBit(oldp+433,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_reload_done));
        bufp->chgCData(oldp+434,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_poly),3);
        bufp->chgCData(oldp+435,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_pair),8);
        bufp->chgCData(oldp+436,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_step),3);
        bufp->chgCData(oldp+437,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_b0),8);
        bufp->chgCData(oldp+438,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_b1),8);
        bufp->chgCData(oldp+439,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_b2),8);
        bufp->chgSData(oldp+440,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_c0),16);
        bufp->chgSData(oldp+441,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_c1),16);
        bufp->chgBit(oldp+442,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_fetching));
        bufp->chgBit(oldp+443,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fetch_wait));
        bufp->chgCData(oldp+444,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fetch_cnt),8);
        bufp->chgBit(oldp+445,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_fetch_done));
        bufp->chgSData(oldp+446,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__rem12),12);
        bufp->chgSData(oldp+447,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__rem12b),12);
        bufp->chgSData(oldp+448,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__c0s),16);
        bufp->chgSData(oldp+449,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__c1s),16);
        bufp->chgSData(oldp+450,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__c0n),12);
        bufp->chgSData(oldp+451,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__c1n),12);
        bufp->chgSData(oldp+452,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pair_base12),12);
        bufp->chgSData(oldp+453,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pair_base_b12),12);
        bufp->chgSData(oldp+454,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_even_idx12),12);
        bufp->chgSData(oldp+455,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_odd_idx12),12);
        bufp->chgSData(oldp+456,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_global_even_idx12),12);
        bufp->chgSData(oldp+457,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_global_odd_idx12),12);
        bufp->chgSData(oldp+458,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cand_off2_idx12),12);
        bufp->chgSData(oldp+459,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cand_off3_idx12),12);
        bufp->chgSData(oldp+460,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_pair_base12),12);
        bufp->chgSData(oldp+461,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_pair_base_b12),12);
        bufp->chgSData(oldp+462,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_even_idx12),12);
        bufp->chgSData(oldp+463,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_odd_idx12),12);
        bufp->chgSData(oldp+464,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_cand_off2_idx12),12);
        bufp->chgSData(oldp+465,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_cand_off3_idx12),12);
        bufp->chgSData(oldp+466,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_src_idx12),12);
        bufp->chgSData(oldp+467,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ep_src_idx12),12);
        bufp->chgSData(oldp+468,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ep_src_next12),12);
        bufp->chgIData(oldp+469,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__su),17);
        bufp->chgIData(oldp+470,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__sv),17);
        bufp->chgIData(oldp+471,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_c),17);
        bufp->chgIData(oldp+472,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__su_c),17);
        bufp->chgSData(oldp+473,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ep_term),16);
        bufp->chgSData(oldp+474,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__epp_term_v),16);
        bufp->chgSData(oldp+475,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__uidx),12);
        bufp->chgSData(oldp+476,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_src_idx12),12);
        bufp->chgSData(oldp+477,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__epp_src_idx12),12);
        bufp->chgSData(oldp+478,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__vidx_w),12);
        bufp->chgSData(oldp+479,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__vidx),9);
        bufp->chgSData(oldp+480,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__bitpos),9);
        bufp->chgCData(oldp+481,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mb),8);
        bufp->chgCData(oldp+482,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__bytev),8);
        bufp->chgCData(oldp+483,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mbyte_idx),5);
        bufp->chgCData(oldp+484,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mbyte_idx_dec),5);
        bufp->chgCData(oldp+485,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mb_idx),3);
        bufp->chgBit(oldp+486,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mbit));
        bufp->chgBit(oldp+487,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__all_eq));
        bufp->chgSData(oldp+488,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__sk_coeff_base),12);
        bufp->chgSData(oldp+489,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_q),16);
        bufp->chgSData(oldp+490,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__su_q),16);
        bufp->chgSData(oldp+491,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__diff_q),16);
        bufp->chgIData(oldp+492,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__diff_q17),17);
        bufp->chgIData(oldp+493,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__tmsg32),32);
        bufp->chgIData(oldp+494,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__sk_pair_base),32);
        bufp->chgBit(oldp+495,(((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_we) 
                                | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm))));
        bufp->chgSData(oldp+496,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_a_cache__DOT__addr_a),12);
        bufp->chgSData(oldp+497,(((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm)
                                   ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_din_fsm)
                                   : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_ram_din))),16);
        bufp->chgSData(oldp+498,((0x00000fffU & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even)) 
                                                 & (- (IData)(
                                                              (2U 
                                                               == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))))))),12);
        bufp->chgCData(oldp+499,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__state),2);
        bufp->chgWData(oldp+500,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg),1536);
        bufp->chgSData(oldp+548,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__coeff_cnt),9);
        bufp->chgBit(oldp+549,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__saved_eta3));
        bufp->chgBit(oldp+550,((1U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])));
        bufp->chgBit(oldp+551,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+552,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+553,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+554,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+555,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                      >> 5U))));
        bufp->chgSData(oldp+556,((0x0000ffffU & VL_COUNTONES_I(
                                                               (3U 
                                                                & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])))),16);
        bufp->chgSData(oldp+557,((0x0000ffffU & VL_COUNTONES_I(
                                                               (3U 
                                                                & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                   >> 2U))))),16);
        bufp->chgSData(oldp+558,((0x0000ffffU & (VL_COUNTONES_I(
                                                                (3U 
                                                                 & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                                                 - 
                                                 VL_COUNTONES_I(
                                                                (3U 
                                                                 & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                    >> 2U)))))),16);
        bufp->chgSData(oldp+559,((0x0000ffffU & VL_COUNTONES_I(
                                                               (7U 
                                                                & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])))),16);
        bufp->chgSData(oldp+560,((0x0000ffffU & VL_COUNTONES_I(
                                                               (7U 
                                                                & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                   >> 3U))))),16);
        bufp->chgSData(oldp+561,((0x0000ffffU & (VL_COUNTONES_I(
                                                                (7U 
                                                                 & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                                                 - 
                                                 VL_COUNTONES_I(
                                                                (7U 
                                                                 & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                    >> 3U)))))),16);
        bufp->chgSData(oldp+562,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__saved_eta3)
                                                  ? 
                                                 (VL_COUNTONES_I(
                                                                 (7U 
                                                                  & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                                                  - 
                                                  VL_COUNTONES_I(
                                                                 (7U 
                                                                  & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                     >> 3U))))
                                                  : 
                                                 (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                                                  - 
                                                  VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                     >> 2U))))))),16);
        bufp->chgCData(oldp+563,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__state),2);
        bufp->chgSData(oldp+564,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__cnt),11);
        bufp->chgBit(oldp+565,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__diff_accumulator));
        bufp->chgIData(oldp+566,((VL_DIV_III(32, ((IData)(0x00000680U) 
                                                  + 
                                                  ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a) 
                                                   << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))), (IData)(0x00000d01U)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d)) 
                                     - (IData)(1U)))),32);
        bufp->chgSData(oldp+567,((0x0000ffffU & (VL_DIV_III(32, 
                                                            ((IData)(0x00000680U) 
                                                             + 
                                                             ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a) 
                                                              << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))), (IData)(0x00000d01U)) 
                                                 & (((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d)) 
                                                    - (IData)(1U))))),16);
        bufp->chgIData(oldp+568,(VL_SHIFTR_III(32,32,32, 
                                               ((IData)(1U) 
                                                + (
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a))), 1U) 
                                                   >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))), 1U)),32);
        bufp->chgSData(oldp+569,((0x0000ffffU & (((IData)(1U) 
                                                  + 
                                                  (VL_SHIFTL_III(32,32,32, 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a))), 1U) 
                                                   >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))) 
                                                 >> 1U))),16);
        bufp->chgCData(oldp+570,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__state),4);
        bufp->chgSData(oldp+571,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__group_idx),9);
        bufp->chgCData(oldp+572,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__cap_idx),4);
        bufp->chgCData(oldp+573,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wr_idx),4);
        bufp->chgIData(oldp+574,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__byte_idx),32);
        bufp->chgCData(oldp+575,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wait_u),2);
        bufp->chgCData(oldp+576,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wait_v),2);
        bufp->chgSData(oldp+577,((0x00ffU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__group_idx), 3U) 
                                             + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__cap_idx)))),9);
        bufp->chgCData(oldp+578,((0x000000ffU & ((0x000001ffU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__group_idx), 3U)) 
                                                 + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__cap_idx)))),8);
        bufp->chgSData(oldp+579,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c0),16);
        bufp->chgSData(oldp+580,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c1),16);
        bufp->chgSData(oldp+581,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c2),16);
        bufp->chgSData(oldp+582,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c3),16);
        bufp->chgSData(oldp+583,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c4),16);
        bufp->chgSData(oldp+584,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c5),16);
        bufp->chgSData(oldp+585,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c6),16);
        bufp->chgSData(oldp+586,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c7),16);
        bufp->chgWData(oldp+587,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in),128);
        bufp->chgWData(oldp+591,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in),88);
        bufp->chgCData(oldp+594,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_op),3);
        bufp->chgWData(oldp+595,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out),128);
        bufp->chgWData(oldp+599,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out),88);
        bufp->chgSData(oldp+602,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0),11);
        bufp->chgSData(oldp+603,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1),11);
        bufp->chgSData(oldp+604,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2),11);
        bufp->chgSData(oldp+605,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3),11);
        bufp->chgSData(oldp+606,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t4),11);
        bufp->chgSData(oldp+607,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t5),11);
        bufp->chgSData(oldp+608,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t6),11);
        bufp->chgSData(oldp+609,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t7),11);
        bufp->chgCData(oldp+610,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0),8);
        bufp->chgCData(oldp+611,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1),8);
        bufp->chgCData(oldp+612,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2),8);
        bufp->chgCData(oldp+613,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3),8);
        bufp->chgCData(oldp+614,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4),8);
        bufp->chgWData(oldp+615,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out),88);
        bufp->chgSData(oldp+618,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0),11);
        bufp->chgSData(oldp+619,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1),11);
        bufp->chgSData(oldp+620,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2),11);
        bufp->chgSData(oldp+621,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3),11);
        bufp->chgSData(oldp+622,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4),11);
        bufp->chgSData(oldp+623,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5),11);
        bufp->chgSData(oldp+624,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6),11);
        bufp->chgSData(oldp+625,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7),11);
        bufp->chgCData(oldp+626,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0),8);
        bufp->chgCData(oldp+627,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1),8);
        bufp->chgCData(oldp+628,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2),8);
        bufp->chgCData(oldp+629,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3),8);
        bufp->chgCData(oldp+630,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4),8);
        bufp->chgSData(oldp+631,((0x0000ffffU & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))))),16);
        bufp->chgIData(oldp+632,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                             VL_EXTENDS_II(32,16, 
                                                           (0x0000ffffU 
                                                            & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))))))),32);
        bufp->chgIData(oldp+633,((VL_MULS_III(32, (IData)(0x000005a1U), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))) 
                                  - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                VL_EXTENDS_II(32,16, 
                                                              (0x0000ffffU 
                                                               & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout)))))))),32);
        bufp->chgIData(oldp+634,(VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout)))),32);
        bufp->chgIData(oldp+635,(VL_SHIFTRS_III(32,32,32, 
                                                (VL_MULS_III(32, (IData)(0x000005a1U), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))) 
                                                 - 
                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))))))), 0x00000010U)),32);
        bufp->chgSData(oldp+636,((0x0000ffffU & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))))),16);
        bufp->chgIData(oldp+637,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                             VL_EXTENDS_II(32,16, 
                                                           (0x0000ffffU 
                                                            & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))))))),32);
        bufp->chgIData(oldp+638,((VL_MULS_III(32, (IData)(0x000005a1U), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))) 
                                  - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                VL_EXTENDS_II(32,16, 
                                                              (0x0000ffffU 
                                                               & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b)))))))),32);
        bufp->chgIData(oldp+639,(VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b)))),32);
        bufp->chgIData(oldp+640,(VL_SHIFTRS_III(32,32,32, 
                                                (VL_MULS_III(32, (IData)(0x000005a1U), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))) 
                                                 - 
                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))))))), 0x00000010U)),32);
        bufp->chgBit(oldp+641,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__state))));
        bufp->chgBit(oldp+642,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_absorb_start));
        bufp->chgWData(oldp+643,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din),272);
        bufp->chgBit(oldp+652,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_next));
        bufp->chgWData(oldp+653,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_data),1344);
        bufp->chgBit(oldp+695,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_valid));
        bufp->chgBit(oldp+696,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__state))));
        bufp->chgCData(oldp+697,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__loop_i),3);
        bufp->chgCData(oldp+698,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__loop_j),3);
        bufp->chgCData(oldp+699,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__k_val),3);
        bufp->chgSData(oldp+700,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__coeff_cnt),9);
        bufp->chgSData(oldp+701,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__poly_base),12);
        bufp->chgWData(oldp+702,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_buf),1344);
        bufp->chgSData(oldp+744,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_cnt),11);
        bufp->chgCData(oldp+745,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__state),3);
        bufp->chgSData(oldp+746,((0x00000fffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_buf[0U])),12);
        bufp->chgBit(oldp+747,((0x0d01U > (0x00000fffU 
                                           & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_buf[0U]))));
        bufp->chgCData(oldp+748,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__state),2);
        bufp->chgWData(oldp+749,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__sponge_state),1600);
        bufp->chgBit(oldp+799,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_start));
        bufp->chgBit(oldp+800,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_done));
        bufp->chgWData(oldp+801,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_out),1600);
        __Vtemp_1[0U] = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[0U];
        __Vtemp_1[1U] = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[1U];
        __Vtemp_1[2U] = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[2U];
        __Vtemp_1[3U] = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[3U];
        __Vtemp_1[4U] = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[4U];
        __Vtemp_1[5U] = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[5U];
        __Vtemp_1[6U] = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[6U];
        __Vtemp_1[7U] = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[7U];
        __Vtemp_1[8U] = (0x001f0000U | vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din[8U]);
        __Vtemp_1[9U] = 0U;
        __Vtemp_1[10U] = 0U;
        __Vtemp_1[11U] = 0U;
        __Vtemp_1[12U] = 0U;
        __Vtemp_1[13U] = 0U;
        __Vtemp_1[14U] = 0U;
        __Vtemp_1[15U] = 0U;
        __Vtemp_1[16U] = 0U;
        __Vtemp_1[17U] = 0U;
        __Vtemp_1[18U] = 0U;
        __Vtemp_1[19U] = 0U;
        __Vtemp_1[20U] = 0U;
        __Vtemp_1[21U] = 0U;
        __Vtemp_1[22U] = 0U;
        __Vtemp_1[23U] = 0U;
        __Vtemp_1[24U] = 0U;
        __Vtemp_1[25U] = 0U;
        __Vtemp_1[26U] = 0U;
        __Vtemp_1[27U] = 0U;
        __Vtemp_1[28U] = 0U;
        __Vtemp_1[29U] = 0U;
        __Vtemp_1[30U] = 0U;
        __Vtemp_1[31U] = 0U;
        __Vtemp_1[32U] = 0U;
        __Vtemp_1[33U] = 0U;
        __Vtemp_1[34U] = 0U;
        __Vtemp_1[35U] = 0U;
        __Vtemp_1[36U] = 0U;
        __Vtemp_1[37U] = 0U;
        __Vtemp_1[38U] = 0U;
        __Vtemp_1[39U] = 0U;
        __Vtemp_1[40U] = 0U;
        __Vtemp_1[41U] = 0x80000000U;
        __Vtemp_1[42U] = 0U;
        __Vtemp_1[43U] = 0U;
        __Vtemp_1[44U] = 0U;
        __Vtemp_1[45U] = 0U;
        __Vtemp_1[46U] = 0U;
        __Vtemp_1[47U] = 0U;
        __Vtemp_1[48U] = 0U;
        __Vtemp_1[49U] = 0U;
        bufp->chgWData(oldp+851,(__Vtemp_1),1600);
        bufp->chgBit(oldp+901,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__state))));
        bufp->chgCData(oldp+902,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__state),2);
        bufp->chgCData(oldp+903,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_cnt),5);
        bufp->chgWData(oldp+904,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state),1600);
        bufp->chgQData(oldp+954,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__rc),64);
        bufp->chgWData(oldp+956,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state),1600);
        bufp->chgQData(oldp+1006,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][0U]),64);
        bufp->chgQData(oldp+1008,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][1U]),64);
        bufp->chgQData(oldp+1010,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][2U]),64);
        bufp->chgQData(oldp+1012,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][3U]),64);
        bufp->chgQData(oldp+1014,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][4U]),64);
        bufp->chgQData(oldp+1016,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][0U]),64);
        bufp->chgQData(oldp+1018,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][1U]),64);
        bufp->chgQData(oldp+1020,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][2U]),64);
        bufp->chgQData(oldp+1022,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][3U]),64);
        bufp->chgQData(oldp+1024,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][4U]),64);
        bufp->chgQData(oldp+1026,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][0U]),64);
        bufp->chgQData(oldp+1028,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][1U]),64);
        bufp->chgQData(oldp+1030,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][2U]),64);
        bufp->chgQData(oldp+1032,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][3U]),64);
        bufp->chgQData(oldp+1034,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][4U]),64);
        bufp->chgQData(oldp+1036,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][0U]),64);
        bufp->chgQData(oldp+1038,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][1U]),64);
        bufp->chgQData(oldp+1040,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][2U]),64);
        bufp->chgQData(oldp+1042,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][3U]),64);
        bufp->chgQData(oldp+1044,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][4U]),64);
        bufp->chgQData(oldp+1046,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][0U]),64);
        bufp->chgQData(oldp+1048,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][1U]),64);
        bufp->chgQData(oldp+1050,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][2U]),64);
        bufp->chgQData(oldp+1052,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][3U]),64);
        bufp->chgQData(oldp+1054,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][4U]),64);
        bufp->chgQData(oldp+1056,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[0]),64);
        bufp->chgQData(oldp+1058,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[1]),64);
        bufp->chgQData(oldp+1060,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[2]),64);
        bufp->chgQData(oldp+1062,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[3]),64);
        bufp->chgQData(oldp+1064,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[4]),64);
        bufp->chgQData(oldp+1066,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[0]),64);
        bufp->chgQData(oldp+1068,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[1]),64);
        bufp->chgQData(oldp+1070,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[2]),64);
        bufp->chgQData(oldp+1072,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[3]),64);
        bufp->chgQData(oldp+1074,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[4]),64);
        bufp->chgQData(oldp+1076,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][0U]),64);
        bufp->chgQData(oldp+1078,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][1U]),64);
        bufp->chgQData(oldp+1080,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][2U]),64);
        bufp->chgQData(oldp+1082,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][3U]),64);
        bufp->chgQData(oldp+1084,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][4U]),64);
        bufp->chgQData(oldp+1086,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][0U]),64);
        bufp->chgQData(oldp+1088,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][1U]),64);
        bufp->chgQData(oldp+1090,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][2U]),64);
        bufp->chgQData(oldp+1092,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][3U]),64);
        bufp->chgQData(oldp+1094,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][4U]),64);
        bufp->chgQData(oldp+1096,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][0U]),64);
        bufp->chgQData(oldp+1098,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][1U]),64);
        bufp->chgQData(oldp+1100,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][2U]),64);
        bufp->chgQData(oldp+1102,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][3U]),64);
        bufp->chgQData(oldp+1104,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][4U]),64);
        bufp->chgQData(oldp+1106,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][0U]),64);
        bufp->chgQData(oldp+1108,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][1U]),64);
        bufp->chgQData(oldp+1110,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][2U]),64);
        bufp->chgQData(oldp+1112,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][3U]),64);
        bufp->chgQData(oldp+1114,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][4U]),64);
        bufp->chgQData(oldp+1116,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][0U]),64);
        bufp->chgQData(oldp+1118,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][1U]),64);
        bufp->chgQData(oldp+1120,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][2U]),64);
        bufp->chgQData(oldp+1122,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][3U]),64);
        bufp->chgQData(oldp+1124,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][4U]),64);
        bufp->chgQData(oldp+1126,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U]),64);
        bufp->chgQData(oldp+1128,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U]),64);
        bufp->chgQData(oldp+1130,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U]),64);
        bufp->chgQData(oldp+1132,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U]),64);
        bufp->chgQData(oldp+1134,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U]),64);
        bufp->chgQData(oldp+1136,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U]),64);
        bufp->chgQData(oldp+1138,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U]),64);
        bufp->chgQData(oldp+1140,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U]),64);
        bufp->chgQData(oldp+1142,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U]),64);
        bufp->chgQData(oldp+1144,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U]),64);
        bufp->chgQData(oldp+1146,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U]),64);
        bufp->chgQData(oldp+1148,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U]),64);
        bufp->chgQData(oldp+1150,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U]),64);
        bufp->chgQData(oldp+1152,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U]),64);
        bufp->chgQData(oldp+1154,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U]),64);
        bufp->chgQData(oldp+1156,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U]),64);
        bufp->chgQData(oldp+1158,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U]),64);
        bufp->chgQData(oldp+1160,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U]),64);
        bufp->chgQData(oldp+1162,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U]),64);
        bufp->chgQData(oldp+1164,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U]),64);
        bufp->chgQData(oldp+1166,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U]),64);
        bufp->chgQData(oldp+1168,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U]),64);
        bufp->chgQData(oldp+1170,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U]),64);
        bufp->chgQData(oldp+1172,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U]),64);
        bufp->chgQData(oldp+1174,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U]),64);
        bufp->chgQData(oldp+1176,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][0U]),64);
        bufp->chgQData(oldp+1178,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][1U]),64);
        bufp->chgQData(oldp+1180,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][2U]),64);
        bufp->chgQData(oldp+1182,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][3U]),64);
        bufp->chgQData(oldp+1184,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][4U]),64);
        bufp->chgQData(oldp+1186,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][0U]),64);
        bufp->chgQData(oldp+1188,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][1U]),64);
        bufp->chgQData(oldp+1190,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][2U]),64);
        bufp->chgQData(oldp+1192,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][3U]),64);
        bufp->chgQData(oldp+1194,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][4U]),64);
        bufp->chgQData(oldp+1196,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][0U]),64);
        bufp->chgQData(oldp+1198,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][1U]),64);
        bufp->chgQData(oldp+1200,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][2U]),64);
        bufp->chgQData(oldp+1202,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][3U]),64);
        bufp->chgQData(oldp+1204,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][4U]),64);
        bufp->chgQData(oldp+1206,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][0U]),64);
        bufp->chgQData(oldp+1208,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][1U]),64);
        bufp->chgQData(oldp+1210,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][2U]),64);
        bufp->chgQData(oldp+1212,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][3U]),64);
        bufp->chgQData(oldp+1214,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][4U]),64);
        bufp->chgQData(oldp+1216,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][0U]),64);
        bufp->chgQData(oldp+1218,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][1U]),64);
        bufp->chgQData(oldp+1220,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][2U]),64);
        bufp->chgQData(oldp+1222,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][3U]),64);
        bufp->chgQData(oldp+1224,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][4U]),64);
        bufp->chgQData(oldp+1226,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][0U]),64);
        bufp->chgQData(oldp+1228,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][1U]),64);
        bufp->chgQData(oldp+1230,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][2U]),64);
        bufp->chgQData(oldp+1232,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][3U]),64);
        bufp->chgQData(oldp+1234,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][4U]),64);
        bufp->chgQData(oldp+1236,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][0U]),64);
        bufp->chgQData(oldp+1238,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][1U]),64);
        bufp->chgQData(oldp+1240,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][2U]),64);
        bufp->chgQData(oldp+1242,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][3U]),64);
        bufp->chgQData(oldp+1244,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][4U]),64);
        bufp->chgQData(oldp+1246,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][0U]),64);
        bufp->chgQData(oldp+1248,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][1U]),64);
        bufp->chgQData(oldp+1250,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][2U]),64);
        bufp->chgQData(oldp+1252,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][3U]),64);
        bufp->chgQData(oldp+1254,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][4U]),64);
        bufp->chgQData(oldp+1256,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][0U]),64);
        bufp->chgQData(oldp+1258,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][1U]),64);
        bufp->chgQData(oldp+1260,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][2U]),64);
        bufp->chgQData(oldp+1262,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][3U]),64);
        bufp->chgQData(oldp+1264,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][4U]),64);
        bufp->chgQData(oldp+1266,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][0U]),64);
        bufp->chgQData(oldp+1268,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][1U]),64);
        bufp->chgQData(oldp+1270,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][2U]),64);
        bufp->chgQData(oldp+1272,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][3U]),64);
        bufp->chgQData(oldp+1274,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][4U]),64);
        bufp->chgCData(oldp+1276,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__out_len_type),3);
        bufp->chgBit(oldp+1277,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__mode));
        bufp->chgBit(oldp+1278,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__is_sha3));
        bufp->chgBit(oldp+1279,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid));
        bufp->chgBit(oldp+1280,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_last));
        bufp->chgWData(oldp+1281,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din),1088);
        bufp->chgCData(oldp+1315,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_len),8);
        bufp->chgBit(oldp+1316,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack));
        bufp->chgCData(oldp+1317,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state),4);
        bufp->chgWData(oldp+1318,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state),1600);
        bufp->chgWData(oldp+1368,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din),1088);
        bufp->chgCData(oldp+1402,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len),8);
        bufp->chgBit(oldp+1403,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last));
        bufp->chgBit(oldp+1404,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block));
        bufp->chgBit(oldp+1405,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode));
        bufp->chgBit(oldp+1406,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3));
        bufp->chgCData(oldp+1407,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type),3);
        bufp->chgBit(oldp+1408,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start));
        bufp->chgBit(oldp+1409,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done));
        bufp->chgWData(oldp+1410,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_out),1600);
        bufp->chgIData(oldp+1460,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i),32);
        bufp->chgWData(oldp+1461,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__absorb_next),1600);
        bufp->chgSData(oldp+1511,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits),11);
        bufp->chgBit(oldp+1512,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state))));
        bufp->chgCData(oldp+1513,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state),2);
        bufp->chgCData(oldp+1514,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt),5);
        bufp->chgWData(oldp+1515,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state),1600);
        bufp->chgQData(oldp+1565,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__rc),64);
        bufp->chgWData(oldp+1567,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state),1600);
        bufp->chgQData(oldp+1617,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][0U]),64);
        bufp->chgQData(oldp+1619,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][1U]),64);
        bufp->chgQData(oldp+1621,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][2U]),64);
        bufp->chgQData(oldp+1623,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][3U]),64);
        bufp->chgQData(oldp+1625,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][4U]),64);
        bufp->chgQData(oldp+1627,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][0U]),64);
        bufp->chgQData(oldp+1629,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][1U]),64);
        bufp->chgQData(oldp+1631,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][2U]),64);
        bufp->chgQData(oldp+1633,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][3U]),64);
        bufp->chgQData(oldp+1635,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][4U]),64);
        bufp->chgQData(oldp+1637,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][0U]),64);
        bufp->chgQData(oldp+1639,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][1U]),64);
        bufp->chgQData(oldp+1641,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][2U]),64);
        bufp->chgQData(oldp+1643,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][3U]),64);
        bufp->chgQData(oldp+1645,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][4U]),64);
        bufp->chgQData(oldp+1647,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][0U]),64);
        bufp->chgQData(oldp+1649,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][1U]),64);
        bufp->chgQData(oldp+1651,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][2U]),64);
        bufp->chgQData(oldp+1653,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][3U]),64);
        bufp->chgQData(oldp+1655,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][4U]),64);
        bufp->chgQData(oldp+1657,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][0U]),64);
        bufp->chgQData(oldp+1659,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][1U]),64);
        bufp->chgQData(oldp+1661,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][2U]),64);
        bufp->chgQData(oldp+1663,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][3U]),64);
        bufp->chgQData(oldp+1665,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][4U]),64);
        bufp->chgQData(oldp+1667,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[0]),64);
        bufp->chgQData(oldp+1669,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[1]),64);
        bufp->chgQData(oldp+1671,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[2]),64);
        bufp->chgQData(oldp+1673,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[3]),64);
        bufp->chgQData(oldp+1675,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[4]),64);
        bufp->chgQData(oldp+1677,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[0]),64);
        bufp->chgQData(oldp+1679,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[1]),64);
        bufp->chgQData(oldp+1681,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[2]),64);
        bufp->chgQData(oldp+1683,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[3]),64);
        bufp->chgQData(oldp+1685,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[4]),64);
        bufp->chgQData(oldp+1687,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][0U]),64);
        bufp->chgQData(oldp+1689,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][1U]),64);
        bufp->chgQData(oldp+1691,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][2U]),64);
        bufp->chgQData(oldp+1693,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][3U]),64);
        bufp->chgQData(oldp+1695,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][4U]),64);
        bufp->chgQData(oldp+1697,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][0U]),64);
        bufp->chgQData(oldp+1699,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][1U]),64);
        bufp->chgQData(oldp+1701,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][2U]),64);
        bufp->chgQData(oldp+1703,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][3U]),64);
        bufp->chgQData(oldp+1705,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][4U]),64);
        bufp->chgQData(oldp+1707,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][0U]),64);
        bufp->chgQData(oldp+1709,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][1U]),64);
        bufp->chgQData(oldp+1711,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][2U]),64);
        bufp->chgQData(oldp+1713,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][3U]),64);
        bufp->chgQData(oldp+1715,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][4U]),64);
        bufp->chgQData(oldp+1717,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][0U]),64);
        bufp->chgQData(oldp+1719,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][1U]),64);
        bufp->chgQData(oldp+1721,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][2U]),64);
        bufp->chgQData(oldp+1723,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][3U]),64);
        bufp->chgQData(oldp+1725,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][4U]),64);
        bufp->chgQData(oldp+1727,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][0U]),64);
        bufp->chgQData(oldp+1729,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][1U]),64);
        bufp->chgQData(oldp+1731,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][2U]),64);
        bufp->chgQData(oldp+1733,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][3U]),64);
        bufp->chgQData(oldp+1735,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][4U]),64);
        bufp->chgQData(oldp+1737,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U]),64);
        bufp->chgQData(oldp+1739,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U]),64);
        bufp->chgQData(oldp+1741,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U]),64);
        bufp->chgQData(oldp+1743,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U]),64);
        bufp->chgQData(oldp+1745,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U]),64);
        bufp->chgQData(oldp+1747,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U]),64);
        bufp->chgQData(oldp+1749,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U]),64);
        bufp->chgQData(oldp+1751,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U]),64);
        bufp->chgQData(oldp+1753,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U]),64);
        bufp->chgQData(oldp+1755,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U]),64);
        bufp->chgQData(oldp+1757,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U]),64);
        bufp->chgQData(oldp+1759,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U]),64);
        bufp->chgQData(oldp+1761,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U]),64);
        bufp->chgQData(oldp+1763,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U]),64);
        bufp->chgQData(oldp+1765,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U]),64);
        bufp->chgQData(oldp+1767,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U]),64);
        bufp->chgQData(oldp+1769,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U]),64);
        bufp->chgQData(oldp+1771,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U]),64);
        bufp->chgQData(oldp+1773,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U]),64);
        bufp->chgQData(oldp+1775,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U]),64);
        bufp->chgQData(oldp+1777,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U]),64);
        bufp->chgQData(oldp+1779,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U]),64);
        bufp->chgQData(oldp+1781,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U]),64);
        bufp->chgQData(oldp+1783,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U]),64);
        bufp->chgQData(oldp+1785,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U]),64);
        bufp->chgQData(oldp+1787,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][0U]),64);
        bufp->chgQData(oldp+1789,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][1U]),64);
        bufp->chgQData(oldp+1791,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][2U]),64);
        bufp->chgQData(oldp+1793,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][3U]),64);
        bufp->chgQData(oldp+1795,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][4U]),64);
        bufp->chgQData(oldp+1797,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][0U]),64);
        bufp->chgQData(oldp+1799,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][1U]),64);
        bufp->chgQData(oldp+1801,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][2U]),64);
        bufp->chgQData(oldp+1803,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][3U]),64);
        bufp->chgQData(oldp+1805,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][4U]),64);
        bufp->chgQData(oldp+1807,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][0U]),64);
        bufp->chgQData(oldp+1809,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][1U]),64);
        bufp->chgQData(oldp+1811,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][2U]),64);
        bufp->chgQData(oldp+1813,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][3U]),64);
        bufp->chgQData(oldp+1815,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][4U]),64);
        bufp->chgQData(oldp+1817,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][0U]),64);
        bufp->chgQData(oldp+1819,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][1U]),64);
        bufp->chgQData(oldp+1821,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][2U]),64);
        bufp->chgQData(oldp+1823,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][3U]),64);
        bufp->chgQData(oldp+1825,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][4U]),64);
        bufp->chgQData(oldp+1827,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][0U]),64);
        bufp->chgQData(oldp+1829,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][1U]),64);
        bufp->chgQData(oldp+1831,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][2U]),64);
        bufp->chgQData(oldp+1833,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][3U]),64);
        bufp->chgQData(oldp+1835,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][4U]),64);
        bufp->chgQData(oldp+1837,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][0U]),64);
        bufp->chgQData(oldp+1839,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][1U]),64);
        bufp->chgQData(oldp+1841,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][2U]),64);
        bufp->chgQData(oldp+1843,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][3U]),64);
        bufp->chgQData(oldp+1845,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][4U]),64);
        bufp->chgQData(oldp+1847,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][0U]),64);
        bufp->chgQData(oldp+1849,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][1U]),64);
        bufp->chgQData(oldp+1851,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][2U]),64);
        bufp->chgQData(oldp+1853,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][3U]),64);
        bufp->chgQData(oldp+1855,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][4U]),64);
        bufp->chgQData(oldp+1857,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][0U]),64);
        bufp->chgQData(oldp+1859,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][1U]),64);
        bufp->chgQData(oldp+1861,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][2U]),64);
        bufp->chgQData(oldp+1863,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][3U]),64);
        bufp->chgQData(oldp+1865,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][4U]),64);
        bufp->chgQData(oldp+1867,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][0U]),64);
        bufp->chgQData(oldp+1869,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][1U]),64);
        bufp->chgQData(oldp+1871,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][2U]),64);
        bufp->chgQData(oldp+1873,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][3U]),64);
        bufp->chgQData(oldp+1875,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][4U]),64);
        bufp->chgQData(oldp+1877,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][0U]),64);
        bufp->chgQData(oldp+1879,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][1U]),64);
        bufp->chgQData(oldp+1881,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][2U]),64);
        bufp->chgQData(oldp+1883,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][3U]),64);
        bufp->chgQData(oldp+1885,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][4U]),64);
        bufp->chgCData(oldp+1887,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__state),3);
        bufp->chgCData(oldp+1888,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage),3);
        bufp->chgCData(oldp+1889,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt),8);
        bufp->chgCData(oldp+1890,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__warm_cnt),2);
        bufp->chgSData(oldp+1891,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_call_ctr),16);
        bufp->chgSData(oldp+1892,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_call_id),16);
        bufp->chgCData(oldp+1893,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_tag_id),4);
        bufp->chgCData(oldp+1894,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a),8);
        bufp->chgCData(oldp+1895,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b),8);
        bufp->chgCData(oldp+1896,((0x0000007fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en)
                                                   ? 
                                                  ((((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)))) 
                                                    - (IData)(1U)) 
                                                   - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group))
                                                   : 
                                                  ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group) 
                                                   + 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage)))))),7);
        bufp->chgSData(oldp+1897,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_a),16);
        bufp->chgSData(oldp+1898,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_b),16);
        bufp->chgSData(oldp+1899,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_a),16);
        bufp->chgSData(oldp+1900,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_b),16);
        bufp->chgSData(oldp+1901,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__zeta),16);
        bufp->chgSData(oldp+1902,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a),16);
        bufp->chgSData(oldp+1903,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b),16);
        bufp->chgSData(oldp+1904,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__bf_out_a),16);
        bufp->chgSData(oldp+1905,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__bf_out_b),16);
        bufp->chgBit(oldp+1906,((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage)))));
        Vtb_kyber_top___024root__trace_chg_dtype____0(vlSelf, bufp, 1907, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_a);
        Vtb_kyber_top___024root__trace_chg_dtype____1(vlSelf, bufp, 1910, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_b);
        Vtb_kyber_top___024root__trace_chg_dtype____2(vlSelf, bufp, 1913, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_we);
        bufp->chgBit(oldp+1916,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_a));
        bufp->chgBit(oldp+1917,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_b));
        bufp->chgBit(oldp+1918,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__we_a));
        bufp->chgCData(oldp+1919,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_a),8);
        bufp->chgCData(oldp+1920,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_b),8);
        bufp->chgCData(oldp+1921,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_a),8);
        bufp->chgCData(oldp+1922,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_b),8);
        bufp->chgSData(oldp+1923,(((0U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__state))
                                    ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_din)
                                    : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__bf_out_a))),16);
        bufp->chgBit(oldp+1924,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__last_write_ram));
        bufp->chgBit(oldp+1925,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en));
        bufp->chgCData(oldp+1926,((0x0000007fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt))),7);
        bufp->chgCData(oldp+1927,((0x0000007fU & ((
                                                   (0x80U 
                                                    >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)) 
                                                   - (IData)(1U)) 
                                                  & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt)))),8);
        bufp->chgCData(oldp+1928,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group),8);
        bufp->chgCData(oldp+1929,((0x80U >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff))),8);
        bufp->chgCData(oldp+1930,((0x000000ffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en)
                                                   ? 
                                                  ((((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)))) 
                                                    - (IData)(1U)) 
                                                   - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group))
                                                   : 
                                                  ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group) 
                                                   + 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage)))))),8);
        bufp->chgCData(oldp+1931,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff),3);
        bufp->chgSData(oldp+1932,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b) 
                                                  + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a)))),16);
        bufp->chgSData(oldp+1933,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a) 
                                                  - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b)))),16);
        bufp->chgSData(oldp+1934,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mode)
                                                   ? 
                                                  (- 
                                                   ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a) 
                                                    - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b)))
                                                   : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b)))),16);
        bufp->chgIData(oldp+1935,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod),32);
        bufp->chgSData(oldp+1936,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod 
                                                                 - 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod))))), 0x00000010U))),16);
        bufp->chgSData(oldp+1937,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a),16);
        bufp->chgSData(oldp+1938,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a),16);
        bufp->chgSData(oldp+1939,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a) 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a))), 0x0000001aU))))))),16);
        bufp->chgSData(oldp+1940,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a) 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a))), 0x0000001aU))))))),16);
        bufp->chgSData(oldp+1941,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_a),16);
        bufp->chgSData(oldp+1942,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_sum_a_b),16);
        bufp->chgSData(oldp+1943,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mont_res),16);
        bufp->chgBit(oldp+1944,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mode));
        bufp->chgIData(oldp+1945,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a)))),32);
        bufp->chgSData(oldp+1946,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a))), 0x0000001aU))),16);
        bufp->chgIData(oldp+1947,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a))), 0x0000001aU))))),32);
        bufp->chgIData(oldp+1948,(VL_SHIFTRS_III(32,32,32, 
                                                 VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a))), 0x0000001aU)),32);
        bufp->chgIData(oldp+1949,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a)))),32);
        bufp->chgSData(oldp+1950,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a))), 0x0000001aU))),16);
        bufp->chgIData(oldp+1951,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a))), 0x0000001aU))))),32);
        bufp->chgIData(oldp+1952,(VL_SHIFTRS_III(32,32,32, 
                                                 VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a))), 0x0000001aU)),32);
        bufp->chgSData(oldp+1953,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod))),16);
        bufp->chgIData(oldp+1954,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod))))),32);
        bufp->chgIData(oldp+1955,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod 
                                   - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                 VL_EXTENDS_II(32,16, 
                                                               (0x0000ffffU 
                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod)))))),32);
        bufp->chgIData(oldp+1956,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod)),32);
        bufp->chgIData(oldp+1957,(VL_SHIFTRS_III(32,32,32, 
                                                 (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod))))), 0x00000010U)),32);
        bufp->chgSData(oldp+1958,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_real),16);
        bufp->chgCData(oldp+1959,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__state),4);
        bufp->chgCData(oldp+1960,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__cnt),8);
        bufp->chgCData(oldp+1961,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_pair),8);
        bufp->chgSData(oldp+1962,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_zeta_base),16);
        bufp->chgSData(oldp+1963,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_zeta_eff),16);
        bufp->chgSData(oldp+1964,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_c0_old),16);
        bufp->chgSData(oldp+1965,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_c1_old),16);
        bufp->chgIData(oldp+1966,(VL_MULS_III(32, (IData)(0x00000549U), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0)))),32);
        bufp->chgIData(oldp+1967,(VL_MULS_III(32, (IData)(0x00000549U), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1)))),32);
        bufp->chgSData(oldp+1968,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                (VL_MULS_III(32, (IData)(0x00000549U), 
                                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                                                 - 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))), 0x00000010U))),16);
        bufp->chgSData(oldp+1969,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                (VL_MULS_III(32, (IData)(0x00000549U), 
                                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                                                 - 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))), 0x00000010U))),16);
        bufp->chgSData(oldp+1970,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_use_tomont)
                                                   ? 
                                                  VL_SHIFTRS_III(16,32,32, 
                                                                 (VL_MULS_III(32, (IData)(0x00000549U), 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                                                  - 
                                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                              VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))), 0x00000010U)
                                                   : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0)))),16);
        bufp->chgSData(oldp+1971,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_use_tomont)
                                                   ? 
                                                  VL_SHIFTRS_III(16,32,32, 
                                                                 (VL_MULS_III(32, (IData)(0x00000549U), 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                                                  - 
                                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                              VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))), 0x00000010U)
                                                   : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1)))),16);
        bufp->chgSData(oldp+1972,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a),16);
        bufp->chgSData(oldp+1973,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a),16);
        bufp->chgIData(oldp+1974,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a)))),32);
        bufp->chgSData(oldp+1975,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU))),16);
        bufp->chgIData(oldp+1976,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU))))),32);
        bufp->chgIData(oldp+1977,(VL_SHIFTRS_III(32,32,32, 
                                                 VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU)),32);
        bufp->chgIData(oldp+1978,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a)))),32);
        bufp->chgSData(oldp+1979,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU))),16);
        bufp->chgIData(oldp+1980,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU))))),32);
        bufp->chgIData(oldp+1981,(VL_SHIFTRS_III(32,32,32, 
                                                 VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU)),32);
        bufp->chgIData(oldp+1982,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0),32);
        bufp->chgIData(oldp+1983,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1),32);
        bufp->chgSData(oldp+1984,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0 
                                                                 - 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0))))), 0x00000010U))),16);
        bufp->chgSData(oldp+1985,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1 
                                                                 - 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1))))), 0x00000010U))),16);
        bufp->chgSData(oldp+1986,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a0) 
                                                  + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a1)))),16);
        bufp->chgSData(oldp+1987,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b0) 
                                                  + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b1)))),16);
        bufp->chgIData(oldp+1988,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum),32);
        bufp->chgSData(oldp+1989,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum 
                                                                 - 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum))))), 0x00000010U))),16);
        bufp->chgIData(oldp+1990,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta),32);
        bufp->chgSData(oldp+1991,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta 
                                                                 - 
                                                                 VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                             VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta))))), 0x00000010U))),16);
        bufp->chgSData(oldp+1992,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a),16);
        bufp->chgSData(oldp+1993,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a),16);
        bufp->chgSData(oldp+1994,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a) 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a))), 0x0000001aU))))))),16);
        bufp->chgSData(oldp+1995,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a) 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a))), 0x0000001aU))))))),16);
        bufp->chgSData(oldp+1996,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_00),16);
        bufp->chgSData(oldp+1997,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_11),16);
        bufp->chgSData(oldp+1998,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_sum),16);
        bufp->chgSData(oldp+1999,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_zeta),16);
        bufp->chgSData(oldp+2000,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_00),16);
        bufp->chgSData(oldp+2001,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_11),16);
        bufp->chgSData(oldp+2002,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_sum),16);
        bufp->chgSData(oldp+2003,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_zeta),16);
        bufp->chgIData(oldp+2004,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a)))),32);
        bufp->chgSData(oldp+2005,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a))), 0x0000001aU))),16);
        bufp->chgIData(oldp+2006,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a))), 0x0000001aU))))),32);
        bufp->chgIData(oldp+2007,(VL_SHIFTRS_III(32,32,32, 
                                                 VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a))), 0x0000001aU)),32);
        bufp->chgIData(oldp+2008,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a)))),32);
        bufp->chgSData(oldp+2009,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a))), 0x0000001aU))),16);
        bufp->chgIData(oldp+2010,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a))), 0x0000001aU))))),32);
        bufp->chgIData(oldp+2011,(VL_SHIFTRS_III(32,32,32, 
                                                 VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a))), 0x0000001aU)),32);
        bufp->chgSData(oldp+2012,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0))),16);
        bufp->chgIData(oldp+2013,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0))))),32);
        bufp->chgIData(oldp+2014,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0 
                                   - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                 VL_EXTENDS_II(32,16, 
                                                               (0x0000ffffU 
                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0)))))),32);
        bufp->chgIData(oldp+2015,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0)),32);
        bufp->chgIData(oldp+2016,(VL_SHIFTRS_III(32,32,32, 
                                                 (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0))))), 0x00000010U)),32);
        bufp->chgSData(oldp+2017,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1))),16);
        bufp->chgIData(oldp+2018,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1))))),32);
        bufp->chgIData(oldp+2019,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1 
                                   - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                 VL_EXTENDS_II(32,16, 
                                                               (0x0000ffffU 
                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1)))))),32);
        bufp->chgIData(oldp+2020,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1)),32);
        bufp->chgIData(oldp+2021,(VL_SHIFTRS_III(32,32,32, 
                                                 (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1))))), 0x00000010U)),32);
        bufp->chgSData(oldp+2022,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum))),16);
        bufp->chgIData(oldp+2023,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum))))),32);
        bufp->chgIData(oldp+2024,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum 
                                   - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                 VL_EXTENDS_II(32,16, 
                                                               (0x0000ffffU 
                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum)))))),32);
        bufp->chgIData(oldp+2025,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum)),32);
        bufp->chgIData(oldp+2026,(VL_SHIFTRS_III(32,32,32, 
                                                 (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum))))), 0x00000010U)),32);
        bufp->chgSData(oldp+2027,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta))),16);
        bufp->chgIData(oldp+2028,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta))))),32);
        bufp->chgIData(oldp+2029,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta 
                                   - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                 VL_EXTENDS_II(32,16, 
                                                               (0x0000ffffU 
                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta)))))),32);
        bufp->chgIData(oldp+2030,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta)),32);
        bufp->chgIData(oldp+2031,(VL_SHIFTRS_III(32,32,32, 
                                                 (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta))))), 0x00000010U)),32);
        bufp->chgSData(oldp+2032,((0x0000ffffU & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))),16);
        bufp->chgIData(oldp+2033,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))),32);
        bufp->chgIData(oldp+2034,((VL_MULS_III(32, (IData)(0x00000549U), 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                   - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                 VL_EXTENDS_II(32,16, 
                                                               (0x0000ffffU 
                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0)))))))),32);
        bufp->chgIData(oldp+2035,(VL_MULS_III(32, (IData)(0xffbb5049U), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0)))),32);
        bufp->chgIData(oldp+2036,(VL_SHIFTRS_III(32,32,32, 
                                                 (VL_MULS_III(32, (IData)(0x00000549U), 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))), 0x00000010U)),32);
        bufp->chgSData(oldp+2037,((0x0000ffffU & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))),16);
        bufp->chgIData(oldp+2038,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))),32);
        bufp->chgIData(oldp+2039,((VL_MULS_III(32, (IData)(0x00000549U), 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                   - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                 VL_EXTENDS_II(32,16, 
                                                               (0x0000ffffU 
                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1)))))))),32);
        bufp->chgIData(oldp+2040,(VL_MULS_III(32, (IData)(0xffbb5049U), 
                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1)))),32);
        bufp->chgIData(oldp+2041,(VL_SHIFTRS_III(32,32,32, 
                                                 (VL_MULS_III(32, (IData)(0x00000549U), 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))), 0x00000010U)),32);
    }
    bufp->chgBit(oldp+2042,(vlSelfRef.tb_kyber_top__DOT__clk));
    bufp->chgIData(oldp+2043,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ext_din),32);
    bufp->chgSData(oldp+2044,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__base_v),12);
}

void Vtb_kyber_top___024root__trace_chg_dtype____0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_chg_dtype____0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
}

void Vtb_kyber_top___024root__trace_chg_dtype____1(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_chg_dtype____1\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
}

void Vtb_kyber_top___024root__trace_chg_dtype____2(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_chg_dtype____2\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
}

void Vtb_kyber_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_cleanup\n"); );
    // Body
    Vtb_kyber_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_kyber_top___024root*>(voidSelf);
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
