#include "kyber_cgra.h"
int main(){
  // opcode map: 0=keygen,1=encap,2=decap
  mmio_write(KYBER_REG_CTRL, (0u<<1) | 1u); // start keygen
  while(((mmio_read(KYBER_REG_STATUS)>>0)&1u)==0u){}
  // demo: read first few bytes written by core stream
  for(int i=0;i<16;i++){
    (void)mmio_read(KYBER_REG_DOUT);
  }
  return 0;
}

