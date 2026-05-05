// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_kyber_top__Syms.h"


VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____7(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____8(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____9(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_sub__TOP__0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_sub__TOP__0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_kyber_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"mode_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"ext_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"ext_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"ext_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"ext_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2043,0,"ext_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+2045,0,"DUMMY_SEED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 511,0);
    VL_TRACE_DECL_BUS(tracep,c+2061,0,"PK_BASE_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2062,0,"SK_BASE_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2063,0,"CT_BASE_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2064,0,"SS_BASE_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"mode_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"check_ref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"compare_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"dump_ref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"clear_tb_ram__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"print_hex_block__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"print_hex_block__Vstatic__b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"dump_hex_file__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"dump_hex_file__Vstatic__fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"dump_mem_file__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"dump_mem_file__Vstatic__fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"dump_ref_vectors__Vstatic__mode_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"run_mode_report__Vstatic__pk_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"run_mode_report__Vstatic__sk_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"run_mode_report__Vstatic__ct_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"run_mode_report__Vstatic__mode_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"compare_with_file__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"compare_with_file__Vstatic__fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"compare_with_file__Vstatic__mism",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "run_mode_report__Vstatic__host_cpu_sk_assemble", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"bi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"s_sz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"mode_k",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"ext_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"ext_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"ext_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"ext_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2043,0,"ext_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2065,0,"ext_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+2045,0,"seed_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 511,0);
    VL_TRACE_DECL_BIT(tracep,c+2065,0,"seed_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"state_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2066,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2067,0,"S_KG_TRNG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2068,0,"S_KG_HASH_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2069,0,"S_KG_PRF_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2070,0,"S_KG_CBD_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2071,0,"S_KG_NTT_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2072,0,"S_KG_DMA_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2073,0,"S_KG_PRF_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2074,0,"S_KG_CBD_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2075,0,"S_KG_NTT_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2076,0,"S_KG_DMA_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2077,0,"S_KG_GEN_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2078,0,"S_KG_PWMA_A_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2079,0,"S_KG_HASH_PK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2080,0,"S_KG_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2081,0,"S_ENC_TRNG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2082,0,"S_ENC_HASH_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2083,0,"S_ENC_PRF_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2084,0,"S_ENC_CBD_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2085,0,"S_ENC_NTT_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2086,0,"S_ENC_PWMA_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2087,0,"S_ENC_INTT_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2088,0,"S_ENC_PWMA_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2089,0,"S_ENC_INTT_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2090,0,"S_ENC_ADD_MATH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2091,0,"S_ENC_COMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2092,0,"S_ENC_HASH_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2093,0,"S_ENC_KDF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2094,0,"S_ENC_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2095,0,"S_ENC_READ_PK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2096,0,"S_DEC_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2097,0,"S_DEC_DECOMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2098,0,"S_DEC_NTT_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2099,0,"S_DEC_PWMA_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2100,0,"S_DEC_INTT_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2101,0,"S_DEC_CMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2102,0,"S_DEC_KDF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2103,0,"S_DEC_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2104,0,"S_DEC_READ_REST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2105,0,"S_DEC_READ_CT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2106,0,"S_KG_WRITE_REST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2107,0,"S_KG_DMA_TRNG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2108,0,"PK_EXT_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2109,0,"SK_EXT_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2110,0,"CT_EXT_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2111,0,"SS_EXT_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2112,0,"TRNG_EXT_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+44,0,"reg_rho",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+52,0,"reg_sigma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+60,0,"reg_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+68,0,"reg_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+76,0,"reg_K_bar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+84,0,"reg_r_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+92,0,"reg_H_pk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+100,0,"reg_H_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+108,0,"reg_trng_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 511,0);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"dec_ct_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"dec_reenc_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"enc_kdf_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"dec_kdf_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"pwma_sp_from_scratch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"pwma_use_tomont",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"enc_noise_kind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"enc_ntt_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"dma_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"loop_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"loop_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"dec_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2113,0,"mode_k_locked",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2114,0,"k_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"ntt_dec_intt_gs_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+137,0,"hpk_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"hpk_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"hpk_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"hpk_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"hpk_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"ct_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"ct_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"ct_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"ct_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"ct_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"ct_dec_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"ct_dec_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"ct_dec_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"ct_dec_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"ct_dec_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"ct_reenc_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"ct_reenc_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"ct_reenc_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"ct_reenc_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"ct_reenc_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2115,0,"biu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2116,0,"base_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2044,0,"base_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2117,0,"SCR_SP_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2118,0,"SCR_EP_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2119,0,"SCR_U_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2120,0,"SCR_V_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2121,0,"SCR_EPP_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2122,0,"SCR_MSG_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2123,0,"SCR_TMP_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"flip_bytes_32__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"barrett_reduce_q__Vstatic__t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"barrett_reduce_q__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2065,0,"trng_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+2045,0,"trng_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 511,0);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"hash_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"hash_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+159,0,"hash_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"hash_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"hash_prf_eta3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"hash_stream_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"hash_stream_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"hash_stream_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+198,0,"hash_stream_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"hash_stream_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"hash_stream_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+234,0,"hash_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1535,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"hash_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"hash_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+284,0,"cbd_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"cbd_base_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+286,0,"cbd_eta3_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+287,0,"cbd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"cbd_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"cbd_ram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"cbd_poly_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+291,0,"gm_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"gm_transposed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+293,0,"gm_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+294,0,"gm_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+295,0,"gm_ram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+296,0,"gm_ram_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+297,0,"ntt_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+298,0,"ntt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"ntt_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+300,0,"ntt_ext_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+301,0,"ntt_ext_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"ntt_ext_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2124,0,"NTT_TAG_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2125,0,"NTT_TAG_ENC_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2126,0,"NTT_TAG_ENC_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2127,0,"NTT_TAG_DEC_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2128,0,"NTT_TAG_DEC_STU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2129,0,"NTT_TAG_RE_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2130,0,"NTT_TAG_RE_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+303,0,"ntt_dbg_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+304,0,"ntt_ext_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"ntt_ext_dout_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+306,0,"pwma_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"pwma_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"pwma_ram0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"pwma_ram1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"pwma_ram0_dout_a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"pwma_ram0_dout_a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"pwma_ram0_dout_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"pwma_ram0_dout_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"pwma_ram1_dout_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"pwma_ram1_dout_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"pwma_ram1_din_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"pwma_ram1_din_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"pwma_ram1_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+319,0,"pwma_dbg_pair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"pwma_dbg_a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"pwma_dbg_a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"pwma_dbg_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"pwma_dbg_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"pwma_dbg_zeta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"pwma_dbg_base_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+326,0,"pwma_dbg_base_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+327,0,"pwma_dbg_t_old0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"pwma_dbg_t_old1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"pwma_dbg_t_new0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"pwma_dbg_t_new1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+329,0,"pwma_zeta_real",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"pwma_zeta_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+331,0,"cmp_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"cmp_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"cmp_not_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2131,0,"cmp_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"cmp_addr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"cmp_addr_c_prime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2132,0,"cmp_data_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2133,0,"cmp_data_c_prime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2134,0,"comp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2135,0,"comp_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+336,0,"comp_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"comp_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"ntt_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"fsm_we_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"fsm_we_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"fsm_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"fsm_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"fsm_din_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"fsm_din_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+345,0,"fsm_ntt_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"fsm_ntt_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"fsm_ntt_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"pwma_acc_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2119,0,"ENC_U_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2120,0,"ENC_V_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2136,0,"DEBUG_CKPT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"dbg_pwma_u_pair_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"dbg_pwma_v_pair_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"dbg_pwma_dec_pair_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+352,0,"dec_group_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+353,0,"dec_slot_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+354,0,"ct_cap_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+355,0,"dec_unpack_group_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+356,0,"dec_unpack_coeff_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"dec_j_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"dec_j_work",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"dec_codec_op_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+363,0,"dec_codec_bytes_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"dec_invntt_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"dec_invntt_mul_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"dec_invntt_scaled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"dec_invntt_scaled_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+370,0,"dec_codec_coeff_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+2137,0,"ct_pack_ext_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"pwma_sp_poly_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"add_main_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+376,0,"add_main_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"add_main_d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+378,0,"add_main_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2128,0,"dec_u_group_sz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2129,0,"dec_u_bytes_per_grp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2138,0,"dec_u_groups_per_poly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+2139,0,"dec_u_total_groups",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+2140,0,"dec_v_group_sz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2128,0,"dec_v_bytes_per_grp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2119,0,"DEC_ACC_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+379,0,"scratch_we_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"scratch_we_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"scratch_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"scratch_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"scratch_din_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"scratch_din_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"a_cache_we_fsm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"a_cache_addr_fsm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"a_cache_din_fsm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+388,0,"we_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+389,0,"we_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"din_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"din_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"dout_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"dout_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"a_cache_dout_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"a_cache_dout_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"scratch_dout_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+395,0,"scratch_dout_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"pwma_sp_addr_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"pwma_sp_addr_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"scratch_pwma_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"scratch_addr_a_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"scratch_addr_b_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"scratch_we_a_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+402,0,"scratch_we_b_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+403,0,"ct_pack_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"ct_pack_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"ct_pack_u_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+406,0,"ct_pack_v_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"ct_pack_u_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"ct_pack_v_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+407,0,"ct_pack_ext_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"ct_pack_ext_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"ct_pack_ext_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"a_ij_cache_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"a_cache_addr_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"a_cache_addr_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"pwma_zeta_eff_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"hash_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"cbd_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+416,0,"ntt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+417,0,"pwma_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+418,0,"cmp_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"gm_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+420,0,"ct_pack_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2065,0,"eta1_is_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2141,0,"sk_ram_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2142,0,"ct_bytes_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2141,0,"enc_u_coeff_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"pack_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+422,0,"pack_poly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"pack_pair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"pack_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"pack_pk_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"pack_sk_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"pack_pk_byte_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"pack_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"pack_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"pack_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"pack_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+432,0,"pack_b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2143,0,"pk_bytes_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2142,0,"sk_polyvec_bytes_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+433,0,"dec_sk_reload_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"dec_sk_poly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+435,0,"dec_sk_pair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"dec_sk_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"dec_sk_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"dec_sk_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+439,0,"dec_sk_b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"dec_sk_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+441,0,"dec_sk_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"hash_fetching",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"fetch_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+444,0,"fetch_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+445,0,"dec_fetch_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2144,0,"bi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2145,0,"bi2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2146,0,"ci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"rem12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"rem12b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+448,0,"c0s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+449,0,"c1s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+450,0,"c0n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+451,0,"c1n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+452,0,"u_pair_base12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+453,0,"u_pair_base_b12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+454,0,"u_even_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+455,0,"u_odd_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+456,0,"u_global_even_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"u_global_odd_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"u_cand_off2_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"u_cand_off3_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"v_pair_base12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"v_pair_base_b12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"v_even_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"v_odd_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"v_cand_off2_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"v_cand_off3_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+466,0,"u_src_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+467,0,"ep_src_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"ep_src_next12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+469,0,"su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+470,0,"sv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"v_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"su_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+473,0,"ep_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"epp_term_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"uidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+476,0,"v_src_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"epp_src_idx12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"vidx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"vidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+480,0,"bitpos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+481,0,"mb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+482,0,"bytev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2147,0,"first_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2148,0,"first_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+483,0,"mbyte_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"mbyte_idx_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"mb_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"mbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"all_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2149,0,"first_mis",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+488,0,"sk_coeff_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+489,0,"v_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+490,0,"su_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+491,0,"diff_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"diff_q17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+493,0,"tmsg32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+494,0,"sk_pair_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_a_cache", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+2150,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2151,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+496,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+497,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"dout_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+2152,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+498,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2153,0,"din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"dout_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cbd", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+284,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+286,0,"eta3_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+234,0,"prf_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1535,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"base_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+287,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"ram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"poly_coeffs_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2154,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2155,0,"PROCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2156,0,"FINISH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+500,0,"shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1535,0);
    VL_TRACE_DECL_BUS(tracep,c+548,0,"coeff_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BIT(tracep,c+549,0,"saved_eta3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+550,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+551,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+553,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+554,0,"b4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+555,0,"b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+556,0,"sum_a_eta2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"sum_b_eta2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+558,0,"cbd_val_eta2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"sum_a_eta3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"sum_b_eta3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"cbd_val_eta3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+562,0,"cbd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cmp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+331,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2131,0,"data_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"addr_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2132,0,"data_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"addr_c_prime",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2133,0,"data_c_prime",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"not_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2154,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2155,0,"COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2156,0,"FINISH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+563,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+564,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+565,0,"diff_accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_comp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2134,0,"mode_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2135,0,"d_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"in_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+336,0,"out_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2157,0,"Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2158,0,"Q_HALF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+566,0,"compress_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+567,0,"compress_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+568,0,"decompress_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+569,0,"decompress_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ct_dec_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+2159,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2160,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2161,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ct_pack", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+403,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2110,0,"ct_base_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"u_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"u_coeff_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+406,0,"v_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"v_coeff_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+407,0,"ext_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"ext_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"ext_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2065,0,"ext_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2136,0,"DEBUG_CT_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+2124,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2125,0,"S_U_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2126,0,"S_U_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2127,0,"S_U_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2128,0,"S_U_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2129,0,"S_V_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2130,0,"S_V_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2162,0,"S_V_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2163,0,"S_V_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2164,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+570,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2114,0,"k_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2165,0,"u_group_sz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2166,0,"u_bytes_per_grp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2167,0,"u_groups_per_poly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+2139,0,"u_total_groups",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+2140,0,"v_group_sz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2165,0,"v_bytes_per_grp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2168,0,"v_total_groups",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+2169,0,"u_total_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2170,0,"v_total_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2171,0,"ct_total_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+571,0,"group_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+572,0,"cap_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+573,0,"wr_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+574,0,"byte_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+575,0,"wait_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+576,0,"wait_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+577,0,"v_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+578,0,"v_addr_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+579,0,"c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+580,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+581,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+582,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+583,0,"c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+584,0,"c5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+585,0,"c6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+586,0,"c7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+587,0,"codec_coeff_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+591,0,"codec_bytes_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_BUS(tracep,c+594,0,"codec_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+595,0,"codec_coeff_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+599,0,"codec_bytes_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_codec", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+594,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+587,0,"coeff_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+591,0,"bytes_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_WIDE(tracep,c+595,0,"coeff_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+599,0,"bytes_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_BUS(tracep,c+2172,0,"OP_PACK_U10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2173,0,"OP_UNPACK_U10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2174,0,"OP_PACK_V4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2175,0,"OP_UNPACK_V4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"compress_d__Vstatic__u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"compress_d__Vstatic__t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"compress_d__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"decompress_d__Vstatic__t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+602,0,"t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+603,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+604,0,"t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+605,0,"t3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+606,0,"t4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+607,0,"t5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"t6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+609,0,"t7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+610,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+611,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+612,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+613,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+614,0,"b4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ct_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+2159,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2160,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2161,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ct_reenc_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+2159,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2160,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2161,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_dec_codec", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+2178,0,"coeff_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+363,0,"bytes_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_WIDE(tracep,c+370,0,"coeff_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+615,0,"bytes_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_BUS(tracep,c+2172,0,"OP_PACK_U10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2173,0,"OP_UNPACK_U10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2174,0,"OP_PACK_V4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2175,0,"OP_UNPACK_V4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"compress_d__Vstatic__u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"compress_d__Vstatic__t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"compress_d__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"decompress_d__Vstatic__t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+620,0,"t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+621,0,"t3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+622,0,"t4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+623,0,"t5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"t6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"t7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2176,0,"w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+626,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+627,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+628,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+629,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+630,0,"b4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2177,0,"b10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_dec_invntt_scale", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+631,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+633,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+634,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+635,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_dec_invntt_scale_b", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+636,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+637,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+638,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+640,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_enc_scratch", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+2150,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2151,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"dout_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+402,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+395,0,"dout_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_gm", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+291,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+44,0,"rho",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"mode_k",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"transposed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+293,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+295,0,"ram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+296,0,"ram_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+294,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+641,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2184,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+2117,0,"BASE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"flip_bytes_32__Vstatic__fi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"xof_absorb_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+643,0,"xof_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 271,0);
    VL_TRACE_DECL_BIT(tracep,c+652,0,"xof_squeeze_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+653,0,"xof_squeeze_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1343,0);
    VL_TRACE_DECL_BIT(tracep,c+695,0,"xof_squeeze_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+696,0,"xof_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+697,0,"loop_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+698,0,"loop_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+699,0,"k_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+700,0,"coeff_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+701,0,"poly_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_WIDE(tracep,c+702,0,"bit_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1343,0);
    VL_TRACE_DECL_BUS(tracep,c+744,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+2172,0,"GM_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2173,0,"GM_XOF_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2185,0,"GM_WAIT_SQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2186,0,"GM_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2174,0,"GM_REJECT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2175,0,"GM_WAIT_MORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2187,0,"GM_NEXT_POLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2188,0,"GM_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+745,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+746,0,"candidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+747,0,"candidate_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_xof", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"absorb_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+643,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 271,0);
    VL_TRACE_DECL_BIT(tracep,c+652,0,"squeeze_next",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+653,0,"squeeze_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1343,0);
    VL_TRACE_DECL_BIT(tracep,c+695,0,"squeeze_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+696,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2154,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2155,0,"KECCAK_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2156,0,"KECCAK_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2189,0,"SQUEEZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+748,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+749,0,"sponge_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_BIT(tracep,c+799,0,"f_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+800,0,"f_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+801,0,"f_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_WIDE(tracep,c+851,0,"absorbed_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_PUSH_PREFIX(tracep, "keccak_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+799,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+749,0,"in_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_WIDE(tracep,c+801,0,"out_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_BIT(tracep,c+800,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+901,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2154,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2155,0,"PROCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2156,0,"FINISH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+902,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+903,0,"round_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_WIDE(tracep,c+904,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_QUAD(tracep,c+954,0,"rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_WIDE(tracep,c+956,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_PUSH_PREFIX(tracep, "round_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_WIDE(tracep,c+904,0,"in_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_QUAD(tracep,c+954,0,"rc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_WIDE(tracep,c+956,0,"out_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_PUSH_PREFIX(tracep, "state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1006,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1008,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1010,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1012,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1014,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1016,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1018,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1020,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1022,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1024,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1026,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1028,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1030,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1032,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1034,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1036,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1038,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1040,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1042,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1044,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1046,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1048,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1050,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1052,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "c", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    for (int i = 0; i < 5; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+1056+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "d", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    for (int i = 0; i < 5; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+1066+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "theta_state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1076,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1078,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1080,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1082,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1084,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1086,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1088,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1090,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1092,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1094,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1096,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1098,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1100,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1102,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1104,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1106,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1108,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1110,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1112,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1114,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1116,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1118,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1120,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1122,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1124,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rho_pi_state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1126,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1128,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1130,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1132,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1134,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1136,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1138,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1140,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1142,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1144,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1146,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1148,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1150,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1152,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1154,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1156,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1158,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1160,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1162,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1164,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1166,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1168,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1170,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1172,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1174,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "chi_state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1176,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1178,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1180,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1182,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1184,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1186,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1188,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1190,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1192,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1194,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1196,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1198,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1200,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1202,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1204,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1206,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1208,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1210,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1212,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1214,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1216,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1218,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1220,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1222,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1224,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iota_state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1226,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1228,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1230,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1232,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1234,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1236,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1238,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1240,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1242,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1244,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1246,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1248,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1250,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1252,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1254,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1256,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1258,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1260,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1262,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1264,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1266,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1268,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1270,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1272,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1274,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_hash", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"hash_cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"prf_eta3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+159,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"din_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"stream_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"stream_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"stream_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+198,0,"stream_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"stream_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"stream_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+234,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1535,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2172,0,"CMD_XOF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2173,0,"CMD_PRF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2185,0,"CMD_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2186,0,"CMD_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2174,0,"CMD_KDF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1276,0,"out_len_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+1277,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1278,0,"is_sha3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_shake", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1276,0,"out_len_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+1277,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1278,0,"is_sha3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+159,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"byte_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"stream_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"stream_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"stream_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+198,0,"stream_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"stream_byte_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"stream_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+234,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1535,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1279,0,"i_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1280,0,"i_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+1281,0,"eff_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+1315,0,"eff_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+1316,0,"i_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "sponge_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+1281,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+1315,0,"byte_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1276,0,"out_len_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+1279,0,"i_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1280,0,"i_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1277,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1278,0,"is_sha3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1316,0,"i_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+234,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1535,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2124,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2125,0,"ABSORB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2126,0,"PERMUTE_MORE_GO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2127,0,"PERMUTE_MORE_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2128,0,"WAIT_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2129,0,"PADDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2130,0,"PERMUTE_FIN_GO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2162,0,"PERMUTE_FIN_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2163,0,"SQUEEZE1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2164,0,"SQUEEZE2P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2190,0,"SQUEEZE2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1317,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+1318,0,"sponge_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_WIDE(tracep,c+1368,0,"beat_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1087,0);
    VL_TRACE_DECL_BUS(tracep,c+1402,0,"beat_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+1403,0,"beat_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1404,0,"final_full_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1405,0,"saved_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1406,0,"saved_is_sha3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1407,0,"saved_out_len_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"f_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"f_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+1410,0,"f_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_BUS(tracep,c+1460,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1461,0,"absorb_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_BUS(tracep,c+1511,0,"rate_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_PUSH_PREFIX(tracep, "f_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+1318,0,"in_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_WIDE(tracep,c+1410,0,"out_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1512,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2154,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2155,0,"PROCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2156,0,"FINISH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1513,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1514,0,"round_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_WIDE(tracep,c+1515,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_QUAD(tracep,c+1565,0,"rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_WIDE(tracep,c+1567,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_PUSH_PREFIX(tracep, "round_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_WIDE(tracep,c+1515,0,"in_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_DECL_QUAD(tracep,c+1565,0,"rc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_WIDE(tracep,c+1567,0,"out_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1599,0);
    VL_TRACE_PUSH_PREFIX(tracep, "state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1617,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1619,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1621,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1623,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1625,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1627,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1629,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1631,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1633,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1635,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1637,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1639,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1641,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1643,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1645,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1647,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1649,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1651,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1653,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1655,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1657,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1659,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1661,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1663,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1665,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "c", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    for (int i = 0; i < 5; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+1667+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "d", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    for (int i = 0; i < 5; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+1677+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "theta_state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1687,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1689,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1691,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1693,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1695,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1697,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1699,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1701,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1703,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1705,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1707,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1709,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1711,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1713,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1715,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1717,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1719,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1721,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1723,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1725,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1727,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1729,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1731,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1733,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1735,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rho_pi_state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1737,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1739,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1741,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1743,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1745,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1747,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1749,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1751,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1753,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1755,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1757,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1759,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1761,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1763,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1765,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1767,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1769,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1771,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1773,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1775,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1777,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1779,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1781,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1783,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1785,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "chi_state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1787,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1789,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1791,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1793,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1795,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1797,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1799,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1801,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1803,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1805,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1807,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1809,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1811,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1813,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1815,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1817,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1819,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1821,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1823,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1825,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1827,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1829,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1831,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1833,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1835,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iota_state", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1837,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1839,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1841,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1843,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1845,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1847,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1849,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1851,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1853,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1855,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1857,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1859,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1861,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1863,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1865,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1867,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1869,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1871,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1873,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1875,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+1877,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1879,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1881,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1883,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1885,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_hpk_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+2159,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2160,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+137,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2161,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ntt", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+297,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+298,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"intt_gs_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+303,0,"dbg_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+300,0,"ext_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+301,0,"ext_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"ext_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+304,0,"ext_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"ext_dout_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1887,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1888,0,"stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1889,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1890,0,"warm_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1891,0,"dbg_call_ctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1892,0,"dbg_call_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1893,0,"dbg_tag_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2172,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2173,0,"WARM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2185,0,"CALC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2186,0,"PREP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2174,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1894,0,"addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1895,0,"addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1896,0,"twiddle_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1897,0,"ram0_dout_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1898,0,"ram0_dout_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1899,0,"ram1_dout_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1900,0,"ram1_dout_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1901,0,"zeta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1902,0,"bf_in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1903,0,"bf_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1904,0,"bf_out_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1905,0,"bf_out_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1906,0,"is_even_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vtb_kyber_top___024root__trace_init_dtype____7(vlSelf, tracep, "delay_addr_a", 0, c+1907, VerilatedTraceSigDirection::NONE);

    Vtb_kyber_top___024root__trace_init_dtype____8(vlSelf, tracep, "delay_addr_b", 0, c+1910, VerilatedTraceSigDirection::NONE);

    Vtb_kyber_top___024root__trace_init_dtype____9(vlSelf, tracep, "delay_we", 0, c+1913, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BIT(tracep,c+1916,0,"we_ram0_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1917,0,"we_ram0_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1918,0,"we_ram1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1919,0,"ram0_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1920,0,"ram0_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1921,0,"ram1_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1922,0,"ram1_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1923,0,"ram0_din_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1924,0,"last_write_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_addr_gen", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1888,0,"stage",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+1925,0,"inv_gs_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1926,0,"cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1894,0,"addr_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1895,0,"addr_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1896,0,"twiddle_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1927,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1928,0,"group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1929,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1930,0,"twiddle_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1931,0,"stage_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_butterfly", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+298,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1902,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1903,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1901,0,"zeta",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1904,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1905,0,"out_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1932,0,"sum_a_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1933,0,"sub_a_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1934,0,"mult_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1901,0,"mult_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1935,0,"prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1936,0,"mont_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1937,0,"temp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1938,0,"temp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1939,0,"barrett_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1940,0,"barrett_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1941,0,"s1_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1942,0,"s1_sum_a_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1943,0,"s1_mont_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1944,0,"s1_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_barrett_a", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1937,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1939,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2191,0,"V_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1945,0,"mul_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1946,0,"shift_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1947,0,"mul_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1948,0,"shift_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_barrett_b", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1938,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1940,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2191,0,"V_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1949,0,"mul_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1950,0,"shift_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1951,0,"mul_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1952,0,"shift_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mont", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1935,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1936,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1953,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1954,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1955,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1956,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1957,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ram0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1916,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1919,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1923,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1897,0,"dout_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1917,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1920,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1905,0,"din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1898,0,"dout_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ram1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1918,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1921,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1904,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1899,0,"dout_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1918,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1922,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1905,0,"din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1900,0,"dout_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_twiddle", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_WIDE(tracep,c+2192,0,"MEMFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 415,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1896,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1901,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_pwma", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+306,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"ram0_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"ram0_dout_a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"ram0_dout_a1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"ram0_dout_b0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"ram0_dout_b1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"zeta_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1958,0,"zeta_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"use_tomont",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"ram1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"ram1_dout_c0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"ram1_dout_c1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"ram1_din_c0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"ram1_din_c1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"ram1_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+319,0,"dbg_pair",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"dbg_a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"dbg_a1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"dbg_b0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"dbg_b1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"dbg_zeta",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"dbg_base_c0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+326,0,"dbg_base_c1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+327,0,"dbg_t_old0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"dbg_t_old1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"dbg_t_new0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"dbg_t_new1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2124,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2125,0,"ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2126,0,"WAIT_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2127,0,"CAPTURE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2128,0,"WAIT_M1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2129,0,"WAIT_M2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2130,0,"WAIT_M3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2162,0,"WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2163,0,"DONE_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1959,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1960,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+319,0,"pair_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"bm_a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"bm_a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"bm_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"bm_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"bm_zeta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1961,0,"s1_pair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1962,0,"s1_zeta_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1963,0,"s1_zeta_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1964,0,"s1_c0_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1965,0,"s1_c1_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+327,0,"s3_c0_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"s3_c1_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"base_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+326,0,"base_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2205,0,"TOMONT_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1966,0,"base_c0_tomont_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1967,0,"base_c1_tomont_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1968,0,"base_c0_tomont",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1969,0,"base_c1_tomont",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1970,0,"base_c0_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1971,0,"base_c1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1972,0,"acc_c0_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1973,0,"acc_c1_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_barrett_acc_c0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1972,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2191,0,"V_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1974,0,"mul_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1975,0,"shift_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1976,0,"mul_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1977,0,"shift_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_barrett_acc_c1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1973,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2191,0,"V_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1978,0,"mul_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1979,0,"shift_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1980,0,"mul_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1981,0,"shift_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_basemul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"a1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"b0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"b1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"zeta",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"c0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+326,0,"c1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1982,0,"mul_a0_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1983,0,"mul_a1_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1984,0,"mont_a0_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1985,0,"mont_a1_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1986,0,"sum_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1987,0,"sum_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1988,0,"mul_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1989,0,"mont_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1990,0,"mul_zeta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1991,0,"mont_zeta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1992,0,"c0_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1993,0,"c1_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1994,0,"c0_barrett",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1995,0,"c1_barrett",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1996,0,"s1_mont_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1997,0,"s1_mont_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1998,0,"s1_mont_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1999,0,"s1_zeta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2000,0,"s2_mont_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2001,0,"s2_mont_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2002,0,"s2_mont_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2003,0,"s2_mont_zeta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_barrett_c0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1992,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1994,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2191,0,"V_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2004,0,"mul_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2005,0,"shift_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2006,0,"mul_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2007,0,"shift_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_barrett_c1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1993,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1995,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2191,0,"V_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2008,0,"mul_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2009,0,"shift_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2010,0,"mul_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2011,0,"shift_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mont_00", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1982,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1984,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2012,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2013,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2014,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2015,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2016,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mont_11", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1983,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1985,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2017,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2018,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2019,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2020,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2021,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mont_sum", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1988,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1989,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2022,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2023,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2024,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2025,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2026,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mont_zeta", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1990,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1991,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2027,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2028,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2029,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2030,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2031,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mont_tomont_c0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1966,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1968,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2032,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2033,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2034,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2035,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2036,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mont_tomont_c1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1967,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1969,0,"t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2182,0,"KYBER_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2183,0,"KYBER_QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2037,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+2038,0,"t_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2039,0,"res_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2040,0,"u_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2041,0,"t_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+2150,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2151,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+388,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"dout_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+389,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"dout_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_twiddle_pwma", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_WIDE(tracep,c+2206,0,"MEMFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 455,0);
    VL_TRACE_DECL_BIT(tracep,c+2042,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1958,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+8,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+10,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+12,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+16,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+18,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+22,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+24,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+26,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+28,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+30,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+32,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+34,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+36,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+38,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+40,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+44,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+48,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____1(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____1(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____1\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____1(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____1\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    for (int i = 0; i < 5; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____2(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____2(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____2\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____2(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____2\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    for (int i = 0; i < 5; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____3(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____3(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____3\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____3(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____3(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____3\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+8,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+10,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+12,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+16,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+18,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+22,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+24,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+26,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+28,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+30,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+32,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+34,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+36,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+38,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+40,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+44,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+48,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____4(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____4(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____4\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____4(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____4(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____4\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+8,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+10,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+12,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+16,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+18,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+22,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+24,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+26,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+28,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+30,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+32,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+34,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+36,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+38,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+40,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+44,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+48,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____5(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____5(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____5\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____5(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____5(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____5\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+8,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+10,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+12,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+16,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+18,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+22,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+24,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+26,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+28,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+30,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+32,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+34,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+36,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+38,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+40,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+44,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+48,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____6(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____6(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____6\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____6(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____6(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____6\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+8,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+10,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+12,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+16,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+18,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+22,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+24,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+26,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+28,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+30,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+32,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+34,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+36,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+38,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 4);
    VL_TRACE_DECL_QUAD(tracep,c+40,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+44,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+48,fidx,"[4]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____7(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____7(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____7\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____7(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____7(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____7\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____8(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____8(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____8\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____8(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____8(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____8\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____9(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype____9(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype____9\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_dtype_sub____9(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_dtype_sub____9(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_dtype_sub____9\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_init_top(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_init_top\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_kyber_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_kyber_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_register(Vtb_kyber_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_register\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_kyber_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_kyber_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_kyber_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_kyber_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_const_0_sub_0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_const_0\n"); );
    // Body
    Vtb_kyber_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_kyber_top___024root*>(voidSelf);
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_kyber_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vtb_kyber_top__ConstPool__CONST_h333c9d82_0;
extern const VlWide<13>/*415:0*/ Vtb_kyber_top__ConstPool__CONST_hc37a9829_0;
extern const VlWide<15>/*479:0*/ Vtb_kyber_top__ConstPool__CONST_he5525c5e_0;

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_const_0_sub_0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_const_0_sub_0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullWData(oldp+2045,(Vtb_kyber_top__ConstPool__CONST_h333c9d82_0),512);
    bufp->fullIData(oldp+2061,(0U),32);
    bufp->fullIData(oldp+2062,(0x000007d0U),32);
    bufp->fullIData(oldp+2063,(0x00001770U),32);
    bufp->fullIData(oldp+2064,(0x00001f40U),32);
    bufp->fullBit(oldp+2065,(1U));
    bufp->fullCData(oldp+2066,(0U),8);
    bufp->fullCData(oldp+2067,(0x0aU),8);
    bufp->fullCData(oldp+2068,(0x0bU),8);
    bufp->fullCData(oldp+2069,(0x0cU),8);
    bufp->fullCData(oldp+2070,(0x0dU),8);
    bufp->fullCData(oldp+2071,(0x0eU),8);
    bufp->fullCData(oldp+2072,(0x0fU),8);
    bufp->fullCData(oldp+2073,(0x10U),8);
    bufp->fullCData(oldp+2074,(0x11U),8);
    bufp->fullCData(oldp+2075,(0x12U),8);
    bufp->fullCData(oldp+2076,(0x13U),8);
    bufp->fullCData(oldp+2077,(0x14U),8);
    bufp->fullCData(oldp+2078,(0x17U),8);
    bufp->fullCData(oldp+2079,(0x18U),8);
    bufp->fullCData(oldp+2080,(0x19U),8);
    bufp->fullCData(oldp+2081,(0x1eU),8);
    bufp->fullCData(oldp+2082,(0x1fU),8);
    bufp->fullCData(oldp+2083,(0x20U),8);
    bufp->fullCData(oldp+2084,(0x21U),8);
    bufp->fullCData(oldp+2085,(0x22U),8);
    bufp->fullCData(oldp+2086,(0x23U),8);
    bufp->fullCData(oldp+2087,(0x24U),8);
    bufp->fullCData(oldp+2088,(0x25U),8);
    bufp->fullCData(oldp+2089,(0x26U),8);
    bufp->fullCData(oldp+2090,(0x27U),8);
    bufp->fullCData(oldp+2091,(0x28U),8);
    bufp->fullCData(oldp+2092,(0x29U),8);
    bufp->fullCData(oldp+2093,(0x2aU),8);
    bufp->fullCData(oldp+2094,(0x2bU),8);
    bufp->fullCData(oldp+2095,(0x2cU),8);
    bufp->fullCData(oldp+2096,(0x32U),8);
    bufp->fullCData(oldp+2097,(0x33U),8);
    bufp->fullCData(oldp+2098,(0x34U),8);
    bufp->fullCData(oldp+2099,(0x35U),8);
    bufp->fullCData(oldp+2100,(0x36U),8);
    bufp->fullCData(oldp+2101,(0x38U),8);
    bufp->fullCData(oldp+2102,(0x39U),8);
    bufp->fullCData(oldp+2103,(0x3aU),8);
    bufp->fullCData(oldp+2104,(0x37U),8);
    bufp->fullCData(oldp+2105,(0x3bU),8);
    bufp->fullCData(oldp+2106,(0x3cU),8);
    bufp->fullCData(oldp+2107,(0x3dU),8);
    bufp->fullIData(oldp+2108,(0U),32);
    bufp->fullIData(oldp+2109,(0x000007d0U),32);
    bufp->fullIData(oldp+2110,(0x00001770U),32);
    bufp->fullIData(oldp+2111,(0x00001f40U),32);
    bufp->fullIData(oldp+2112,(0x00002328U),32);
    bufp->fullCData(oldp+2113,(0U),2);
    bufp->fullCData(oldp+2114,(2U),3);
    bufp->fullIData(oldp+2115,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__biu),32);
    bufp->fullSData(oldp+2116,(0U),12);
    bufp->fullSData(oldp+2117,(0U),12);
    bufp->fullSData(oldp+2118,(0x0400U),12);
    bufp->fullSData(oldp+2119,(0x0800U),12);
    bufp->fullSData(oldp+2120,(0x0c00U),12);
    bufp->fullSData(oldp+2121,(0x0d00U),12);
    bufp->fullSData(oldp+2122,(0x0e00U),12);
    bufp->fullSData(oldp+2123,(0x0f00U),12);
    bufp->fullCData(oldp+2124,(0U),4);
    bufp->fullCData(oldp+2125,(1U),4);
    bufp->fullCData(oldp+2126,(2U),4);
    bufp->fullCData(oldp+2127,(3U),4);
    bufp->fullCData(oldp+2128,(4U),4);
    bufp->fullCData(oldp+2129,(5U),4);
    bufp->fullCData(oldp+2130,(6U),4);
    bufp->fullSData(oldp+2131,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_len),11);
    bufp->fullIData(oldp+2132,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_data_c),32);
    bufp->fullIData(oldp+2133,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_data_c_prime),32);
    bufp->fullBit(oldp+2134,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_op));
    bufp->fullCData(oldp+2135,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d),4);
    bufp->fullBit(oldp+2136,(0U));
    bufp->fullBit(oldp+2137,(1U));
    bufp->fullCData(oldp+2138,(0x40U),7);
    bufp->fullSData(oldp+2139,(0x0080U),10);
    bufp->fullCData(oldp+2140,(8U),4);
    bufp->fullSData(oldp+2141,(0x0200U),12);
    bufp->fullSData(oldp+2142,(0x0300U),12);
    bufp->fullSData(oldp+2143,(0x0320U),12);
    bufp->fullIData(oldp+2144,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__bi),32);
    bufp->fullIData(oldp+2145,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__bi2),32);
    bufp->fullIData(oldp+2146,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ci),32);
    bufp->fullCData(oldp+2147,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__first_in),8);
    bufp->fullCData(oldp+2148,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__first_re),8);
    bufp->fullSData(oldp+2149,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__first_mis),12);
    bufp->fullIData(oldp+2150,(0x0000000cU),32);
    bufp->fullIData(oldp+2151,(0x00001000U),32);
    bufp->fullBit(oldp+2152,(0U));
    bufp->fullSData(oldp+2153,(0U),16);
    bufp->fullCData(oldp+2154,(0U),2);
    bufp->fullCData(oldp+2155,(1U),2);
    bufp->fullCData(oldp+2156,(2U),2);
    bufp->fullIData(oldp+2157,(0x00000d01U),32);
    bufp->fullIData(oldp+2158,(0x00000680U),32);
    bufp->fullIData(oldp+2159,(0x0000000bU),32);
    bufp->fullIData(oldp+2160,(8U),32);
    bufp->fullIData(oldp+2161,(0x00000800U),32);
    bufp->fullCData(oldp+2162,(7U),4);
    bufp->fullCData(oldp+2163,(8U),4);
    bufp->fullCData(oldp+2164,(9U),4);
    bufp->fullCData(oldp+2165,(4U),4);
    bufp->fullCData(oldp+2166,(5U),4);
    bufp->fullCData(oldp+2167,(0x40U),7);
    bufp->fullCData(oldp+2168,(0x20U),6);
    bufp->fullIData(oldp+2169,(0x00000280U),32);
    bufp->fullIData(oldp+2170,(0x00000080U),32);
    bufp->fullIData(oldp+2171,(0x00000300U),32);
    bufp->fullCData(oldp+2172,(0U),3);
    bufp->fullCData(oldp+2173,(1U),3);
    bufp->fullCData(oldp+2174,(4U),3);
    bufp->fullCData(oldp+2175,(5U),3);
    bufp->fullSData(oldp+2176,(0U),11);
    bufp->fullCData(oldp+2177,(0U),8);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    bufp->fullWData(oldp+2178,(__Vtemp_1),128);
    bufp->fullSData(oldp+2182,(0x0d01U),16);
    bufp->fullSData(oldp+2183,(0xf301U),16);
    bufp->fullSData(oldp+2184,(0x0d01U),12);
    bufp->fullCData(oldp+2185,(2U),3);
    bufp->fullCData(oldp+2186,(3U),3);
    bufp->fullCData(oldp+2187,(6U),3);
    bufp->fullCData(oldp+2188,(7U),3);
    bufp->fullCData(oldp+2189,(3U),2);
    bufp->fullCData(oldp+2190,(0x0aU),4);
    bufp->fullIData(oldp+2191,(0x00004ebfU),32);
    bufp->fullWData(oldp+2192,(Vtb_kyber_top__ConstPool__CONST_hc37a9829_0),416);
    bufp->fullSData(oldp+2205,(0x0549U),16);
    bufp->fullWData(oldp+2206,(Vtb_kyber_top__ConstPool__CONST_he5525c5e_0),456);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_0_sub_0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_full_0\n"); );
    // Body
    Vtb_kyber_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_kyber_top___024root*>(voidSelf);
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_kyber_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_dtype____0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar);
VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_dtype____1(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar);
VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_dtype____2(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_0_sub_0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_full_0_sub_0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<50>/*1599:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb_kyber_top__DOT__clear_tb_ram__Vstatic__i),32);
    bufp->fullIData(oldp+1,(vlSelfRef.tb_kyber_top__DOT__print_hex_block__Vstatic__i),32);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_kyber_top__DOT__print_hex_block__Vstatic__b),8);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_kyber_top__DOT__dump_hex_file__Vstatic__i),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_kyber_top__DOT__dump_hex_file__Vstatic__fd),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_kyber_top__DOT__dump_mem_file__Vstatic__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_kyber_top__DOT__dump_mem_file__Vstatic__fd),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_kyber_top__DOT__dump_ref_vectors__Vstatic__mode_tag),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__pk_bytes),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__sk_bytes),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__ct_bytes),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__mode_tag),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_kyber_top__DOT__compare_with_file__Vstatic__i),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_kyber_top__DOT__compare_with_file__Vstatic__fd),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_kyber_top__DOT__compare_with_file__Vstatic__mism),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__host_cpu_sk_assemble__DOT__bi),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_kyber_top__DOT__run_mode_report__Vstatic__host_cpu_sk_assemble__DOT__s_sz),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__flip_bytes_32__Vstatic__i),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__barrett_reduce_q__Vstatic__t),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__barrett_reduce_q__Vstatic__r),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__flip_bytes_32__Vstatic__fi),32);
    bufp->fullBit(oldp+29,(vlSelfRef.tb_kyber_top__DOT__rst));
    bufp->fullBit(oldp+30,(vlSelfRef.tb_kyber_top__DOT__start));
    bufp->fullCData(oldp+31,(vlSelfRef.tb_kyber_top__DOT__opcode),2);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_kyber_top__DOT__mode_k),2);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_kyber_top__DOT__mode_sel),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_kyber_top__DOT__check_ref),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_kyber_top__DOT__compare_errors),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_kyber_top__DOT__dump_ref),32);
    bufp->fullBit(oldp+37,(vlSelfRef.tb_kyber_top__DOT__done));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_kyber_top__DOT__busy));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_kyber_top__DOT__ext_we));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_kyber_top__DOT__ext_re));
    bufp->fullIData(oldp+41,(vlSelfRef.tb_kyber_top__DOT__ext_addr),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_kyber_top__DOT__ext_dout),32);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state),8);
    bufp->fullWData(oldp+44,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_rho),256);
    bufp->fullWData(oldp+52,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_sigma),256);
    bufp->fullWData(oldp+60,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_z),256);
    bufp->fullWData(oldp+68,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_m),256);
    bufp->fullWData(oldp+76,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_K_bar),256);
    bufp->fullWData(oldp+84,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_r_seed),256);
    bufp->fullWData(oldp+92,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_H_pk),256);
    bufp->fullWData(oldp+100,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_H_c),256);
    bufp->fullWData(oldp+108,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__reg_trng_seed),512);
    bufp->fullBit(oldp+124,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_ct_match));
    bufp->fullBit(oldp+125,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_reenc_mode));
    bufp->fullBit(oldp+126,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__enc_kdf_ready));
    bufp->fullBit(oldp+127,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_kdf_ready));
    bufp->fullBit(oldp+128,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_from_scratch));
    bufp->fullBit(oldp+129,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_use_tomont));
    bufp->fullCData(oldp+130,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__enc_noise_kind),2);
    bufp->fullCData(oldp+131,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__enc_ntt_phase),2);
    bufp->fullSData(oldp+132,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dma_cnt),12);
    bufp->fullCData(oldp+133,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_i),3);
    bufp->fullCData(oldp+134,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_j),3);
    bufp->fullCData(oldp+135,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase),4);
    bufp->fullBit(oldp+136,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_dec_intt_gs_en));
    bufp->fullBit(oldp+137,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_we));
    bufp->fullSData(oldp+138,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_addr_a),11);
    bufp->fullCData(oldp+139,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_din),8);
    bufp->fullSData(oldp+140,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_addr_b),11);
    bufp->fullCData(oldp+141,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hpk_dout),8);
    bufp->fullBit(oldp+142,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_we));
    bufp->fullSData(oldp+143,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_addr_a),11);
    bufp->fullCData(oldp+144,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_din),8);
    bufp->fullSData(oldp+145,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_addr_b),11);
    bufp->fullCData(oldp+146,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dout),8);
    bufp->fullBit(oldp+147,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_we));
    bufp->fullSData(oldp+148,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_addr_a),11);
    bufp->fullCData(oldp+149,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_din),8);
    bufp->fullSData(oldp+150,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_addr_b),11);
    bufp->fullCData(oldp+151,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_dec_dout),8);
    bufp->fullBit(oldp+152,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_we));
    bufp->fullSData(oldp+153,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_addr_a),11);
    bufp->fullCData(oldp+154,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_din),8);
    bufp->fullSData(oldp+155,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_addr_b),11);
    bufp->fullCData(oldp+156,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_reenc_dout),8);
    bufp->fullBit(oldp+157,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_start));
    bufp->fullCData(oldp+158,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_cmd),3);
    bufp->fullWData(oldp+159,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din),1088);
    bufp->fullCData(oldp+193,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_bytes),8);
    bufp->fullBit(oldp+194,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_prf_eta3));
    bufp->fullBit(oldp+195,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_en));
    bufp->fullBit(oldp+196,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_valid));
    bufp->fullBit(oldp+197,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_last));
    bufp->fullWData(oldp+198,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din),1088);
    bufp->fullCData(oldp+232,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_bytes),8);
    bufp->fullBit(oldp+233,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__stream_ack));
    bufp->fullWData(oldp+234,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout),1536);
    bufp->fullBit(oldp+282,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_done));
    bufp->fullBit(oldp+283,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))));
    bufp->fullBit(oldp+284,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_start));
    bufp->fullSData(oldp+285,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_base_addr),11);
    bufp->fullBit(oldp+286,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_eta3_mode));
    bufp->fullBit(oldp+287,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_we));
    bufp->fullBit(oldp+288,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_done));
    bufp->fullSData(oldp+289,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_ram_addr),11);
    bufp->fullSData(oldp+290,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_poly_out),16);
    bufp->fullBit(oldp+291,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_start));
    bufp->fullBit(oldp+292,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_transposed));
    bufp->fullBit(oldp+293,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_we));
    bufp->fullBit(oldp+294,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_done));
    bufp->fullSData(oldp+295,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_ram_addr),12);
    bufp->fullSData(oldp+296,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_ram_din),16);
    bufp->fullBit(oldp+297,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_start));
    bufp->fullBit(oldp+298,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mode));
    bufp->fullBit(oldp+299,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_done));
    bufp->fullBit(oldp+300,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_we));
    bufp->fullCData(oldp+301,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr),8);
    bufp->fullSData(oldp+302,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_din),16);
    bufp->fullCData(oldp+303,(((0x24U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state))
                                ? ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_reenc_mode)
                                    ? 5U : 1U) : ((0x26U 
                                                   == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_reenc_mode)
                                                    ? 6U
                                                    : 2U)
                                                   : 
                                                  (((0x33U 
                                                     == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state)) 
                                                    & ((2U 
                                                        == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase)) 
                                                       & (1U 
                                                          == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__enc_ntt_phase))))
                                                    ? 3U
                                                    : 
                                                   (4U 
                                                    & (- (IData)(
                                                                 (0x36U 
                                                                  == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state))))))))),4);
    bufp->fullSData(oldp+304,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout),16);
    bufp->fullSData(oldp+305,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b),16);
    bufp->fullBit(oldp+306,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_start));
    bufp->fullBit(oldp+307,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_done));
    bufp->fullCData(oldp+308,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr),8);
    bufp->fullCData(oldp+309,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_addr),8);
    bufp->fullSData(oldp+310,(((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_from_scratch)
                                ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_dout_a)
                                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))),16);
    bufp->fullSData(oldp+311,(((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_from_scratch)
                                ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_dout_b)
                                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))),16);
    bufp->fullSData(oldp+312,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_dout_a),16);
    bufp->fullSData(oldp+313,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_dout_b),16);
    bufp->fullSData(oldp+314,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a),16);
    bufp->fullSData(oldp+315,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_b),16);
    bufp->fullSData(oldp+316,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a) 
                                              - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0x0000ffffU 
                                                                           & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU))))))),16);
    bufp->fullSData(oldp+317,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a) 
                                              - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0x0000ffffU 
                                                                           & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU))))))),16);
    bufp->fullBit(oldp+318,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_we));
    bufp->fullCData(oldp+319,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__pair_hold),8);
    bufp->fullSData(oldp+320,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a0),16);
    bufp->fullSData(oldp+321,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a1),16);
    bufp->fullSData(oldp+322,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b0),16);
    bufp->fullSData(oldp+323,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b1),16);
    bufp->fullSData(oldp+324,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_zeta),16);
    bufp->fullSData(oldp+325,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0),16);
    bufp->fullSData(oldp+326,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1),16);
    bufp->fullSData(oldp+327,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s3_c0_old),16);
    bufp->fullSData(oldp+328,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s3_c1_old),16);
    bufp->fullSData(oldp+329,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_real),16);
    bufp->fullCData(oldp+330,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_addr),7);
    bufp->fullBit(oldp+331,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_start));
    bufp->fullBit(oldp+332,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_done));
    bufp->fullBit(oldp+333,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_not_equal));
    bufp->fullSData(oldp+334,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_addr_c),11);
    bufp->fullSData(oldp+335,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_addr_c_prime),11);
    bufp->fullSData(oldp+336,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_op)
                                               ? (((IData)(1U) 
                                                   + 
                                                   (VL_SHIFTL_III(32,32,32, 
                                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a))), 1U) 
                                                    >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))) 
                                                  >> 1U)
                                               : (VL_DIV_III(32, 
                                                             ((IData)(0x00000680U) 
                                                              + 
                                                              ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a) 
                                                               << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))), (IData)(0x00000d01U)) 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d)) 
                                                     - (IData)(1U)))))),16);
    bufp->fullCData(oldp+337,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel),3);
    bufp->fullCData(oldp+338,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel),3);
    bufp->fullBit(oldp+339,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_we_a));
    bufp->fullBit(oldp+340,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_we_b));
    bufp->fullSData(oldp+341,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_addr_a),12);
    bufp->fullSData(oldp+342,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_addr_b),12);
    bufp->fullSData(oldp+343,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_din_a),16);
    bufp->fullSData(oldp+344,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_din_b),16);
    bufp->fullBit(oldp+345,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_we));
    bufp->fullCData(oldp+346,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_addr),8);
    bufp->fullSData(oldp+347,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_din),16);
    bufp->fullSData(oldp+348,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_acc_base),12);
    bufp->fullSData(oldp+349,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dbg_pwma_u_pair_cnt),16);
    bufp->fullSData(oldp+350,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dbg_pwma_v_pair_cnt),16);
    bufp->fullSData(oldp+351,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dbg_pwma_dec_pair_cnt),16);
    bufp->fullSData(oldp+352,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_group_idx),10);
    bufp->fullCData(oldp+353,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_slot_idx),4);
    bufp->fullSData(oldp+354,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_cap_idx),12);
    bufp->fullBit(oldp+355,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_unpack_group_valid));
    bufp->fullWData(oldp+356,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_unpack_coeff_latch),128);
    bufp->fullCData(oldp+360,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_j_idx),3);
    bufp->fullCData(oldp+361,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_j_work),3);
    bufp->fullCData(oldp+362,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w),3);
    bufp->fullWData(oldp+363,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w),88);
    bufp->fullIData(oldp+366,(VL_MULS_III(32, (IData)(0x000005a1U), 
                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout)))),32);
    bufp->fullIData(oldp+367,(VL_MULS_III(32, (IData)(0x000005a1U), 
                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b)))),32);
    bufp->fullSData(oldp+368,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            (VL_MULS_III(32, (IData)(0x000005a1U), 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))) 
                                                             - 
                                                             VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                         VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))))))), 0x00000010U))),16);
    bufp->fullSData(oldp+369,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            (VL_MULS_III(32, (IData)(0x000005a1U), 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))) 
                                                             - 
                                                             VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                         VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))))))), 0x00000010U))),16);
    bufp->fullWData(oldp+370,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out),128);
    bufp->fullCData(oldp+374,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_poly_idx),3);
    bufp->fullSData(oldp+375,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__add_main_d1),16);
    bufp->fullSData(oldp+376,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__add_main_d2),16);
    bufp->fullSData(oldp+377,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__add_main_d3),16);
    bufp->fullSData(oldp+378,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__add_main_d4),16);
    bufp->fullBit(oldp+379,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_we_a));
    bufp->fullBit(oldp+380,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_we_b));
    bufp->fullSData(oldp+381,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_a),12);
    bufp->fullSData(oldp+382,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_b),12);
    bufp->fullSData(oldp+383,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_din_a),16);
    bufp->fullSData(oldp+384,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_din_b),16);
    bufp->fullBit(oldp+385,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm));
    bufp->fullSData(oldp+386,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_fsm),12);
    bufp->fullSData(oldp+387,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_din_fsm),16);
    bufp->fullBit(oldp+388,(((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                              ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_we)
                              : ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                  ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_we)
                                  : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_we_a)))));
    bufp->fullBit(oldp+389,(((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                              ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_we)
                              : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_we_b))));
    bufp->fullSData(oldp+390,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__addr_a),12);
    bufp->fullSData(oldp+391,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__addr_b),12);
    bufp->fullSData(oldp+392,((0x0000ffffU & ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                               ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_poly_out)
                                               : ((2U 
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
    bufp->fullSData(oldp+393,((0x0000ffffU & ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                                               ? ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a) 
                                                  - 
                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU)))))
                                               : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_din_b)))),16);
    bufp->fullSData(oldp+394,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_dout_a),16);
    bufp->fullSData(oldp+395,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_dout_b),16);
    bufp->fullSData(oldp+396,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_addr_even),12);
    bufp->fullSData(oldp+397,((0x00000fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_addr_even)))),12);
    bufp->fullBit(oldp+398,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel));
    bufp->fullSData(oldp+399,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_a_mux),12);
    bufp->fullSData(oldp+400,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_b_mux),12);
    bufp->fullBit(oldp+401,(((~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel)) 
                             & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_we_a))));
    bufp->fullBit(oldp+402,(((~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel)) 
                             & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_we_b))));
    bufp->fullBit(oldp+403,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_start));
    bufp->fullBit(oldp+404,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_done));
    bufp->fullSData(oldp+405,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_u_addr),11);
    bufp->fullCData(oldp+406,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_v_addr),8);
    bufp->fullBit(oldp+407,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_ext_we));
    bufp->fullIData(oldp+408,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_ext_addr),32);
    bufp->fullIData(oldp+409,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_ext_dout),32);
    bufp->fullSData(oldp+410,((0x00000fffU & VL_SHIFTL_III(12,12,32, 
                                                           (VL_SHIFTL_III(12,12,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_i), 1U) 
                                                            + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_j)), 8U))),12);
    bufp->fullSData(oldp+411,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even),12);
    bufp->fullSData(oldp+412,((0x00000fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even)))),12);
    bufp->fullSData(oldp+413,((0x0000ffffU & ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr))
                                               ? (- (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_real))
                                               : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_real)))),16);
    bufp->fullBit(oldp+414,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_sent));
    bufp->fullBit(oldp+415,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_sent));
    bufp->fullBit(oldp+416,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_sent));
    bufp->fullBit(oldp+417,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sent));
    bufp->fullBit(oldp+418,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cmp_sent));
    bufp->fullBit(oldp+419,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_sent));
    bufp->fullBit(oldp+420,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_pack_sent));
    bufp->fullCData(oldp+421,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_phase),2);
    bufp->fullCData(oldp+422,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_poly),3);
    bufp->fullCData(oldp+423,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_pair),8);
    bufp->fullCData(oldp+424,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_step),3);
    bufp->fullIData(oldp+425,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_pk_addr),32);
    bufp->fullIData(oldp+426,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_sk_addr),32);
    bufp->fullIData(oldp+427,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_pk_byte_idx),32);
    bufp->fullSData(oldp+428,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_c0),16);
    bufp->fullSData(oldp+429,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_c1),16);
    bufp->fullCData(oldp+430,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_b0),8);
    bufp->fullCData(oldp+431,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_b1),8);
    bufp->fullCData(oldp+432,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pack_b2),8);
    bufp->fullBit(oldp+433,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_reload_done));
    bufp->fullCData(oldp+434,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_poly),3);
    bufp->fullCData(oldp+435,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_pair),8);
    bufp->fullCData(oldp+436,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_step),3);
    bufp->fullCData(oldp+437,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_b0),8);
    bufp->fullCData(oldp+438,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_b1),8);
    bufp->fullCData(oldp+439,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_b2),8);
    bufp->fullSData(oldp+440,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_c0),16);
    bufp->fullSData(oldp+441,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_sk_c1),16);
    bufp->fullBit(oldp+442,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_fetching));
    bufp->fullBit(oldp+443,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fetch_wait));
    bufp->fullCData(oldp+444,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fetch_cnt),8);
    bufp->fullBit(oldp+445,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_fetch_done));
    bufp->fullSData(oldp+446,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__rem12),12);
    bufp->fullSData(oldp+447,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__rem12b),12);
    bufp->fullSData(oldp+448,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__c0s),16);
    bufp->fullSData(oldp+449,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__c1s),16);
    bufp->fullSData(oldp+450,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__c0n),12);
    bufp->fullSData(oldp+451,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__c1n),12);
    bufp->fullSData(oldp+452,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pair_base12),12);
    bufp->fullSData(oldp+453,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pair_base_b12),12);
    bufp->fullSData(oldp+454,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_even_idx12),12);
    bufp->fullSData(oldp+455,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_odd_idx12),12);
    bufp->fullSData(oldp+456,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_global_even_idx12),12);
    bufp->fullSData(oldp+457,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_global_odd_idx12),12);
    bufp->fullSData(oldp+458,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cand_off2_idx12),12);
    bufp->fullSData(oldp+459,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cand_off3_idx12),12);
    bufp->fullSData(oldp+460,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_pair_base12),12);
    bufp->fullSData(oldp+461,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_pair_base_b12),12);
    bufp->fullSData(oldp+462,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_even_idx12),12);
    bufp->fullSData(oldp+463,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_odd_idx12),12);
    bufp->fullSData(oldp+464,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_cand_off2_idx12),12);
    bufp->fullSData(oldp+465,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_cand_off3_idx12),12);
    bufp->fullSData(oldp+466,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_src_idx12),12);
    bufp->fullSData(oldp+467,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ep_src_idx12),12);
    bufp->fullSData(oldp+468,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ep_src_next12),12);
    bufp->fullIData(oldp+469,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__su),17);
    bufp->fullIData(oldp+470,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__sv),17);
    bufp->fullIData(oldp+471,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_c),17);
    bufp->fullIData(oldp+472,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__su_c),17);
    bufp->fullSData(oldp+473,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ep_term),16);
    bufp->fullSData(oldp+474,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__epp_term_v),16);
    bufp->fullSData(oldp+475,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__uidx),12);
    bufp->fullSData(oldp+476,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_src_idx12),12);
    bufp->fullSData(oldp+477,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__epp_src_idx12),12);
    bufp->fullSData(oldp+478,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__vidx_w),12);
    bufp->fullSData(oldp+479,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__vidx),9);
    bufp->fullSData(oldp+480,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__bitpos),9);
    bufp->fullCData(oldp+481,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mb),8);
    bufp->fullCData(oldp+482,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__bytev),8);
    bufp->fullCData(oldp+483,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mbyte_idx),5);
    bufp->fullCData(oldp+484,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mbyte_idx_dec),5);
    bufp->fullCData(oldp+485,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mb_idx),3);
    bufp->fullBit(oldp+486,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mbit));
    bufp->fullBit(oldp+487,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__all_eq));
    bufp->fullSData(oldp+488,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__sk_coeff_base),12);
    bufp->fullSData(oldp+489,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__v_q),16);
    bufp->fullSData(oldp+490,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__su_q),16);
    bufp->fullSData(oldp+491,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__diff_q),16);
    bufp->fullIData(oldp+492,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__diff_q17),17);
    bufp->fullIData(oldp+493,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__tmsg32),32);
    bufp->fullIData(oldp+494,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__sk_pair_base),32);
    bufp->fullBit(oldp+495,(((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_we) 
                             | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm))));
    bufp->fullSData(oldp+496,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_a_cache__DOT__addr_a),12);
    bufp->fullSData(oldp+497,(((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm)
                                ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_din_fsm)
                                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_ram_din))),16);
    bufp->fullSData(oldp+498,((0x00000fffU & (((IData)(1U) 
                                               + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even)) 
                                              & (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))))))),12);
    bufp->fullCData(oldp+499,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__state),2);
    bufp->fullWData(oldp+500,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg),1536);
    bufp->fullSData(oldp+548,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__coeff_cnt),9);
    bufp->fullBit(oldp+549,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__saved_eta3));
    bufp->fullBit(oldp+550,((1U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])));
    bufp->fullBit(oldp+551,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+552,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+553,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+554,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+555,((1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                   >> 5U))));
    bufp->fullSData(oldp+556,((0x0000ffffU & VL_COUNTONES_I(
                                                            (3U 
                                                             & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])))),16);
    bufp->fullSData(oldp+557,((0x0000ffffU & VL_COUNTONES_I(
                                                            (3U 
                                                             & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                >> 2U))))),16);
    bufp->fullSData(oldp+558,((0x0000ffffU & (VL_COUNTONES_I(
                                                             (3U 
                                                              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                                              - VL_COUNTONES_I(
                                                               (3U 
                                                                & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                   >> 2U)))))),16);
    bufp->fullSData(oldp+559,((0x0000ffffU & VL_COUNTONES_I(
                                                            (7U 
                                                             & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])))),16);
    bufp->fullSData(oldp+560,((0x0000ffffU & VL_COUNTONES_I(
                                                            (7U 
                                                             & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                >> 3U))))),16);
    bufp->fullSData(oldp+561,((0x0000ffffU & (VL_COUNTONES_I(
                                                             (7U 
                                                              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                                              - VL_COUNTONES_I(
                                                               (7U 
                                                                & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                   >> 3U)))))),16);
    bufp->fullSData(oldp+562,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__saved_eta3)
                                               ? (VL_COUNTONES_I(
                                                                 (7U 
                                                                  & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                                                  - 
                                                  VL_COUNTONES_I(
                                                                 (7U 
                                                                  & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                     >> 3U))))
                                               : (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                                                  - 
                                                  VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                                     >> 2U))))))),16);
    bufp->fullCData(oldp+563,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__state),2);
    bufp->fullSData(oldp+564,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__cnt),11);
    bufp->fullBit(oldp+565,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__diff_accumulator));
    bufp->fullIData(oldp+566,((VL_DIV_III(32, ((IData)(0x00000680U) 
                                               + ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a) 
                                                  << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))), (IData)(0x00000d01U)) 
                               & (((IData)(1U) << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d)) 
                                  - (IData)(1U)))),32);
    bufp->fullSData(oldp+567,((0x0000ffffU & (VL_DIV_III(32, 
                                                         ((IData)(0x00000680U) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a) 
                                                           << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))), (IData)(0x00000d01U)) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d)) 
                                                 - (IData)(1U))))),16);
    bufp->fullIData(oldp+568,(VL_SHIFTR_III(32,32,32, 
                                            ((IData)(1U) 
                                             + (VL_SHIFTL_III(32,32,32, 
                                                              VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a))), 1U) 
                                                >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))), 1U)),32);
    bufp->fullSData(oldp+569,((0x0000ffffU & (((IData)(1U) 
                                               + (VL_SHIFTL_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dout_a))), 1U) 
                                                  >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__comp_d))) 
                                              >> 1U))),16);
    bufp->fullCData(oldp+570,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__state),4);
    bufp->fullSData(oldp+571,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__group_idx),9);
    bufp->fullCData(oldp+572,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__cap_idx),4);
    bufp->fullCData(oldp+573,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wr_idx),4);
    bufp->fullIData(oldp+574,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__byte_idx),32);
    bufp->fullCData(oldp+575,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wait_u),2);
    bufp->fullCData(oldp+576,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wait_v),2);
    bufp->fullSData(oldp+577,((0x00ffU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__group_idx), 3U) 
                                          + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__cap_idx)))),9);
    bufp->fullCData(oldp+578,((0x000000ffU & ((0x000001ffU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__group_idx), 3U)) 
                                              + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__cap_idx)))),8);
    bufp->fullSData(oldp+579,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c0),16);
    bufp->fullSData(oldp+580,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c1),16);
    bufp->fullSData(oldp+581,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c2),16);
    bufp->fullSData(oldp+582,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c3),16);
    bufp->fullSData(oldp+583,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c4),16);
    bufp->fullSData(oldp+584,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c5),16);
    bufp->fullSData(oldp+585,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c6),16);
    bufp->fullSData(oldp+586,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c7),16);
    bufp->fullWData(oldp+587,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in),128);
    bufp->fullWData(oldp+591,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in),88);
    bufp->fullCData(oldp+594,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_op),3);
    bufp->fullWData(oldp+595,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out),128);
    bufp->fullWData(oldp+599,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out),88);
    bufp->fullSData(oldp+602,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0),11);
    bufp->fullSData(oldp+603,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1),11);
    bufp->fullSData(oldp+604,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2),11);
    bufp->fullSData(oldp+605,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3),11);
    bufp->fullSData(oldp+606,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t4),11);
    bufp->fullSData(oldp+607,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t5),11);
    bufp->fullSData(oldp+608,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t6),11);
    bufp->fullSData(oldp+609,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t7),11);
    bufp->fullCData(oldp+610,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0),8);
    bufp->fullCData(oldp+611,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1),8);
    bufp->fullCData(oldp+612,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2),8);
    bufp->fullCData(oldp+613,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3),8);
    bufp->fullCData(oldp+614,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4),8);
    bufp->fullWData(oldp+615,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out),88);
    bufp->fullSData(oldp+618,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0),11);
    bufp->fullSData(oldp+619,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1),11);
    bufp->fullSData(oldp+620,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2),11);
    bufp->fullSData(oldp+621,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3),11);
    bufp->fullSData(oldp+622,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4),11);
    bufp->fullSData(oldp+623,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5),11);
    bufp->fullSData(oldp+624,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6),11);
    bufp->fullSData(oldp+625,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7),11);
    bufp->fullCData(oldp+626,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0),8);
    bufp->fullCData(oldp+627,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1),8);
    bufp->fullCData(oldp+628,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2),8);
    bufp->fullCData(oldp+629,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3),8);
    bufp->fullCData(oldp+630,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4),8);
    bufp->fullSData(oldp+631,((0x0000ffffU & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))))),16);
    bufp->fullIData(oldp+632,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0x0000ffffU 
                                                         & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                       VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))))))),32);
    bufp->fullIData(oldp+633,((VL_MULS_III(32, (IData)(0x000005a1U), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))) 
                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                             VL_EXTENDS_II(32,16, 
                                                           (0x0000ffffU 
                                                            & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout)))))))),32);
    bufp->fullIData(oldp+634,(VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout)))),32);
    bufp->fullIData(oldp+635,(VL_SHIFTRS_III(32,32,32, 
                                             (VL_MULS_III(32, (IData)(0x000005a1U), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))) 
                                              - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0x0000ffffU 
                                                                           & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout))))))), 0x00000010U)),32);
    bufp->fullSData(oldp+636,((0x0000ffffU & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))))),16);
    bufp->fullIData(oldp+637,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0x0000ffffU 
                                                         & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                       VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))))))),32);
    bufp->fullIData(oldp+638,((VL_MULS_III(32, (IData)(0x000005a1U), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))) 
                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                             VL_EXTENDS_II(32,16, 
                                                           (0x0000ffffU 
                                                            & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b)))))))),32);
    bufp->fullIData(oldp+639,(VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b)))),32);
    bufp->fullIData(oldp+640,(VL_SHIFTRS_III(32,32,32, 
                                             (VL_MULS_III(32, (IData)(0x000005a1U), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))) 
                                              - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0x0000ffffU 
                                                                           & VL_MULS_III(32, (IData)(0xffb6d8a1U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b))))))), 0x00000010U)),32);
    bufp->fullBit(oldp+641,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__state))));
    bufp->fullBit(oldp+642,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_absorb_start));
    bufp->fullWData(oldp+643,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din),272);
    bufp->fullBit(oldp+652,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_next));
    bufp->fullWData(oldp+653,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_data),1344);
    bufp->fullBit(oldp+695,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_valid));
    bufp->fullBit(oldp+696,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__state))));
    bufp->fullCData(oldp+697,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__loop_i),3);
    bufp->fullCData(oldp+698,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__loop_j),3);
    bufp->fullCData(oldp+699,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__k_val),3);
    bufp->fullSData(oldp+700,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__coeff_cnt),9);
    bufp->fullSData(oldp+701,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__poly_base),12);
    bufp->fullWData(oldp+702,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_buf),1344);
    bufp->fullSData(oldp+744,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_cnt),11);
    bufp->fullCData(oldp+745,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__state),3);
    bufp->fullSData(oldp+746,((0x00000fffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_buf[0U])),12);
    bufp->fullBit(oldp+747,((0x0d01U > (0x00000fffU 
                                        & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_buf[0U]))));
    bufp->fullCData(oldp+748,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__state),2);
    bufp->fullWData(oldp+749,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__sponge_state),1600);
    bufp->fullBit(oldp+799,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_start));
    bufp->fullBit(oldp+800,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_done));
    bufp->fullWData(oldp+801,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_out),1600);
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
    bufp->fullWData(oldp+851,(__Vtemp_1),1600);
    bufp->fullBit(oldp+901,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__state))));
    bufp->fullCData(oldp+902,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__state),2);
    bufp->fullCData(oldp+903,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_cnt),5);
    bufp->fullWData(oldp+904,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state),1600);
    bufp->fullQData(oldp+954,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__rc),64);
    bufp->fullWData(oldp+956,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state),1600);
    bufp->fullQData(oldp+1006,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][0U]),64);
    bufp->fullQData(oldp+1008,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][1U]),64);
    bufp->fullQData(oldp+1010,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][2U]),64);
    bufp->fullQData(oldp+1012,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][3U]),64);
    bufp->fullQData(oldp+1014,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][4U]),64);
    bufp->fullQData(oldp+1016,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][0U]),64);
    bufp->fullQData(oldp+1018,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][1U]),64);
    bufp->fullQData(oldp+1020,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][2U]),64);
    bufp->fullQData(oldp+1022,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][3U]),64);
    bufp->fullQData(oldp+1024,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][4U]),64);
    bufp->fullQData(oldp+1026,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][0U]),64);
    bufp->fullQData(oldp+1028,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][1U]),64);
    bufp->fullQData(oldp+1030,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][2U]),64);
    bufp->fullQData(oldp+1032,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][3U]),64);
    bufp->fullQData(oldp+1034,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][4U]),64);
    bufp->fullQData(oldp+1036,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][0U]),64);
    bufp->fullQData(oldp+1038,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][1U]),64);
    bufp->fullQData(oldp+1040,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][2U]),64);
    bufp->fullQData(oldp+1042,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][3U]),64);
    bufp->fullQData(oldp+1044,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][4U]),64);
    bufp->fullQData(oldp+1046,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][0U]),64);
    bufp->fullQData(oldp+1048,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][1U]),64);
    bufp->fullQData(oldp+1050,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][2U]),64);
    bufp->fullQData(oldp+1052,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][3U]),64);
    bufp->fullQData(oldp+1054,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][4U]),64);
    bufp->fullQData(oldp+1056,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[0]),64);
    bufp->fullQData(oldp+1058,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[1]),64);
    bufp->fullQData(oldp+1060,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[2]),64);
    bufp->fullQData(oldp+1062,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[3]),64);
    bufp->fullQData(oldp+1064,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[4]),64);
    bufp->fullQData(oldp+1066,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[0]),64);
    bufp->fullQData(oldp+1068,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[1]),64);
    bufp->fullQData(oldp+1070,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[2]),64);
    bufp->fullQData(oldp+1072,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[3]),64);
    bufp->fullQData(oldp+1074,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[4]),64);
    bufp->fullQData(oldp+1076,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][0U]),64);
    bufp->fullQData(oldp+1078,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][1U]),64);
    bufp->fullQData(oldp+1080,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][2U]),64);
    bufp->fullQData(oldp+1082,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][3U]),64);
    bufp->fullQData(oldp+1084,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][4U]),64);
    bufp->fullQData(oldp+1086,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][0U]),64);
    bufp->fullQData(oldp+1088,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][1U]),64);
    bufp->fullQData(oldp+1090,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][2U]),64);
    bufp->fullQData(oldp+1092,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][3U]),64);
    bufp->fullQData(oldp+1094,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][4U]),64);
    bufp->fullQData(oldp+1096,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][0U]),64);
    bufp->fullQData(oldp+1098,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][1U]),64);
    bufp->fullQData(oldp+1100,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][2U]),64);
    bufp->fullQData(oldp+1102,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][3U]),64);
    bufp->fullQData(oldp+1104,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][4U]),64);
    bufp->fullQData(oldp+1106,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][0U]),64);
    bufp->fullQData(oldp+1108,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][1U]),64);
    bufp->fullQData(oldp+1110,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][2U]),64);
    bufp->fullQData(oldp+1112,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][3U]),64);
    bufp->fullQData(oldp+1114,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][4U]),64);
    bufp->fullQData(oldp+1116,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][0U]),64);
    bufp->fullQData(oldp+1118,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][1U]),64);
    bufp->fullQData(oldp+1120,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][2U]),64);
    bufp->fullQData(oldp+1122,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][3U]),64);
    bufp->fullQData(oldp+1124,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][4U]),64);
    bufp->fullQData(oldp+1126,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U]),64);
    bufp->fullQData(oldp+1128,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U]),64);
    bufp->fullQData(oldp+1130,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U]),64);
    bufp->fullQData(oldp+1132,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U]),64);
    bufp->fullQData(oldp+1134,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U]),64);
    bufp->fullQData(oldp+1136,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U]),64);
    bufp->fullQData(oldp+1138,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U]),64);
    bufp->fullQData(oldp+1140,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U]),64);
    bufp->fullQData(oldp+1142,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U]),64);
    bufp->fullQData(oldp+1144,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U]),64);
    bufp->fullQData(oldp+1146,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U]),64);
    bufp->fullQData(oldp+1148,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U]),64);
    bufp->fullQData(oldp+1150,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U]),64);
    bufp->fullQData(oldp+1152,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U]),64);
    bufp->fullQData(oldp+1154,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U]),64);
    bufp->fullQData(oldp+1156,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U]),64);
    bufp->fullQData(oldp+1158,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U]),64);
    bufp->fullQData(oldp+1160,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U]),64);
    bufp->fullQData(oldp+1162,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U]),64);
    bufp->fullQData(oldp+1164,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U]),64);
    bufp->fullQData(oldp+1166,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U]),64);
    bufp->fullQData(oldp+1168,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U]),64);
    bufp->fullQData(oldp+1170,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U]),64);
    bufp->fullQData(oldp+1172,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U]),64);
    bufp->fullQData(oldp+1174,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U]),64);
    bufp->fullQData(oldp+1176,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][0U]),64);
    bufp->fullQData(oldp+1178,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][1U]),64);
    bufp->fullQData(oldp+1180,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][2U]),64);
    bufp->fullQData(oldp+1182,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][3U]),64);
    bufp->fullQData(oldp+1184,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][4U]),64);
    bufp->fullQData(oldp+1186,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][0U]),64);
    bufp->fullQData(oldp+1188,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][1U]),64);
    bufp->fullQData(oldp+1190,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][2U]),64);
    bufp->fullQData(oldp+1192,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][3U]),64);
    bufp->fullQData(oldp+1194,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][4U]),64);
    bufp->fullQData(oldp+1196,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][0U]),64);
    bufp->fullQData(oldp+1198,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][1U]),64);
    bufp->fullQData(oldp+1200,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][2U]),64);
    bufp->fullQData(oldp+1202,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][3U]),64);
    bufp->fullQData(oldp+1204,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][4U]),64);
    bufp->fullQData(oldp+1206,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][0U]),64);
    bufp->fullQData(oldp+1208,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][1U]),64);
    bufp->fullQData(oldp+1210,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][2U]),64);
    bufp->fullQData(oldp+1212,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][3U]),64);
    bufp->fullQData(oldp+1214,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][4U]),64);
    bufp->fullQData(oldp+1216,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][0U]),64);
    bufp->fullQData(oldp+1218,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][1U]),64);
    bufp->fullQData(oldp+1220,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][2U]),64);
    bufp->fullQData(oldp+1222,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][3U]),64);
    bufp->fullQData(oldp+1224,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][4U]),64);
    bufp->fullQData(oldp+1226,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][0U]),64);
    bufp->fullQData(oldp+1228,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][1U]),64);
    bufp->fullQData(oldp+1230,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][2U]),64);
    bufp->fullQData(oldp+1232,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][3U]),64);
    bufp->fullQData(oldp+1234,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][4U]),64);
    bufp->fullQData(oldp+1236,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][0U]),64);
    bufp->fullQData(oldp+1238,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][1U]),64);
    bufp->fullQData(oldp+1240,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][2U]),64);
    bufp->fullQData(oldp+1242,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][3U]),64);
    bufp->fullQData(oldp+1244,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][4U]),64);
    bufp->fullQData(oldp+1246,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][0U]),64);
    bufp->fullQData(oldp+1248,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][1U]),64);
    bufp->fullQData(oldp+1250,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][2U]),64);
    bufp->fullQData(oldp+1252,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][3U]),64);
    bufp->fullQData(oldp+1254,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][4U]),64);
    bufp->fullQData(oldp+1256,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][0U]),64);
    bufp->fullQData(oldp+1258,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][1U]),64);
    bufp->fullQData(oldp+1260,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][2U]),64);
    bufp->fullQData(oldp+1262,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][3U]),64);
    bufp->fullQData(oldp+1264,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][4U]),64);
    bufp->fullQData(oldp+1266,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][0U]),64);
    bufp->fullQData(oldp+1268,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][1U]),64);
    bufp->fullQData(oldp+1270,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][2U]),64);
    bufp->fullQData(oldp+1272,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][3U]),64);
    bufp->fullQData(oldp+1274,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][4U]),64);
    bufp->fullCData(oldp+1276,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__out_len_type),3);
    bufp->fullBit(oldp+1277,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__mode));
    bufp->fullBit(oldp+1278,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__is_sha3));
    bufp->fullBit(oldp+1279,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid));
    bufp->fullBit(oldp+1280,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_last));
    bufp->fullWData(oldp+1281,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din),1088);
    bufp->fullCData(oldp+1315,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_len),8);
    bufp->fullBit(oldp+1316,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack));
    bufp->fullCData(oldp+1317,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state),4);
    bufp->fullWData(oldp+1318,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state),1600);
    bufp->fullWData(oldp+1368,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din),1088);
    bufp->fullCData(oldp+1402,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len),8);
    bufp->fullBit(oldp+1403,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last));
    bufp->fullBit(oldp+1404,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block));
    bufp->fullBit(oldp+1405,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode));
    bufp->fullBit(oldp+1406,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3));
    bufp->fullCData(oldp+1407,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type),3);
    bufp->fullBit(oldp+1408,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start));
    bufp->fullBit(oldp+1409,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done));
    bufp->fullWData(oldp+1410,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_out),1600);
    bufp->fullIData(oldp+1460,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i),32);
    bufp->fullWData(oldp+1461,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__absorb_next),1600);
    bufp->fullSData(oldp+1511,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits),11);
    bufp->fullBit(oldp+1512,((0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state))));
    bufp->fullCData(oldp+1513,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state),2);
    bufp->fullCData(oldp+1514,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt),5);
    bufp->fullWData(oldp+1515,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state),1600);
    bufp->fullQData(oldp+1565,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__rc),64);
    bufp->fullWData(oldp+1567,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state),1600);
    bufp->fullQData(oldp+1617,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][0U]),64);
    bufp->fullQData(oldp+1619,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][1U]),64);
    bufp->fullQData(oldp+1621,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][2U]),64);
    bufp->fullQData(oldp+1623,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][3U]),64);
    bufp->fullQData(oldp+1625,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][4U]),64);
    bufp->fullQData(oldp+1627,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][0U]),64);
    bufp->fullQData(oldp+1629,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][1U]),64);
    bufp->fullQData(oldp+1631,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][2U]),64);
    bufp->fullQData(oldp+1633,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][3U]),64);
    bufp->fullQData(oldp+1635,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][4U]),64);
    bufp->fullQData(oldp+1637,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][0U]),64);
    bufp->fullQData(oldp+1639,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][1U]),64);
    bufp->fullQData(oldp+1641,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][2U]),64);
    bufp->fullQData(oldp+1643,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][3U]),64);
    bufp->fullQData(oldp+1645,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][4U]),64);
    bufp->fullQData(oldp+1647,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][0U]),64);
    bufp->fullQData(oldp+1649,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][1U]),64);
    bufp->fullQData(oldp+1651,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][2U]),64);
    bufp->fullQData(oldp+1653,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][3U]),64);
    bufp->fullQData(oldp+1655,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][4U]),64);
    bufp->fullQData(oldp+1657,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][0U]),64);
    bufp->fullQData(oldp+1659,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][1U]),64);
    bufp->fullQData(oldp+1661,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][2U]),64);
    bufp->fullQData(oldp+1663,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][3U]),64);
    bufp->fullQData(oldp+1665,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][4U]),64);
    bufp->fullQData(oldp+1667,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[0]),64);
    bufp->fullQData(oldp+1669,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[1]),64);
    bufp->fullQData(oldp+1671,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[2]),64);
    bufp->fullQData(oldp+1673,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[3]),64);
    bufp->fullQData(oldp+1675,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[4]),64);
    bufp->fullQData(oldp+1677,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[0]),64);
    bufp->fullQData(oldp+1679,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[1]),64);
    bufp->fullQData(oldp+1681,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[2]),64);
    bufp->fullQData(oldp+1683,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[3]),64);
    bufp->fullQData(oldp+1685,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[4]),64);
    bufp->fullQData(oldp+1687,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][0U]),64);
    bufp->fullQData(oldp+1689,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][1U]),64);
    bufp->fullQData(oldp+1691,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][2U]),64);
    bufp->fullQData(oldp+1693,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][3U]),64);
    bufp->fullQData(oldp+1695,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][4U]),64);
    bufp->fullQData(oldp+1697,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][0U]),64);
    bufp->fullQData(oldp+1699,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][1U]),64);
    bufp->fullQData(oldp+1701,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][2U]),64);
    bufp->fullQData(oldp+1703,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][3U]),64);
    bufp->fullQData(oldp+1705,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][4U]),64);
    bufp->fullQData(oldp+1707,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][0U]),64);
    bufp->fullQData(oldp+1709,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][1U]),64);
    bufp->fullQData(oldp+1711,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][2U]),64);
    bufp->fullQData(oldp+1713,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][3U]),64);
    bufp->fullQData(oldp+1715,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][4U]),64);
    bufp->fullQData(oldp+1717,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][0U]),64);
    bufp->fullQData(oldp+1719,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][1U]),64);
    bufp->fullQData(oldp+1721,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][2U]),64);
    bufp->fullQData(oldp+1723,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][3U]),64);
    bufp->fullQData(oldp+1725,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][4U]),64);
    bufp->fullQData(oldp+1727,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][0U]),64);
    bufp->fullQData(oldp+1729,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][1U]),64);
    bufp->fullQData(oldp+1731,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][2U]),64);
    bufp->fullQData(oldp+1733,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][3U]),64);
    bufp->fullQData(oldp+1735,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][4U]),64);
    bufp->fullQData(oldp+1737,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U]),64);
    bufp->fullQData(oldp+1739,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U]),64);
    bufp->fullQData(oldp+1741,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U]),64);
    bufp->fullQData(oldp+1743,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U]),64);
    bufp->fullQData(oldp+1745,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U]),64);
    bufp->fullQData(oldp+1747,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U]),64);
    bufp->fullQData(oldp+1749,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U]),64);
    bufp->fullQData(oldp+1751,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U]),64);
    bufp->fullQData(oldp+1753,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U]),64);
    bufp->fullQData(oldp+1755,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U]),64);
    bufp->fullQData(oldp+1757,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U]),64);
    bufp->fullQData(oldp+1759,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U]),64);
    bufp->fullQData(oldp+1761,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U]),64);
    bufp->fullQData(oldp+1763,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U]),64);
    bufp->fullQData(oldp+1765,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U]),64);
    bufp->fullQData(oldp+1767,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U]),64);
    bufp->fullQData(oldp+1769,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U]),64);
    bufp->fullQData(oldp+1771,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U]),64);
    bufp->fullQData(oldp+1773,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U]),64);
    bufp->fullQData(oldp+1775,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U]),64);
    bufp->fullQData(oldp+1777,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U]),64);
    bufp->fullQData(oldp+1779,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U]),64);
    bufp->fullQData(oldp+1781,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U]),64);
    bufp->fullQData(oldp+1783,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U]),64);
    bufp->fullQData(oldp+1785,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U]),64);
    bufp->fullQData(oldp+1787,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][0U]),64);
    bufp->fullQData(oldp+1789,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][1U]),64);
    bufp->fullQData(oldp+1791,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][2U]),64);
    bufp->fullQData(oldp+1793,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][3U]),64);
    bufp->fullQData(oldp+1795,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][4U]),64);
    bufp->fullQData(oldp+1797,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][0U]),64);
    bufp->fullQData(oldp+1799,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][1U]),64);
    bufp->fullQData(oldp+1801,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][2U]),64);
    bufp->fullQData(oldp+1803,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][3U]),64);
    bufp->fullQData(oldp+1805,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][4U]),64);
    bufp->fullQData(oldp+1807,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][0U]),64);
    bufp->fullQData(oldp+1809,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][1U]),64);
    bufp->fullQData(oldp+1811,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][2U]),64);
    bufp->fullQData(oldp+1813,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][3U]),64);
    bufp->fullQData(oldp+1815,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][4U]),64);
    bufp->fullQData(oldp+1817,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][0U]),64);
    bufp->fullQData(oldp+1819,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][1U]),64);
    bufp->fullQData(oldp+1821,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][2U]),64);
    bufp->fullQData(oldp+1823,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][3U]),64);
    bufp->fullQData(oldp+1825,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][4U]),64);
    bufp->fullQData(oldp+1827,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][0U]),64);
    bufp->fullQData(oldp+1829,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][1U]),64);
    bufp->fullQData(oldp+1831,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][2U]),64);
    bufp->fullQData(oldp+1833,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][3U]),64);
    bufp->fullQData(oldp+1835,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][4U]),64);
    bufp->fullQData(oldp+1837,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][0U]),64);
    bufp->fullQData(oldp+1839,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][1U]),64);
    bufp->fullQData(oldp+1841,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][2U]),64);
    bufp->fullQData(oldp+1843,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][3U]),64);
    bufp->fullQData(oldp+1845,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][4U]),64);
    bufp->fullQData(oldp+1847,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][0U]),64);
    bufp->fullQData(oldp+1849,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][1U]),64);
    bufp->fullQData(oldp+1851,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][2U]),64);
    bufp->fullQData(oldp+1853,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][3U]),64);
    bufp->fullQData(oldp+1855,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][4U]),64);
    bufp->fullQData(oldp+1857,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][0U]),64);
    bufp->fullQData(oldp+1859,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][1U]),64);
    bufp->fullQData(oldp+1861,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][2U]),64);
    bufp->fullQData(oldp+1863,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][3U]),64);
    bufp->fullQData(oldp+1865,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][4U]),64);
    bufp->fullQData(oldp+1867,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][0U]),64);
    bufp->fullQData(oldp+1869,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][1U]),64);
    bufp->fullQData(oldp+1871,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][2U]),64);
    bufp->fullQData(oldp+1873,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][3U]),64);
    bufp->fullQData(oldp+1875,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][4U]),64);
    bufp->fullQData(oldp+1877,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][0U]),64);
    bufp->fullQData(oldp+1879,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][1U]),64);
    bufp->fullQData(oldp+1881,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][2U]),64);
    bufp->fullQData(oldp+1883,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][3U]),64);
    bufp->fullQData(oldp+1885,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][4U]),64);
    bufp->fullCData(oldp+1887,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__state),3);
    bufp->fullCData(oldp+1888,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage),3);
    bufp->fullCData(oldp+1889,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt),8);
    bufp->fullCData(oldp+1890,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__warm_cnt),2);
    bufp->fullSData(oldp+1891,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_call_ctr),16);
    bufp->fullSData(oldp+1892,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_call_id),16);
    bufp->fullCData(oldp+1893,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_tag_id),4);
    bufp->fullCData(oldp+1894,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a),8);
    bufp->fullCData(oldp+1895,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b),8);
    bufp->fullCData(oldp+1896,((0x0000007fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en)
                                                ? (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)))) 
                                                    - (IData)(1U)) 
                                                   - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group))
                                                : ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group) 
                                                   + 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage)))))),7);
    bufp->fullSData(oldp+1897,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_a),16);
    bufp->fullSData(oldp+1898,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_b),16);
    bufp->fullSData(oldp+1899,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_a),16);
    bufp->fullSData(oldp+1900,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_b),16);
    bufp->fullSData(oldp+1901,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__zeta),16);
    bufp->fullSData(oldp+1902,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a),16);
    bufp->fullSData(oldp+1903,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b),16);
    bufp->fullSData(oldp+1904,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__bf_out_a),16);
    bufp->fullSData(oldp+1905,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__bf_out_b),16);
    bufp->fullBit(oldp+1906,((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage)))));
    Vtb_kyber_top___024root__trace_full_dtype____0(vlSelf, bufp, 1907, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_a);
    Vtb_kyber_top___024root__trace_full_dtype____1(vlSelf, bufp, 1910, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_b);
    Vtb_kyber_top___024root__trace_full_dtype____2(vlSelf, bufp, 1913, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_we);
    bufp->fullBit(oldp+1916,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_a));
    bufp->fullBit(oldp+1917,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_b));
    bufp->fullBit(oldp+1918,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__we_a));
    bufp->fullCData(oldp+1919,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_a),8);
    bufp->fullCData(oldp+1920,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_b),8);
    bufp->fullCData(oldp+1921,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_a),8);
    bufp->fullCData(oldp+1922,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_b),8);
    bufp->fullSData(oldp+1923,(((0U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__state))
                                 ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_din)
                                 : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__bf_out_a))),16);
    bufp->fullBit(oldp+1924,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__last_write_ram));
    bufp->fullBit(oldp+1925,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en));
    bufp->fullCData(oldp+1926,((0x0000007fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt))),7);
    bufp->fullCData(oldp+1927,((0x0000007fU & (((0x80U 
                                                 >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)) 
                                                - (IData)(1U)) 
                                               & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt)))),8);
    bufp->fullCData(oldp+1928,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group),8);
    bufp->fullCData(oldp+1929,((0x80U >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff))),8);
    bufp->fullCData(oldp+1930,((0x000000ffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en)
                                                ? (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)))) 
                                                    - (IData)(1U)) 
                                                   - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group))
                                                : ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group) 
                                                   + 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage)))))),8);
    bufp->fullCData(oldp+1931,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff),3);
    bufp->fullSData(oldp+1932,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b) 
                                               + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a)))),16);
    bufp->fullSData(oldp+1933,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a) 
                                               - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b)))),16);
    bufp->fullSData(oldp+1934,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mode)
                                                ? (- 
                                                   ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a) 
                                                    - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b)))
                                                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b)))),16);
    bufp->fullIData(oldp+1935,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod),32);
    bufp->fullSData(oldp+1936,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod 
                                                              - 
                                                              VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                          VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod))))), 0x00000010U))),16);
    bufp->fullSData(oldp+1937,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a),16);
    bufp->fullSData(oldp+1938,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a),16);
    bufp->fullSData(oldp+1939,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a) 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a))), 0x0000001aU))))))),16);
    bufp->fullSData(oldp+1940,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a) 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a))), 0x0000001aU))))))),16);
    bufp->fullSData(oldp+1941,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_a),16);
    bufp->fullSData(oldp+1942,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_sum_a_b),16);
    bufp->fullSData(oldp+1943,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mont_res),16);
    bufp->fullBit(oldp+1944,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mode));
    bufp->fullIData(oldp+1945,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a)))),32);
    bufp->fullSData(oldp+1946,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a))), 0x0000001aU))),16);
    bufp->fullIData(oldp+1947,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_SHIFTRS_III(16,32,32, 
                                                                           VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a))), 0x0000001aU))))),32);
    bufp->fullIData(oldp+1948,(VL_SHIFTRS_III(32,32,32, 
                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a))), 0x0000001aU)),32);
    bufp->fullIData(oldp+1949,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a)))),32);
    bufp->fullSData(oldp+1950,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a))), 0x0000001aU))),16);
    bufp->fullIData(oldp+1951,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_SHIFTRS_III(16,32,32, 
                                                                           VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a))), 0x0000001aU))))),32);
    bufp->fullIData(oldp+1952,(VL_SHIFTRS_III(32,32,32, 
                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a))), 0x0000001aU)),32);
    bufp->fullSData(oldp+1953,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod))),16);
    bufp->fullIData(oldp+1954,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod))))),32);
    bufp->fullIData(oldp+1955,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod 
                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod)))))),32);
    bufp->fullIData(oldp+1956,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod)),32);
    bufp->fullIData(oldp+1957,(VL_SHIFTRS_III(32,32,32, 
                                              (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod))))), 0x00000010U)),32);
    bufp->fullSData(oldp+1958,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_zeta_real),16);
    bufp->fullCData(oldp+1959,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__state),4);
    bufp->fullCData(oldp+1960,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__cnt),8);
    bufp->fullCData(oldp+1961,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_pair),8);
    bufp->fullSData(oldp+1962,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_zeta_base),16);
    bufp->fullSData(oldp+1963,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_zeta_eff),16);
    bufp->fullSData(oldp+1964,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_c0_old),16);
    bufp->fullSData(oldp+1965,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_c1_old),16);
    bufp->fullIData(oldp+1966,(VL_MULS_III(32, (IData)(0x00000549U), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0)))),32);
    bufp->fullIData(oldp+1967,(VL_MULS_III(32, (IData)(0x00000549U), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1)))),32);
    bufp->fullSData(oldp+1968,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             (VL_MULS_III(32, (IData)(0x00000549U), 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                                              - 
                                                              VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                          VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))), 0x00000010U))),16);
    bufp->fullSData(oldp+1969,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             (VL_MULS_III(32, (IData)(0x00000549U), 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                                              - 
                                                              VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                          VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))), 0x00000010U))),16);
    bufp->fullSData(oldp+1970,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_use_tomont)
                                                ? VL_SHIFTRS_III(16,32,32, 
                                                                 (VL_MULS_III(32, (IData)(0x00000549U), 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                                                  - 
                                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                              VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))), 0x00000010U)
                                                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0)))),16);
    bufp->fullSData(oldp+1971,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_use_tomont)
                                                ? VL_SHIFTRS_III(16,32,32, 
                                                                 (VL_MULS_III(32, (IData)(0x00000549U), 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                                                  - 
                                                                  VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                              VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))), 0x00000010U)
                                                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1)))),16);
    bufp->fullSData(oldp+1972,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a),16);
    bufp->fullSData(oldp+1973,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a),16);
    bufp->fullIData(oldp+1974,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a)))),32);
    bufp->fullSData(oldp+1975,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU))),16);
    bufp->fullIData(oldp+1976,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_SHIFTRS_III(16,32,32, 
                                                                           VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU))))),32);
    bufp->fullIData(oldp+1977,(VL_SHIFTRS_III(32,32,32, 
                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a))), 0x0000001aU)),32);
    bufp->fullIData(oldp+1978,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a)))),32);
    bufp->fullSData(oldp+1979,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU))),16);
    bufp->fullIData(oldp+1980,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_SHIFTRS_III(16,32,32, 
                                                                           VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU))))),32);
    bufp->fullIData(oldp+1981,(VL_SHIFTRS_III(32,32,32, 
                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a))), 0x0000001aU)),32);
    bufp->fullIData(oldp+1982,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0),32);
    bufp->fullIData(oldp+1983,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1),32);
    bufp->fullSData(oldp+1984,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0 
                                                              - 
                                                              VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                          VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0))))), 0x00000010U))),16);
    bufp->fullSData(oldp+1985,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1 
                                                              - 
                                                              VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                          VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1))))), 0x00000010U))),16);
    bufp->fullSData(oldp+1986,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a0) 
                                               + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a1)))),16);
    bufp->fullSData(oldp+1987,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b0) 
                                               + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b1)))),16);
    bufp->fullIData(oldp+1988,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum),32);
    bufp->fullSData(oldp+1989,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum 
                                                              - 
                                                              VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                          VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum))))), 0x00000010U))),16);
    bufp->fullIData(oldp+1990,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta),32);
    bufp->fullSData(oldp+1991,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta 
                                                              - 
                                                              VL_MULS_III(32, (IData)(0x00000d01U), 
                                                                          VL_EXTENDS_II(32,16, 
                                                                                (0x0000ffffU 
                                                                                & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta))))), 0x00000010U))),16);
    bufp->fullSData(oldp+1992,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a),16);
    bufp->fullSData(oldp+1993,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a),16);
    bufp->fullSData(oldp+1994,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a) 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a))), 0x0000001aU))))))),16);
    bufp->fullSData(oldp+1995,((0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a) 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_SHIFTRS_III(16,32,32, 
                                                                                VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a))), 0x0000001aU))))))),16);
    bufp->fullSData(oldp+1996,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_00),16);
    bufp->fullSData(oldp+1997,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_11),16);
    bufp->fullSData(oldp+1998,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_sum),16);
    bufp->fullSData(oldp+1999,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_zeta),16);
    bufp->fullSData(oldp+2000,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_00),16);
    bufp->fullSData(oldp+2001,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_11),16);
    bufp->fullSData(oldp+2002,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_sum),16);
    bufp->fullSData(oldp+2003,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_zeta),16);
    bufp->fullIData(oldp+2004,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a)))),32);
    bufp->fullSData(oldp+2005,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a))), 0x0000001aU))),16);
    bufp->fullIData(oldp+2006,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_SHIFTRS_III(16,32,32, 
                                                                           VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a))), 0x0000001aU))))),32);
    bufp->fullIData(oldp+2007,(VL_SHIFTRS_III(32,32,32, 
                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a))), 0x0000001aU)),32);
    bufp->fullIData(oldp+2008,(VL_MULS_III(32, (IData)(0x00004ebfU), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a)))),32);
    bufp->fullSData(oldp+2009,((0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                             VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a))), 0x0000001aU))),16);
    bufp->fullIData(oldp+2010,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_SHIFTRS_III(16,32,32, 
                                                                           VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a))), 0x0000001aU))))),32);
    bufp->fullIData(oldp+2011,(VL_SHIFTRS_III(32,32,32, 
                                              VL_MULS_III(32, (IData)(0x00004ebfU), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a))), 0x0000001aU)),32);
    bufp->fullSData(oldp+2012,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0))),16);
    bufp->fullIData(oldp+2013,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0))))),32);
    bufp->fullIData(oldp+2014,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0 
                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0)))))),32);
    bufp->fullIData(oldp+2015,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0)),32);
    bufp->fullIData(oldp+2016,(VL_SHIFTRS_III(32,32,32, 
                                              (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0))))), 0x00000010U)),32);
    bufp->fullSData(oldp+2017,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1))),16);
    bufp->fullIData(oldp+2018,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1))))),32);
    bufp->fullIData(oldp+2019,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1 
                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1)))))),32);
    bufp->fullIData(oldp+2020,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1)),32);
    bufp->fullIData(oldp+2021,(VL_SHIFTRS_III(32,32,32, 
                                              (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1))))), 0x00000010U)),32);
    bufp->fullSData(oldp+2022,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum))),16);
    bufp->fullIData(oldp+2023,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum))))),32);
    bufp->fullIData(oldp+2024,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum 
                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum)))))),32);
    bufp->fullIData(oldp+2025,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum)),32);
    bufp->fullIData(oldp+2026,(VL_SHIFTRS_III(32,32,32, 
                                              (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum))))), 0x00000010U)),32);
    bufp->fullSData(oldp+2027,((0x0000ffffU & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta))),16);
    bufp->fullIData(oldp+2028,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta))))),32);
    bufp->fullIData(oldp+2029,((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta 
                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta)))))),32);
    bufp->fullIData(oldp+2030,(VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta)),32);
    bufp->fullIData(oldp+2031,(VL_SHIFTRS_III(32,32,32, 
                                              (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xfffff301U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta))))), 0x00000010U)),32);
    bufp->fullSData(oldp+2032,((0x0000ffffU & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))),16);
    bufp->fullIData(oldp+2033,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                        VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))),32);
    bufp->fullIData(oldp+2034,((VL_MULS_III(32, (IData)(0x00000549U), 
                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0)))))))),32);
    bufp->fullIData(oldp+2035,(VL_MULS_III(32, (IData)(0xffbb5049U), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0)))),32);
    bufp->fullIData(oldp+2036,(VL_SHIFTRS_III(32,32,32, 
                                              (VL_MULS_III(32, (IData)(0x00000549U), 
                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))), 0x00000010U)),32);
    bufp->fullSData(oldp+2037,((0x0000ffffU & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))),16);
    bufp->fullIData(oldp+2038,(VL_MULS_III(32, (IData)(0x00000d01U), 
                                           VL_EXTENDS_II(32,16, 
                                                         (0x0000ffffU 
                                                          & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                        VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))),32);
    bufp->fullIData(oldp+2039,((VL_MULS_III(32, (IData)(0x00000549U), 
                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1)))))))),32);
    bufp->fullIData(oldp+2040,(VL_MULS_III(32, (IData)(0xffbb5049U), 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1)))),32);
    bufp->fullIData(oldp+2041,(VL_SHIFTRS_III(32,32,32, 
                                              (VL_MULS_III(32, (IData)(0x00000549U), 
                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                               - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))), 0x00000010U)),32);
    bufp->fullBit(oldp+2042,(vlSelfRef.tb_kyber_top__DOT__clk));
    bufp->fullIData(oldp+2043,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ext_din),32);
    bufp->fullSData(oldp+2044,(vlSelfRef.tb_kyber_top__DOT__uut__DOT__base_v),12);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_dtype____0(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_full_dtype____0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),8);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_dtype____1(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_full_dtype____1\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),8);
}

VL_ATTR_COLD void Vtb_kyber_top___024root__trace_full_dtype____2(Vtb_kyber_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root__trace_full_dtype____2\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
    bufp->fullBit(oldp+2,(__VdtypeVar[2]));
}
