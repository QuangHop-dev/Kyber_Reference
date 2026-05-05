// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_kyber_top.h for the primary calling header

#include "Vtb_kyber_top__pch.h"

VL_ATTR_COLD void Vtb_kyber_top___024root___eval_static__TOP(Vtb_kyber_top___024root* vlSelf);
void Vtb_kyber_top___024root___timing_ready(Vtb_kyber_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_kyber_top___024root___eval_static(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_static\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_kyber_top___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_kyber_top__DOT__clk__0 
        = vlSelfRef.tb_kyber_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_kyber_top__DOT__done__0 
        = vlSelfRef.tb_kyber_top__DOT__done;
    Vtb_kyber_top___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_kyber_top___024root___eval_static__TOP(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_static__TOP\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_kyber_top__DOT__clear_tb_ram__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6677135460223196559ull);
    vlSelf->tb_kyber_top__DOT__print_hex_block__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9503603085479060621ull);
    vlSelf->tb_kyber_top__DOT__print_hex_block__Vstatic__b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10888938444322761816ull);
    vlSelf->tb_kyber_top__DOT__dump_hex_file__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6370834568209052007ull);
    vlSelf->tb_kyber_top__DOT__dump_hex_file__Vstatic__fd = 0;
    vlSelf->tb_kyber_top__DOT__dump_mem_file__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12796893082213010473ull);
    vlSelf->tb_kyber_top__DOT__dump_mem_file__Vstatic__fd = 0;
    vlSelf->tb_kyber_top__DOT__dump_ref_vectors__Vstatic__mode_tag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 324006293072350302ull);
    vlSelf->tb_kyber_top__DOT__run_mode_report__Vstatic__pk_bytes = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11047771985371898460ull);
    vlSelf->tb_kyber_top__DOT__run_mode_report__Vstatic__sk_bytes = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17843904477500456961ull);
    vlSelf->tb_kyber_top__DOT__run_mode_report__Vstatic__ct_bytes = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11748822164226920531ull);
    vlSelf->tb_kyber_top__DOT__run_mode_report__Vstatic__mode_tag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17173355502984205414ull);
    vlSelf->tb_kyber_top__DOT__run_mode_report__Vstatic__host_cpu_sk_assemble__DOT__bi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9084288037132450834ull);
    vlSelf->tb_kyber_top__DOT__run_mode_report__Vstatic__host_cpu_sk_assemble__DOT__s_sz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3078870470712870887ull);
    vlSelf->tb_kyber_top__DOT__compare_with_file__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2777108397824287830ull);
    vlSelf->tb_kyber_top__DOT__compare_with_file__Vstatic__fd = 0;
    vlSelf->tb_kyber_top__DOT__compare_with_file__Vstatic__mism = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12279139441959333079ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__flip_bytes_32__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10570764356356146196ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__barrett_reduce_q__Vstatic__t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5196178978592320774ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__barrett_reduce_q__Vstatic__r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3740218764617388509ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__flip_bytes_32__Vstatic__fi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 952876195271902108ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7553517654680521853ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14219157428013284440ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11293800281478767332ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7190333723314532314ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5700836331718691659ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9965128734539317500ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10055679509441012278ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7440472626857467194ull);
}

VL_ATTR_COLD void Vtb_kyber_top___024root___eval_initial__TOP(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_initial__TOP\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__base_v = 0U;
    VL_READMEM_N(true, 16, 128, 0, "/home/lucas_pham/Kyber_Reference/src/zeta_values.mem"s
                 ,  &(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_twiddle__DOT__rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 16, 128, 0, "/home/lucas_pham/Kyber_Reference/src/zeta_values_pwma.mem"s
                 ,  &(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_twiddle_pwma__DOT__rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_kyber_top___024root___eval_final(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_final\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_kyber_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_kyber_top___024root___eval_phase__stl(Vtb_kyber_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_kyber_top___024root___eval_settle(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_settle\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_kyber_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_kyber_top.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_kyber_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_kyber_top___024root___eval_triggers_vec__stl(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_triggers_vec__stl\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_kyber_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_kyber_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_kyber_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_kyber_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_kyber_top__ConstPool__TABLE_h9ce4d438_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_kyber_top__ConstPool__TABLE_h4d2ef343_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtb_kyber_top__ConstPool__TABLE_hdc428c08_0;
extern const VlUnpacked<QData/*63:0*/, 32> Vtb_kyber_top__ConstPool__TABLE_h46e597c0_0;

VL_ATTR_COLD void Vtb_kyber_top___024root___stl_sequent__TOP__0(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__ext_din 
        = (vlSelfRef.tb_kyber_top__DOT__tb_ram[(0x00001fffU 
                                                & vlSelfRef.tb_kyber_top__DOT__ext_addr)] 
           & (- (IData)((0x00002000U > vlSelfRef.tb_kyber_top__DOT__ext_addr))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__stream_ack 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_en) 
           & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_last 
        = (1U & ((~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_en)) 
                 | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_last)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a0)), 
                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b0)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a1)), 
                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b1)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_11)), 
                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_zeta)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_00) 
                          + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_zeta)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__cbd_val 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__saved_eta3)
                           ? (VL_COUNTONES_I((7U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                              - VL_COUNTONES_I((7U 
                                                & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                   >> 3U))))
                           : (VL_COUNTONES_I((3U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U])) 
                              - VL_COUNTONES_I((3U 
                                                & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg[0U] 
                                                   >> 2U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__v_addr_w 
        = (0x00ffU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__group_idx), 3U) 
                      + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__cap_idx)));
    if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_en) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[0U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[0U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[1U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[1U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[2U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[2U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[3U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[3U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[4U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[4U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[5U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[5U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[6U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[6U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[7U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[7U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[8U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[8U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[9U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[9U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[10U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[10U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[11U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[11U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[12U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[12U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[13U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[13U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[14U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[14U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[15U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[15U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[16U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[16U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[17U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[17U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[18U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[18U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[19U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[19U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[20U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[20U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[21U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[21U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[22U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[22U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[23U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[23U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[24U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[24U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[25U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[25U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[26U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[26U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[27U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[27U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[28U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[28U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[29U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[29U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[30U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[30U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[31U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[31U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[32U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[32U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[33U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_din[33U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_len 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_bytes;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_valid;
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[0U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[0U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[1U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[1U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[2U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[2U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[3U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[3U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[4U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[4U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[5U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[5U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[6U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[6U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[7U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[7U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[8U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[8U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[9U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[9U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[10U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[10U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[11U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[11U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[12U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[12U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[13U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[13U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[14U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[14U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[15U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[15U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[16U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[16U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[17U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[17U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[18U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[18U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[19U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[19U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[20U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[20U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[21U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[21U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[22U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[22U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[23U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[23U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[24U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[24U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[25U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[25U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[26U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[26U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[27U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[27U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[28U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[28U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[29U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[29U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[30U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[30U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[31U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[31U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[32U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[32U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[33U] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_din[33U];
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_len 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_bytes;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_start;
    }
    if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__last_write_ram) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_a;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_b;
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_a;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_b;
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s3_c0_old) 
                          + ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_use_tomont)
                              ? VL_SHIFTRS_III(16,32,32, 
                                               (VL_MULS_III(32, (IData)(0x00000549U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))) 
                                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))))))), 0x00000010U)
                              : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a 
        = (0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s3_c1_old) 
                          + ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_use_tomont)
                              ? VL_SHIFTRS_III(16,32,32, 
                                               (VL_MULS_III(32, (IData)(0x00000549U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))) 
                                                - VL_MULS_III(32, (IData)(0x00000d01U), 
                                                              VL_EXTENDS_II(32,16, 
                                                                            (0x0000ffffU 
                                                                             & VL_MULS_III(32, (IData)(0xffbb5049U), 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))))))), 0x00000010U)
                              : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1))));
    if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mode) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a 
            = (0x0000ffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mont_res));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a 
            = (0x0000ffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_sum_a_b));
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a 
            = (0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_a) 
                              - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mont_res)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a 
            = (0x0000ffffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_a) 
                              + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mont_res)));
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a 
        = (0x0000ffffU & (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_sum) 
                           - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_00)) 
                          - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_11)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a0) 
                                                   + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a1)))), 
                      VL_EXTENDS_II(32,16, (0x0000ffffU 
                                            & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b0) 
                                               + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b1)))));
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000031U)) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__absorb_next[__Vilp1] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_din 
        = ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel))
            ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_poly_out)
            : ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel))
                ? 0U : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_din)));
    while (VL_GTS_III(32, 0x00000088U, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i)) {
        if ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i 
             < (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h5f820b96__0 
                = (0x000000ffU & (((0x063fU >= (0x000007ffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i)))
                                    ? (((0U == (0x0000001fU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i)))
                                         ? 0U : (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                                                 [(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i))) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i))))) 
                                       | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                                          [(0x0000003fU 
                                            & (VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i) 
                                               >> 5U))] 
                                          >> (0x0000001fU 
                                              & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i))))
                                    : 0U) ^ ((0x043fU 
                                              >= (0x000007ffU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i)))
                                              ? (((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i))))) 
                                                 | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din
                                                    [
                                                    (0x0000003fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i))))
                                              : 0U)));
            if (VL_LIKELY(((0x063fU >= (0x000007ffU 
                                        & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i)))))) {
                VL_ASSIGNSEL_WI(1600, 8, (0x000007ffU 
                                          & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i)), vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__absorb_next, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h5f820b96__0);
            }
        }
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i);
    }
    if ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel))) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_we 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_we;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr 
            = (0x000000ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_ram_addr));
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_we 
            = ((2U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel)) 
               && (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_we));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr 
            = (0x000000ffU & ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel))
                               ? (0x000000feU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr) 
                                                 << 1U))
                               : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_addr)));
    }
    if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage))) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_a;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_b;
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_a;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_b;
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even 
        = (0x00000fffU & (VL_SHIFTL_III(12,12,32, (
                                                   VL_SHIFTL_III(12,12,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_i), 1U) 
                                                   + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_j)), 8U) 
                          + ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr) 
                             << 1U)));
    __Vtableidx1 = (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_prf_eta3) 
                     << 3U) | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_cmd));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__is_sha3 
        = Vtb_kyber_top__ConstPool__TABLE_h9ce4d438_0
        [__Vtableidx1];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__mode 
        = Vtb_kyber_top__ConstPool__TABLE_h4d2ef343_0
        [__Vtableidx1];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__out_len_type 
        = Vtb_kyber_top__ConstPool__TABLE_hdc428c08_0
        [__Vtableidx1];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_addr_even 
        = (0x00000fffU & (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr) 
                           << 1U) + ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_poly_idx) 
                                     << 8U)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_from_scratch) 
           & (2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel)));
    __VdfgRegularize_h6e95ff9d_0_5 = (0x00000fffU & 
                                      ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_acc_base) 
                                       + (VL_SHIFTL_III(12,12,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_i), 8U) 
                                          + ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram1_addr) 
                                             << 1U))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__we_a 
        = ((~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage)) 
           & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_we[2U] 
              & (0U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__state))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_b 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage) 
           & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_we[2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w = 0U;
    if ((0x33U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w = 1U;
        } else if ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w = 5U;
        }
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_dec_intt_gs_en 
        = ((0x24U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state)) 
           | ((0x26U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state)) 
              | ((0x33U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase)))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[2U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[3U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[0U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[1U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[2U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t4 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t5 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t6 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t7 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4 = 0U;
    if ((4U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_op))) {
        if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_op))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[2U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[3U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[0U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[1U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[2U] = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_op))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0 
                = (0x000000ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[0U]);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1 
                = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[0U] 
                                  >> 8U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2 
                = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[0U] 
                                  >> 0x00000010U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[0U] 
                   >> 0x00000018U);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__65__x 
                = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(8U) + ((IData)(0x00000d01U) 
                                   * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__65__x))) 
                   >> 4U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_4__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_4__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__66__x 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0) 
                                  >> 4U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(8U) + ((IData)(0x00000d01U) 
                                   * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__66__x))) 
                   >> 4U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_5__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U]) 
                   | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_5__decompress_d) 
                      << 0x00000010U));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__67__x 
                = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(8U) + ((IData)(0x00000d01U) 
                                   * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__67__x))) 
                   >> 4U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_6__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_6__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__68__x 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1) 
                                  >> 4U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(8U) + ((IData)(0x00000d01U) 
                                   * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__68__x))) 
                   >> 4U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_7__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U]) 
                   | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_7__decompress_d) 
                      << 0x00000010U));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__69__x 
                = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(8U) + ((IData)(0x00000d01U) 
                                   * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__69__x))) 
                   >> 4U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_8__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[2U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[2U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_8__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__70__x 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2) 
                                  >> 4U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(8U) + ((IData)(0x00000d01U) 
                                   * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__70__x))) 
                   >> 4U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_9__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[2U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[2U]) 
                   | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_9__decompress_d) 
                      << 0x00000010U));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__71__x 
                = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(8U) + ((IData)(0x00000d01U) 
                                   * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__71__x))) 
                   >> 4U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_10__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[3U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[3U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_10__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__72__x 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3) 
                                  >> 4U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(8U) + ((IData)(0x00000d01U) 
                                   * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__72__x))) 
                   >> 4U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_11__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[3U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[3U]) 
                   | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_11__decompress_d) 
                      << 0x00000010U));
        } else {
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__73__c 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[0U]);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__73__c) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__73__c));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                   + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
                = VL_DIV_III(32, ((IData)(0x00000680U) 
                                  + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                     << 4U)), (IData)(0x00000d01U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
                = (0x0000000fU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__73__Vfuncout 
                = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0 
                = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__73__Vfuncout;
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__74__c 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[0U] 
                   >> 0x00000010U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__74__c) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__74__c));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                   + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
                = VL_DIV_III(32, ((IData)(0x00000680U) 
                                  + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                     << 4U)), (IData)(0x00000d01U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
                = (0x0000000fU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__74__Vfuncout 
                = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1 
                = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__74__Vfuncout;
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__75__c 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[1U]);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__75__c) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__75__c));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                   + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
                = VL_DIV_III(32, ((IData)(0x00000680U) 
                                  + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                     << 4U)), (IData)(0x00000d01U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
                = (0x0000000fU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__75__Vfuncout 
                = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2 
                = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__75__Vfuncout;
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__76__c 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[1U] 
                   >> 0x00000010U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__76__c) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__76__c));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                   + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
                = VL_DIV_III(32, ((IData)(0x00000680U) 
                                  + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                     << 4U)), (IData)(0x00000d01U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
                = (0x0000000fU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__76__Vfuncout 
                = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3 
                = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__76__Vfuncout;
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__77__c 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[2U]);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__77__c) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__77__c));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                   + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
                = VL_DIV_III(32, ((IData)(0x00000680U) 
                                  + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                     << 4U)), (IData)(0x00000d01U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
                = (0x0000000fU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__77__Vfuncout 
                = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t4 
                = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__77__Vfuncout;
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__78__c 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[2U] 
                   >> 0x00000010U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__78__c) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__78__c));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                   + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
                = VL_DIV_III(32, ((IData)(0x00000680U) 
                                  + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                     << 4U)), (IData)(0x00000d01U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
                = (0x0000000fU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__78__Vfuncout 
                = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t5 
                = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__78__Vfuncout;
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__79__c 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[3U]);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__79__c) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__79__c));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                   + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
                = VL_DIV_III(32, ((IData)(0x00000680U) 
                                  + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                     << 4U)), (IData)(0x00000d01U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
                = (0x0000000fU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__79__Vfuncout 
                = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t6 
                = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__79__Vfuncout;
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__80__c 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[3U] 
                   >> 0x00000010U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__80__c) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__80__c));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                   + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
                = VL_DIV_III(32, ((IData)(0x00000680U) 
                                  + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                     << 4U)), (IData)(0x00000d01U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
                = (0x0000000fU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__80__Vfuncout 
                = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t7 
                = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__80__Vfuncout;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[0U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[0U]) 
                   | ((((0x000000f0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3) 
                                        << 4U)) | (0x0000000fU 
                                                   & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2))) 
                       << 8U) | ((0x000000f0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0)))));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[0U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[0U]) 
                   | (0xffff0000U & ((((0x000000f0U 
                                        & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t7) 
                                           << 4U)) 
                                       | (0x0000000fU 
                                          & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t6))) 
                                      << 0x00000018U) 
                                     | (((0x000000f0U 
                                          & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t5) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t4))) 
                                        << 0x00000010U))));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_op))) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U] = 0U;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U] = 0U;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[2U] = 0U;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[3U] = 0U;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[0U] = 0U;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[1U] = 0U;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[2U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_op))) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0 
            = (0x000000ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[0U]);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1 
            = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[0U] 
                              >> 8U));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2 
            = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[0U] 
                              >> 0x00000010U));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3 
            = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[0U] 
               >> 0x00000018U);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4 
            = (0x000000ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in[1U]);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0 
            = ((0x00000300U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1) 
                               << 8U)) | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1 
            = ((0x000003c0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2) 
                               << 6U)) | (0x0000003fU 
                                          & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1) 
                                             >> 2U)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2 
            = ((0x000003f0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3) 
                               << 4U)) | (0x0000000fU 
                                          & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2) 
                                             >> 4U)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3 
            = (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4) 
                << 2U) | (3U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3) 
                                >> 6U)));
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__81__x 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
            = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                        * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__81__x))) 
               >> 0x0aU);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_0__decompress_d 
            = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U] 
            = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U]) 
               | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_0__decompress_d));
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__82__x 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
            = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                        * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__82__x))) 
               >> 0x0aU);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_1__decompress_d 
            = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[0U]) 
               | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_1__decompress_d) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__83__x 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
            = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                        * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__83__x))) 
               >> 0x0aU);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_2__decompress_d 
            = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U] 
            = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U]) 
               | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_2__decompress_d));
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__84__x 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t 
            = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                        * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__84__x))) 
               >> 0x0aU);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_3__decompress_d 
            = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__Vstatic__t);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out[1U]) 
               | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT____VlemCall_3__decompress_d) 
                  << 0x00000010U));
    } else {
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__85__c 
            = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[0U]);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__85__c) 
                                  >> 0x0fU)))) << 0x00000010U) 
               | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__85__c));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
            = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
               + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
            = VL_DIV_III(32, ((IData)(0x00000680U) 
                              + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                 << 0x0aU)), (IData)(0x00000d01U));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
            = (0x000003ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__85__Vfuncout 
            = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0 
            = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__85__Vfuncout;
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__86__c 
            = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[0U] 
               >> 0x00000010U);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__86__c) 
                                  >> 0x0fU)))) << 0x00000010U) 
               | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__86__c));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
            = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
               + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
            = VL_DIV_III(32, ((IData)(0x00000680U) 
                              + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                 << 0x0aU)), (IData)(0x00000d01U));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
            = (0x000003ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__86__Vfuncout 
            = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1 
            = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__86__Vfuncout;
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__87__c 
            = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[1U]);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__87__c) 
                                  >> 0x0fU)))) << 0x00000010U) 
               | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__87__c));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
            = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
               + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
            = VL_DIV_III(32, ((IData)(0x00000680U) 
                              + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                 << 0x0aU)), (IData)(0x00000d01U));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
            = (0x000003ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__87__Vfuncout 
            = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2 
            = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__87__Vfuncout;
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__88__c 
            = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in[1U] 
               >> 0x00000010U);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__88__c) 
                                  >> 0x0fU)))) << 0x00000010U) 
               | (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__88__c));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
            = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
               + (0x00000d01U & VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u, 0x0000000fU)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t 
            = VL_DIV_III(32, ((IData)(0x00000680U) 
                              + (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__u 
                                 << 0x0aU)), (IData)(0x00000d01U));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m 
            = (0x000003ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__t);
        vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__88__Vfuncout 
            = (0x000007ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__Vstatic__m);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3 
            = vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__88__Vfuncout;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0 
            = (0x000000ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1 
            = ((0x000000fcU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1) 
                               << 2U)) | (3U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0) 
                                                >> 8U)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2 
            = ((0x000000f0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2) 
                               << 4U)) | (0x0000000fU 
                                          & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1) 
                                             >> 6U)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3 
            = ((0x000000c0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3) 
                               << 6U)) | (0x0000003fU 
                                          & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2) 
                                             >> 4U)));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3) 
                              >> 2U));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3) 
                                                             << 0x00000018U) 
                                                            | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2) 
                                                               << 0x00000010U)) 
                                                           | (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1) 
                                                               << 8U) 
                                                              | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0)))))));
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[1U] 
            = ((0xffffff00U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out[1U]) 
               | (IData)(((((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4)) 
                            << 0x00000020U) | (QData)((IData)(
                                                              ((((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3) 
                                                                 << 0x00000018U) 
                                                                | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2) 
                                                                   << 0x00000010U)) 
                                                               | (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0)))))) 
                          >> 0x00000020U)));
    }
    __Vtableidx2 = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__rc 
        = Vtb_kyber_top__ConstPool__TABLE_h46e597c0_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_cnt;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__rc 
        = Vtb_kyber_top__ConstPool__TABLE_h46e597c0_0
        [__Vtableidx3];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[0U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[11U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[10U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[21U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[20U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[31U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[30U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[41U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[40U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[2U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[13U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[12U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[23U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[22U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[33U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[32U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[43U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[42U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[5U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[4U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[15U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[14U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[25U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[24U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[35U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[34U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[45U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[44U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[7U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[6U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[17U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[16U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[27U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[26U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[37U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[36U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[47U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[46U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[9U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[8U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[19U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[18U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[29U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[28U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[39U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[38U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[49U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[48U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[0U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[11U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[10U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[21U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[20U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[31U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[30U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[41U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[40U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[2U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[13U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[12U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[23U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[22U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[33U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[32U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[43U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[42U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[5U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[4U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[15U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[14U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[25U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[24U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[35U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[34U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[45U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[44U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[7U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[6U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[17U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[16U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[27U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[26U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[37U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[36U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[47U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[46U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][0U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[9U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[8U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][1U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[19U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[18U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][2U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[29U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[28U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][3U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[39U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[38U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][4U] 
        = (((QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[49U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state[48U])));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mode)
                                                    ? 
                                                   (- 
                                                    ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a) 
                                                     - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b)))
                                                    : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b)))), 
                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__zeta)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_a_cache__DOT__addr_a 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm)
            ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_fsm)
            : ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even)
                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_ram_addr)));
    if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_a_mux 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_addr_even;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_b_mux 
            = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_sp_addr_even)));
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_a_mux 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_a;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_b_mux 
            = (0x00000fffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__scratch_addr_b));
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__addr_b = 
        (0x00000fffU & ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                         ? ((IData)(1U) + (IData)(__VdfgRegularize_h6e95ff9d_0_5))
                         : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_addr_b)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__addr_a = 
        ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
          ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_ram_addr)
          : ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
              ? (IData)(__VdfgRegularize_h6e95ff9d_0_5)
              : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_addr_a)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[2U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4 = 0U;
    if ((4U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w))) {
        if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[2U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w)))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
            }
            if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0 
                    = (0x000000ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[0U]);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1 
                    = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[0U] 
                                      >> 8U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2 
                    = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[0U] 
                                      >> 0x00000010U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3 
                    = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[0U] 
                       >> 0x00000018U);
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__89__x 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__89__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_4__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_4__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__90__x 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0) 
                                      >> 4U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__90__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_5__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_5__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__91__x 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__91__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_6__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_6__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__92__x 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                      >> 4U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__92__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_7__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_7__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__93__x 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__93__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_8__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_8__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__94__x 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2) 
                                      >> 4U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__94__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_9__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_9__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__95__x 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__95__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_10__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_10__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__96__x 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3) 
                                      >> 4U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__96__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_11__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_11__decompress_d) 
                          << 0x00000010U));
            } else {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w)))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m = 0U;
            }
        }
    } else {
        if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[2U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w)))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U] 
                    = (0xffffff00U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U]);
            }
            if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0 
                    = (0x000000ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[0U]);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1 
                    = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[0U] 
                                      >> 8U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2 
                    = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[0U] 
                                      >> 0x00000010U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3 
                    = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[0U] 
                       >> 0x00000018U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4 
                    = (0x000000ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[1U]);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 
                    = ((0x00000300U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                       << 8U)) | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 
                    = ((0x000003c0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                                     >> 2U)));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 
                    = ((0x000003f0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3) 
                                       << 4U)) | (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2) 
                                                     >> 4U)));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 
                    = (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4) 
                        << 2U) | (3U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3) 
                                        >> 6U)));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__105__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__105__x))) 
                       >> 0x0aU);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_0__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_0__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__106__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__106__x))) 
                       >> 0x0aU);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_1__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_1__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__107__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__107__x))) 
                       >> 0x0aU);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_2__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_2__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__108__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__108__x))) 
                       >> 0x0aU);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_3__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_3__decompress_d) 
                          << 0x00000010U));
            } else {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4 = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w)))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m = 0U;
            }
        }
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mode) 
           & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_dec_intt_gs_en));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[0U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[1U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[2U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[3U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[4U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[0U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[1U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[2U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[3U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[4U] 
        = ((((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][0U] 
              ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][1U]) 
             ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][2U]) 
            ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][3U]) 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff 
        = (7U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en)
                  ? ((IData)(6U) - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage))
                  : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[4U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[1U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[1U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[0U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[2U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[2U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[1U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[3U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[3U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[2U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[4U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[4U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[3U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[0U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[0U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[4U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[1U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[1U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[0U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[2U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[2U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[1U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[3U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[3U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[2U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[4U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[4U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[3U] 
           ^ ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[0U] 
               << 1U) | (QData)((IData)((1U & (IData)(
                                                      (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[0U] 
                                                       >> 0x0000003fU)))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group 
        = ((0x0000007fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt)) 
           >> (0x0000000fU & ((IData)(7U) - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[0U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[1U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[2U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[3U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[4U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[0U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[1U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[1U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[2U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[2U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[3U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[3U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[4U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[4U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a 
        = (0x000000ffU & (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group) 
                           << (0x0000000fU & ((IData)(8U) 
                                              - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)))) 
                          + (0x0000007fU & (((0x80U 
                                              >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)) 
                                             - (IData)(1U)) 
                                            & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt)))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][0U] 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][0U] 
                                                    >> 0x3fU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U] 
        = (((QData)((IData)((3U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][0U])))) 
            << 0x0000003eU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][0U] 
                               >> 2U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][0U] 
            << 0x0000001cU) | (QData)((IData)((0x0fffffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][0U] 
                                                          >> 0x24U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][0U] 
            << 0x0000001bU) | (QData)((IData)((0x07ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][0U] 
                                                          >> 0x25U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U] 
        = (((QData)((IData)((0x0fffffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][1U])))) 
            << 0x00000024U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][1U] 
                               >> 0x1cU));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U] 
        = (((QData)((IData)((0x000fffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][1U])))) 
            << 0x0000002cU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][1U] 
                               >> 0x14U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][1U] 
            << 6U) | (QData)((IData)((0x0000003fU & (IData)(
                                                            (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][1U] 
                                                             >> 0x3aU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U] 
        = (((QData)((IData)((0x000001ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][1U])))) 
            << 0x00000037U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][1U] 
                               >> 9U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][1U] 
            << 0x00000014U) | (QData)((IData)((0x000fffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][1U] 
                                                          >> 0x2cU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][2U] 
            << 3U) | (QData)((IData)((7U & (IData)(
                                                   (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][2U] 
                                                    >> 0x3dU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][2U] 
            << 0x0000000aU) | (QData)((IData)((0x000003ffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][2U] 
                                                          >> 0x36U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U] 
        = (((QData)((IData)((0x001fffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][2U])))) 
            << 0x0000002bU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][2U] 
                               >> 0x15U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][2U] 
            << 0x00000019U) | (QData)((IData)((0x01ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][2U] 
                                                          >> 0x27U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U] 
        = (((QData)((IData)((0x01ffffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][2U])))) 
            << 0x00000027U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][2U] 
                               >> 0x19U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U] 
        = (((QData)((IData)((0x007fffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][3U])))) 
            << 0x00000029U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][3U] 
                               >> 0x17U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U] 
        = (((QData)((IData)((0x0007ffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][3U])))) 
            << 0x0000002dU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][3U] 
                               >> 0x13U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][3U] 
            << 0x0000000fU) | (QData)((IData)((0x00007fffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][3U] 
                                                          >> 0x31U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][3U] 
            << 0x00000015U) | (QData)((IData)((0x001fffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][3U] 
                                                          >> 0x2bU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][3U] 
            << 8U) | (QData)((IData)((0x000000ffU & (IData)(
                                                            (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][3U] 
                                                             >> 0x38U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][4U] 
            << 0x00000012U) | (QData)((IData)((0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[0U][4U] 
                                                          >> 0x2eU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][4U] 
            << 2U) | (QData)((IData)((3U & (IData)(
                                                   (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[1U][4U] 
                                                    >> 0x3eU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U] 
        = (((QData)((IData)((7U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][4U])))) 
            << 0x0000003dU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[2U][4U] 
                               >> 3U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U] 
        = (((QData)((IData)((0x000000ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][4U])))) 
            << 0x00000038U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[3U][4U] 
                               >> 8U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][4U] 
            << 0x0000000eU) | (QData)((IData)((0x00003fffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[4U][4U] 
                                                          >> 0x32U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][0U] 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][0U] 
                                                    >> 0x3fU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U] 
        = (((QData)((IData)((3U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][0U])))) 
            << 0x0000003eU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][0U] 
                               >> 2U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][0U] 
            << 0x0000001cU) | (QData)((IData)((0x0fffffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][0U] 
                                                          >> 0x24U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][0U] 
            << 0x0000001bU) | (QData)((IData)((0x07ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][0U] 
                                                          >> 0x25U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U] 
        = (((QData)((IData)((0x0fffffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][1U])))) 
            << 0x00000024U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][1U] 
                               >> 0x1cU));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U] 
        = (((QData)((IData)((0x000fffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][1U])))) 
            << 0x0000002cU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][1U] 
                               >> 0x14U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][1U] 
            << 6U) | (QData)((IData)((0x0000003fU & (IData)(
                                                            (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][1U] 
                                                             >> 0x3aU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U] 
        = (((QData)((IData)((0x000001ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][1U])))) 
            << 0x00000037U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][1U] 
                               >> 9U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][1U] 
            << 0x00000014U) | (QData)((IData)((0x000fffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][1U] 
                                                          >> 0x2cU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][2U] 
            << 3U) | (QData)((IData)((7U & (IData)(
                                                   (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][2U] 
                                                    >> 0x3dU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][2U] 
            << 0x0000000aU) | (QData)((IData)((0x000003ffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][2U] 
                                                          >> 0x36U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U] 
        = (((QData)((IData)((0x001fffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][2U])))) 
            << 0x0000002bU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][2U] 
                               >> 0x15U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][2U] 
            << 0x00000019U) | (QData)((IData)((0x01ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][2U] 
                                                          >> 0x27U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U] 
        = (((QData)((IData)((0x01ffffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][2U])))) 
            << 0x00000027U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][2U] 
                               >> 0x19U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U] 
        = (((QData)((IData)((0x007fffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][3U])))) 
            << 0x00000029U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][3U] 
                               >> 0x17U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U] 
        = (((QData)((IData)((0x0007ffffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][3U])))) 
            << 0x0000002dU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][3U] 
                               >> 0x13U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][3U] 
            << 0x0000000fU) | (QData)((IData)((0x00007fffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][3U] 
                                                          >> 0x31U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][3U] 
            << 0x00000015U) | (QData)((IData)((0x001fffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][3U] 
                                                          >> 0x2bU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][3U] 
            << 8U) | (QData)((IData)((0x000000ffU & (IData)(
                                                            (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][3U] 
                                                             >> 0x38U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][4U] 
            << 0x00000012U) | (QData)((IData)((0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[0U][4U] 
                                                          >> 0x2eU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][4U] 
            << 2U) | (QData)((IData)((3U & (IData)(
                                                   (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[1U][4U] 
                                                    >> 0x3eU))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U] 
        = (((QData)((IData)((7U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][4U])))) 
            << 0x0000003dU) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[2U][4U] 
                               >> 3U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U] 
        = (((QData)((IData)((0x000000ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][4U])))) 
            << 0x00000038U) | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[3U][4U] 
                               >> 8U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U] 
        = ((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][4U] 
            << 0x0000000eU) | (QData)((IData)((0x00003fffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[4U][4U] 
                                                          >> 0x32U))))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b 
        = (0x000000ffU & ((0x80U >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)) 
                          + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a)));
    if ((0U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__state))) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_a 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_we;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_a 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_a 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_b 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr)));
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_a 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_b;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_a 
            = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_a)
                ? vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_a[2U]
                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a));
        if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__we_a) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_a 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_a[2U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_b 
                = (0x000000ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_b[2U]);
        } else {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_a 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_b 
                = (0x000000ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b));
        }
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][0U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][0U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][0U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][1U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][1U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][1U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][1U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][2U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][2U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][2U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][2U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][3U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][3U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][3U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][3U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[2U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[3U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][4U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[4U][4U] 
           ^ ((~ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[0U][4U]) 
              & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[1U][4U]));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_b 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_b)
            ? vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_b[2U]
            : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[1U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[2U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[3U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[4U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[0U][0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__rc);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][0U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][0U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][1U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][1U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][2U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][2U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][3U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][3U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[1U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[2U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[3U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][4U] 
        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[4U][4U];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][0U] 
        = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[0U][0U] 
           ^ vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__rc);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[0U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[1U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[2U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[3U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[4U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[5U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[6U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[7U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[8U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[9U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[10U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[11U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[12U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[13U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[14U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[15U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[16U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[17U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[18U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[19U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[20U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[21U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[22U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[23U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[24U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[25U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[26U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[27U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[28U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[29U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[30U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[31U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[32U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[33U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[34U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[35U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[36U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[37U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[38U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[39U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[40U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[41U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[0U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[42U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[43U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[1U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[44U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[45U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[2U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[46U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[47U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[3U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[48U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state[49U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[4U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[0U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[1U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[2U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[3U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[4U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[5U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[6U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[7U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[8U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][0U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[9U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[10U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[11U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[12U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[13U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[14U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[15U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[16U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[17U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[18U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][1U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[19U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[20U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[21U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[22U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[23U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[24U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[25U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[26U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[27U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[28U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][2U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[29U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[30U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[31U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[32U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[33U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[34U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[35U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[36U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[37U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[38U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][3U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[39U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[40U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[41U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[0U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[42U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[43U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[1U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[44U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[45U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[2U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[46U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[47U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[3U][4U] 
                   >> 0x00000020U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[48U] 
        = (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][4U]);
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state[49U] 
        = (IData)((vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[4U][4U] 
                   >> 0x00000020U));
}

VL_ATTR_COLD void Vtb_kyber_top___024root____Vm_traceActivitySetAll(Vtb_kyber_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_kyber_top___024root___eval_stl(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_stl\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_kyber_top___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_kyber_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_kyber_top___024root___eval_phase__stl(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_phase__stl\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_kyber_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_kyber_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_kyber_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_kyber_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_kyber_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_kyber_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_kyber_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_kyber_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_kyber_top.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_kyber_top___024root____Vm_traceActivitySetAll(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root____Vm_traceActivitySetAll\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_kyber_top___024root___ctor_var_reset(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___ctor_var_reset\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_kyber_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6315085888160208658ull);
    vlSelf->tb_kyber_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13941903743154857039ull);
    vlSelf->tb_kyber_top__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5802373669621903829ull);
    vlSelf->tb_kyber_top__DOT__opcode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5866891530393743630ull);
    vlSelf->tb_kyber_top__DOT__mode_k = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14640034777032711846ull);
    vlSelf->tb_kyber_top__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4441144914257050083ull);
    vlSelf->tb_kyber_top__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9939709806297720520ull);
    vlSelf->tb_kyber_top__DOT__ext_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4136475458048877587ull);
    vlSelf->tb_kyber_top__DOT__ext_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12534227917117509760ull);
    vlSelf->tb_kyber_top__DOT__ext_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17619901774738850746ull);
    vlSelf->tb_kyber_top__DOT__ext_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9442601504383381879ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__tb_ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9889428478425096486ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__exp_buf[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5670855925843967807ull);
    }
    vlSelf->tb_kyber_top__DOT__mode_sel = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4234154593834992651ull);
    vlSelf->tb_kyber_top__DOT__check_ref = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 472863854322185403ull);
    vlSelf->tb_kyber_top__DOT__compare_errors = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16223971791538080078ull);
    vlSelf->tb_kyber_top__DOT__dump_ref = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9642606957283794889ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT____Vlvbound_h19da1bf1__2 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT____Vlvbound_h593c9377__1 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT____Vlvbound_h593c9377__0 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT____Vlvbound_h19da1bf1__1 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT____Vlvbound_h19da1bf1__0 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT__ext_din = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14240444316877684009ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_rho, __VscopeHash, 14524674777575834375ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_sigma, __VscopeHash, 475084809423486193ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_z, __VscopeHash, 14829116095944568742ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_m, __VscopeHash, 2664793370100216248ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_K_bar, __VscopeHash, 11022499079209152165ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_r_seed, __VscopeHash, 1073362407663200425ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_H_pk, __VscopeHash, 18008200623702894283ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_H_c, __VscopeHash, 17408141762657877061ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_kyber_top__DOT__uut__DOT__reg_trng_seed, __VscopeHash, 7372719112265490731ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_ct_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2205318114693352920ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_reenc_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16414217631962934824ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__enc_kdf_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8842157400307633660ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_kdf_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 454724293921075521ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_sp_from_scratch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15045170742839905629ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_use_tomont = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6828601812771991264ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__enc_noise_kind = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12390572130009547862ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__enc_ntt_phase = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5127698367089205899ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 225440457050914406ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dma_cnt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3294776357433732856ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__loop_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9891211707532581715ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__loop_j = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5735728240733192330ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_phase = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6307044906945902312ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_dec_intt_gs_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14888795107812917694ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hpk_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17443964115572306247ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hpk_addr_a = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12067368265846513522ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hpk_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16865570784077784097ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hpk_addr_b = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17984820938159616237ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hpk_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7995160307446028359ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3491213895401456240ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_addr_a = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16981759812697858827ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3671010783260418271ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_addr_b = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1696352791114108459ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9347933097565647916ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_dec_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3536160268103867028ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_dec_addr_a = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8542204822103329809ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_dec_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14931175443499741529ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_dec_addr_b = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4652716556547863187ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_dec_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6349705506800162139ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_reenc_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18040647281361573489ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_reenc_addr_a = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12979099578260883333ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_reenc_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 288952400383381267ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_reenc_addr_b = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4184805428571121716ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_reenc_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1420945624111062329ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__biu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11347095679750554897ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__base_v = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5185455662801001745ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12081749383548808915ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_cmd = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6708608074605142413ull);
    VL_SCOPED_RAND_RESET_W(1088, vlSelf->tb_kyber_top__DOT__uut__DOT__hash_din, __VscopeHash, 952037139808488197ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_bytes = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4531233355956319028ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_prf_eta3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17310647653424996298ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_stream_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12346030387676281824ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_stream_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15567557456876034985ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_stream_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7165841558490449883ull);
    VL_SCOPED_RAND_RESET_W(1088, vlSelf->tb_kyber_top__DOT__uut__DOT__hash_stream_din, __VscopeHash, 5396425280106941273ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_stream_bytes = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3517878289507117737ull);
    VL_SCOPED_RAND_RESET_W(1536, vlSelf->tb_kyber_top__DOT__uut__DOT__hash_dout, __VscopeHash, 7031887206911041891ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13751796034612466349ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cbd_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16685842708982648117ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cbd_base_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1113785681949279407ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cbd_eta3_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10178946109672385042ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cbd_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9119463499932640506ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cbd_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6442253459678438528ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cbd_ram_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17508417241653783181ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cbd_poly_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14669995791534980464ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__gm_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6581171547636727013ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__gm_transposed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12552116010882324863ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__gm_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2480050970945931414ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__gm_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5371884807336041679ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__gm_ram_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3329799660110878086ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__gm_ram_din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9987504775310182231ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2188672604381939553ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4957328357856347684ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 27632172257567762ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_ext_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9894369353393840383ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_ext_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4586219206509374257ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_ext_din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11488868968176290117ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_ext_dout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7230690145847330150ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_ext_dout_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12283508516502080846ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 956874559356761536ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13411417917025040716ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 21703158779593065ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_ram1_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 787182420536329929ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_ram1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7320949638203597764ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_zeta_real = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12181885340622720142ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_zeta_addr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6049346635041941072ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 233979711371822274ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8947386512246029889ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_not_equal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11539773682608968183ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_len = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2725551368871918270ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_addr_c = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11355822858583787202ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_addr_c_prime = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10988776773607531180ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_data_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18022782095687050669ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_data_c_prime = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17106994642334483256ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__comp_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9567092073582861917ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__comp_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10987720230867236130ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9776426272461020458ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7007530867930813224ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_we_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4596703519823088368ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_we_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10525933629042198476ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_addr_a = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13177922000279842495ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_addr_b = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4638935243197567995ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_din_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6948464080429293128ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_din_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8960955262189660551ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_ntt_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11691367734595792219ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_ntt_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16926372036141374219ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fsm_ntt_din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10188934603022805819ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_acc_base = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6719633308093051832ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dbg_pwma_u_pair_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6443108256002093097ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dbg_pwma_v_pair_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3683864143112072852ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dbg_pwma_dec_pair_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18165444934858629442ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_group_idx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16992860558703943215ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_slot_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11061324614394749151ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_cap_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14107832295993684507ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_unpack_group_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7985222940694999504ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_kyber_top__DOT__uut__DOT__dec_unpack_coeff_latch, __VscopeHash, 17651595039431070440ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_j_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 611407901858063574ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_j_work = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4479348294851873885ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_codec_op_w = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6073701211094942200ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w, __VscopeHash, 5756071291706465880ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out, __VscopeHash, 14326637699078330225ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_sp_poly_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14499483302867393213ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__add_main_d1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14880666724121011314ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__add_main_d2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17437819395908524213ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__add_main_d3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12927557346386214792ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__add_main_d4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12465936022414803685ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_we_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4241875046945630915ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_we_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14282930010300932837ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_addr_a = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13689872749081987969ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_addr_b = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2309547815617515577ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_din_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9110241033179405760ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_din_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10401813686781119949ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7114015352056403366ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__a_cache_addr_fsm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10734530643030404337ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__a_cache_din_fsm = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 423022460476774353ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__addr_a = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8785496577424734760ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__addr_b = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11058840504045116551ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dout_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12797716082879919075ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dout_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5948370332748518381ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__a_cache_dout_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11248603212156936834ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__a_cache_dout_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7396597768621731605ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_dout_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16993803206371659428ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_dout_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17772470315211666426ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_sp_addr_even = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17698305545751318410ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_pwma_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17449985307830125775ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_addr_a_mux = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8687719197981726918ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__scratch_addr_b_mux = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16571776079289440218ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_pack_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8399199800811701146ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_pack_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12038016466058832164ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_pack_u_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12742650480868346854ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_pack_v_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1474218082288832944ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_pack_ext_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18155069186434981416ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_pack_ext_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6010846164238355455ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_pack_ext_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5940970208898243226ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__a_cache_addr_even = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 315497007638533483ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14306249253975561733ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cbd_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15646665373412482877ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ntt_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7461071478482162756ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pwma_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7321024451835477070ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__cmp_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15107693304115026371ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__gm_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15688715860289691459ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ct_pack_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1846178149116391656ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_phase = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6057932291241543680ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_poly = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2817425753641111357ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_pair = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 361153486324389709ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_step = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3432526384264797740ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_pk_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13831677189685950042ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_sk_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10628310147017143650ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_pk_byte_idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7602539577959183650ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_c0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16408213859634620580ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_c1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18088918351049146638ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_b0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12781843336442451581ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_b1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18347872880448837658ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__pack_b2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6213286114799748176ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_reload_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11845021989304120323ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_poly = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8089537470027136322ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_pair = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7389977881699275333ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_step = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5520700120977047132ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_b0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8856540694610256536ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_b1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14598392108835063531ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_b2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4296984054354383476ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_c0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5944878539078007219ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_sk_c1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9088319818207642211ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__hash_fetching = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18390385611992620656ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fetch_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10288841271646856478ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__fetch_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6912417742725840651ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__dec_fetch_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11416975825013287282ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__bi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14242459974986452917ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__bi2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2268518911697176281ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ci = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7721562376260135847ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__rem12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8878632863107820155ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__rem12b = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10795990436754431179ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__c0s = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2296059752787168104ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__c1s = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17347039226529668595ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__c0n = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16743579222154947389ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__c1n = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5500740892233452231ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pair_base12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6332151700655999797ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pair_base_b12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14765720411765601842ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_even_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6274093213955956241ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_odd_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1008072874742135834ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_global_even_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5378847709295561055ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_global_odd_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1611469777846953552ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cand_off2_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8780220788911490130ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cand_off3_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15463337379453938744ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_pair_base12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5374103246294330616ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_pair_base_b12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14424664097079135750ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_even_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5081398509373076263ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_odd_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8346709912238134549ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_cand_off2_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15799880801623538395ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_cand_off3_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3678621206437830741ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_src_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13610372705823179555ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ep_src_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10000692420135741828ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ep_src_next12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12766234825256859626ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__su = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3667912652686163951ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__sv = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7469587069819664790ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_c = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13391957932774555661ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__su_c = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13492294004400985202ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__ep_term = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3051025180540478348ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__epp_term_v = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17819781206338344561ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__uidx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3376317211139841150ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_src_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10111847185259904292ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__epp_src_idx12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14274408731238619881ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__vidx_w = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9698792139832541459ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__vidx = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11278121117057299396ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__bitpos = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9850316756944400126ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__mb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10775142730265969184ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__bytev = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16730336352730268894ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__first_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12684024953049271365ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__first_re = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15241578776162935170ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__mbyte_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4412670893572566803ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__mbyte_idx_dec = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6854006761398898319ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__mb_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 928515297725574778ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__mbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4585249534393205916ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__all_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9937372539557437228ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__first_mis = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2456049857139493621ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__sk_coeff_base = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8092227632743129376ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__v_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4217537139770033952ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__su_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10581434653560168531ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__diff_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10877943454199501321ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__diff_q17 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2489198302644733604ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__tmsg32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6476939489677131744ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__sk_pair_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10619623911385542459ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_hpk_ram__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14433901245853742347ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_ram__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6380030605071814899ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_dec_ram__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3498431513345209856ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_reenc_ram__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7318559294428490473ull);
    }
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__stream_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15425740445965967235ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__out_len_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6982928387016273843ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13312113761640245607ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__is_sha3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2796567239774556704ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8656407286428184507ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8610367306599690896ull);
    VL_SCOPED_RAND_RESET_W(1088, vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din, __VscopeHash, 6349142028143913455ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18403655468401558195ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12091307479357169374ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h258c997c__0 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h4713971b__1 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h4713971b__0 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h5f820b96__0 = 0;
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3130242717527862573ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state, __VscopeHash, 16786036405154594859ull);
    VL_SCOPED_RAND_RESET_W(1088, vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din, __VscopeHash, 3464498894207535564ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18002320546986153302ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15382041466561165272ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10982503469228490566ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12152568959423172388ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3150449140631094255ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 929796203838307855ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7361076820516651866ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2917055556885787871ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_out, __VscopeHash, 17016163120871211191ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17506308595775084082ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__absorb_next, __VscopeHash, 13094127135953703404ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1520632551006459593ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14239062179305476601ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6901069821184774489ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state, __VscopeHash, 15428693583817681833ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__rc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13217987032456824017ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state, __VscopeHash, 624468100153385740ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 478941447564191777ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__c[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9773009252233401819ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__d[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11228039262718905744ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__theta_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13245563198230976045ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__rho_pi_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3450389122727261704ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__chi_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3044113677543706171ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_inst__DOT__iota_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5214017248453290772ull);
        }
    }
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6955732226435335762ull);
    VL_SCOPED_RAND_RESET_W(1536, vlSelf->tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__shift_reg, __VscopeHash, 3613588848881356634ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__coeff_cnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6425855333364648266ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__saved_eta3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1322697939185271276ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cbd__DOT__cbd_val = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12514762847496387585ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_absorb_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9039823640028668355ull);
    VL_SCOPED_RAND_RESET_W(272, vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_din, __VscopeHash, 16633032415621035377ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6949107695341655424ull);
    VL_SCOPED_RAND_RESET_W(1344, vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_data, __VscopeHash, 11400780193515127245ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__xof_squeeze_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11215053418790851820ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__loop_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11410440924404715669ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__loop_j = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11682996606412653901ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__k_val = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 414697335059742913ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__coeff_cnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17823305628961003837ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__poly_base = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1259768107369375226ull);
    VL_SCOPED_RAND_RESET_W(1344, vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_buf, __VscopeHash, 3354455865005159726ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10627612752794153945ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17016177499650917249ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10241655862997710474ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__sponge_state, __VscopeHash, 4946778798518787802ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13322406564074175100ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17869479020901142921ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__f_out, __VscopeHash, 4013231539632859729ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7398513151915401300ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15755814347119900813ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__curr_state, __VscopeHash, 1149450253286476097ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__rc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9317966379710452016ull);
    VL_SCOPED_RAND_RESET_W(1600, vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__next_state, __VscopeHash, 9563268611108183004ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11893722107744515954ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__c[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17273871088280549498ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__d[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1302788330613001057ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__theta_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4501902135885089175ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__rho_pi_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7852987003465838512ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__chi_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17925294269751030314ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_kyber_top__DOT__uut__DOT__u_gm__DOT__u_xof__DOT__keccak_inst__DOT__round_inst__DOT__iota_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4421367870447949380ull);
        }
    }
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10769231042686961646ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1771783073602881584ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7267566457803595859ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__warm_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14557359817627389240ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_call_ctr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8092252814627040567ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_call_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10868578125342537730ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__dbg_tag_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3664621481806348751ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2647458080493281770ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram0_dout_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10609035183485065869ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8042026737480206060ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__ram1_dout_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7892932531714020262ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__zeta = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8907599231718670793ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__bf_out_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10801552169195953216ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__bf_out_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17550436535171679820ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11144331316145725253ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_b[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8128879554028530039ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_we[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2410205651944483247ull);
    }
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__last_write_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6764021004750545330ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__inv_gs_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 146189006317586306ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16828254802847088518ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10828517540572569529ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13643728683836447907ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9326984949085476355ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_twiddle__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8933196661497361655ull);
    }
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2979605354322372952ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15880499310722789323ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__prod = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13239404772338569235ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7807130555213085847ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_sum_a_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5637687231581191935ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mont_res = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15206400141293974861ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__s1_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6137875768141337917ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_a__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16886357586741481173ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_butterfly__DOT__u_barrett_b__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9671982379580813857ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17382789314809751287ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2229330219158888379ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3028282414848621394ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6301169785933220356ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13229565911576929504ull);
    }
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__we_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8261444942919950730ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9159089490511555955ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17174608619798641612ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5445732779110072709ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_twiddle_pwma__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5327139568703287306ull);
    }
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9858554109870813200ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10492840170055278132ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__pair_hold = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10138608765350660565ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6260498007020395682ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_a1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15862211762653721262ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7443435527043558666ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_b1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13507803103095502724ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__bm_zeta = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7223806352250813156ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_pair = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14474741267640426759ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_zeta_base = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9812964117480080326ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_zeta_eff = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7762212444572933378ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_c0_old = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8511657632134811798ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s1_c1_old = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6938075218156154544ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s3_c0_old = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10404096375869253908ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__s3_c1_old = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4433922490859664509ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12650981658381776066ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__base_c1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16781913129258793432ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a0_b0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4173687464420609238ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_a1_b1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8470232683811275389ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2926867406658892246ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__mul_zeta = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2291214434317660898ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_00 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14308545562506399079ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_11 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5827203400019074178ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_mont_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9644388406699275740ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s1_zeta = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5055491503973697533ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_00 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18171713080937176961ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_11 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6971052143859778406ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4856391613380732708ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__s2_mont_zeta = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4403992086117971663ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c0__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14005535029645618128ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_basemul__DOT__u_barrett_c1__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12004162578321567594ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c0__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9423881888890462029ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_pwma__DOT__u_barrett_acc_c1__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8701672129479194408ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12752750752592787311ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__cnt = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18444588948805201632ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_cmp__DOT__diff_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10678388807211668037ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_a_cache__DOT__addr_a = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14689559959633307919ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_a_cache__DOT__bram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3405818094359400842ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1316390452028365452ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_kyber_top__DOT__uut__DOT__u_enc_scratch__DOT__bram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1362053528844652107ull);
    }
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12904939313958771523ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__group_idx = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17945639993494412721ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__cap_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1245992066191695945ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wr_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7734691913152081606ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__byte_idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8512546887640606265ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wait_u = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6322249492656417641ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__wait_v = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3598946991097403105ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__v_addr_w = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8948916425749590549ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 590826719491007330ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5571973228032622351ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4831635492994223350ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5915325590332946110ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7299212143996597937ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11305623515257718726ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c6 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16822504375598116090ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__c7 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6270439697623176511ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_in, __VscopeHash, 6725557401452717371ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_in, __VscopeHash, 2838679887516397166ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 665592749398671234ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_coeff_out, __VscopeHash, 12272085113290830156ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__codec_bytes_out, __VscopeHash, 10826052081947681343ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16833129924393276097ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8727862261068746985ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13871634836944054185ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t3 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9515150024455836935ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t4 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17233761195003121095ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t5 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7173828490153397531ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t6 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18135478453685421126ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__t7 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1743795852684434883ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17670329546400350191ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2303458278709882207ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3994734619900996355ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6009897898086718105ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__b4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1653413085598572335ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out, __VscopeHash, 15011603248696825876ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1382247027999856960ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11446006474841161187ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10803723643471303484ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15472125164642068407ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8625986361135882302ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1417546564031366099ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7651772316867628408ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15255051774528365462ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9210716945767412805ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5717452237176426177ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 240367138494663420ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1108213373963857447ull);
    vlSelf->tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7064034192470595595ull);
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__65__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__66__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__67__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__68__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__69__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__70__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__71__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__72__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__73__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__73__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__74__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__74__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__75__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__75__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__76__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__76__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__77__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__77__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__78__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__78__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__79__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__79__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__80__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__80__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__81__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__82__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__83__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__decompress_d__84__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__85__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__85__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__86__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__86__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__87__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__87__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__88__Vfuncout = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_codec__DOT__compress_d__88__c = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__89__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__90__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__91__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__92__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__93__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__94__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__95__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__96__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__105__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__106__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__107__x = 0;
    vlSelf->__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__108__x = 0;
    VL_ZERO_RESET_W(1600, vlSelf->__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state);
    vlSelf->__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start = 0;
    vlSelf->__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state = 0;
    vlSelf->__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt = 0;
    VL_ZERO_RESET_W(1600, vlSelf->__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_kyber_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_kyber_top__DOT__done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
