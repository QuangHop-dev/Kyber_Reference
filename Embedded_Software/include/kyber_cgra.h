#ifndef KYBER_CGRA_H
#define KYBER_CGRA_H
#include <stdint.h>
#define KYBER_BASE 0x43C00000u
#define KYBER_REG_CTRL   0x00
#define KYBER_REG_STATUS 0x04
#define KYBER_REG_READY  0x08
#define KYBER_REG_IOFLG  0x0C
#define KYBER_REG_ADDR   0x10
#define KYBER_REG_DOUT   0x14
#define KYBER_REG_DIN    0x18
static inline void mmio_write(uint32_t off, uint32_t v){ *(volatile uint32_t*)(KYBER_BASE+off)=v; }
static inline uint32_t mmio_read(uint32_t off){ return *(volatile uint32_t*)(KYBER_BASE+off); }
#endif

