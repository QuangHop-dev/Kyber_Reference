// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_kyber_top.h for the primary calling header

#include "Vtb_kyber_top__pch.h"

extern const VlWide<50>/*1599:0*/ Vtb_kyber_top__ConstPool__CONST_ha4affa7d_0;
extern const VlWide<34>/*1087:0*/ Vtb_kyber_top__ConstPool__CONST_hfbe8e9b1_0;
extern const VlWide<48>/*1535:0*/ Vtb_kyber_top__ConstPool__CONST_h22f5c49d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_kyber_top__ConstPool__TABLE_h9ce4d438_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_kyber_top__ConstPool__TABLE_h4d2ef343_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtb_kyber_top__ConstPool__TABLE_hdc428c08_0;
extern const VlUnpacked<QData/*63:0*/, 32> Vtb_kyber_top__ConstPool__TABLE_h46e597c0_0;

void Vtb_kyber_top___024root___nba_sequent__TOP__1(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    IData/*31:0*/ __Vilp6;
    IData/*31:0*/ __Vilp7;
    IData/*31:0*/ __Vilp8;
    IData/*31:0*/ __Vilp9;
    IData/*31:0*/ __Vilp10;
    // Body
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
    if ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel))) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_din 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_poly_out;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_we 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_we;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr 
            = (0x000000ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_ram_addr));
    } else {
        if ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_din = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr 
                = (0x000000ffU & (0x000000feU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr) 
                                                 << 1U)));
        } else {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_din 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_din;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr 
                = (0x000000ffU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_addr));
        }
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_we 
            = ((2U != (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_mux_sel)) 
               && (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_ntt_we));
    }
    if (vlSelfRef.tb_kyber_top__DOT__rst) {
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 0U;
        VL_ASSIGN_W(1600, vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state, Vtb_kyber_top__ConstPool__CONST_ha4affa7d_0);
        VL_ASSIGN_W(1088, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din, Vtb_kyber_top__ConstPool__CONST_hfbe8e9b1_0);
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3 = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type = 0U;
        VL_ASSIGN_W(1536, vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout, Vtb_kyber_top__ConstPool__CONST_h22f5c49d_0);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_done = 0U;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt = 0U;
        VL_ASSIGN_W(1600, vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state, Vtb_kyber_top__ConstPool__CONST_ha4affa7d_0);
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done = 0U;
        VL_ASSIGN_W(1600, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_out, Vtb_kyber_top__ConstPool__CONST_ha4affa7d_0);
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_done = 0U;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack = 0U;
        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start = 0U;
        if ((8U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 0U;
                } else {
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[34U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[0U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[35U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[1U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[36U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[2U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[37U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[3U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[38U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[4U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[39U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[5U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[40U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[6U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[41U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[7U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[42U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[8U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[43U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[9U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[44U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[10U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[45U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[11U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[46U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[12U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[47U] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[13U];
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_done = 1U;
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
                if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done) {
                    __Vilp1 = 0U;
                    while ((__Vilp1 <= 0x00000031U)) {
                        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[__Vilp1] 
                            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_out
                            [__Vilp1];
                        __Vilp1 = ((IData)(1U) + __Vilp1);
                    }
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 0x0aU;
                }
            } else if (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3) 
                        & (0U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type)))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[0U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[0U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[1U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[1U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[2U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[2U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[3U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[3U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[4U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[4U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[5U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[5U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[6U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[6U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[7U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[7U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_done = 1U;
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 0U;
            } else if (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3) 
                        | (1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type)))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[0U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[0U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[1U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[1U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[2U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[2U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[3U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[3U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[4U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[4U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[5U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[5U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[6U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[6U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[7U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[7U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[8U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[8U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[9U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[9U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[10U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[10U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[11U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[11U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[12U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[12U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[13U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[13U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[14U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[14U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[15U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[15U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_done = 1U;
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 0U;
            } else if ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[0U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[0U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[1U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[1U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[2U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[2U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[3U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[3U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[4U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[4U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[5U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[5U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[6U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[6U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[7U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[7U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[8U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[8U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[9U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[9U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[10U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[10U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[11U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[11U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[12U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[12U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[13U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[13U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[14U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[14U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[15U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[15U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[16U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[16U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[17U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[17U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[18U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[18U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[19U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[19U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[20U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[20U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[21U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[21U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[22U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[22U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[23U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[23U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[24U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[24U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[25U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[25U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[26U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[26U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[27U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[27U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[28U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[28U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[29U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[29U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[30U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[30U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[31U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[31U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_done = 1U;
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 0U;
            } else {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[0U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[0U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[1U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[1U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[2U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[2U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[3U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[3U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[4U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[4U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[5U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[5U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[6U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[6U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[7U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[7U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[8U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[8U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[9U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[9U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[10U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[10U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[11U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[11U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[12U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[12U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[13U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[13U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[14U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[14U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[15U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[15U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[16U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[16U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[17U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[17U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[18U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[18U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[19U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[19U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[20U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[20U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[21U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[21U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[22U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[22U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[23U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[23U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[24U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[24U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[25U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[25U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[26U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[26U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[27U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[27U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[28U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[28U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[29U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[29U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[30U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[30U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[31U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[31U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[32U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[32U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_dout[33U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[33U];
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start = 1U;
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
                    if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done) {
                        __Vilp2 = 0U;
                        while ((__Vilp2 <= 0x00000031U)) {
                            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[__Vilp2] 
                                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_out
                                [__Vilp2];
                            __Vilp2 = ((IData)(1U) 
                                       + __Vilp2);
                        }
                        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 8U;
                    }
                } else {
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start = 1U;
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
                if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3) {
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h4713971b__0 
                        = (0x000000ffU & (6U ^ ((0x063fU 
                                                 >= 
                                                 (0x000007ffU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U)))
                                                 ? 
                                                (((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U))))) 
                                                 | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                                                    [
                                                    (0x0000003fU 
                                                     & (VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U))))
                                                 : 0U)));
                    if ((0x063fU >= (0x000007ffU & 
                                     VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U)))) {
                        VL_ASSIGNSEL_WI(1600, 8, (0x000007ffU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U)), vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h4713971b__0);
                    }
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits 
                        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode)
                            ? 0x0240U : 0x0440U);
                } else {
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h4713971b__1 
                        = (0x000000ffU & (0x1fU ^ (
                                                   (0x063fU 
                                                    >= 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                                                      [
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x000007ffU 
                                                         & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U))))) 
                                                    | (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                                                       [
                                                       (0x0000003fU 
                                                        & (VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U))))
                                                    : 0U)));
                    if ((0x063fU >= (0x000007ffU & 
                                     VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U)))) {
                        VL_ASSIGNSEL_WI(1600, 8, (0x000007ffU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len), 3U)), vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state, vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h4713971b__1);
                    }
                    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits 
                        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode)
                            ? 0x0440U : 0x0540U);
                }
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 6U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h258c997c__0 
                    = (1U & (~ ((0x063fU >= (0x000007ffU 
                                             & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits) 
                                                - (IData)(1U)))) 
                                && (1U & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                                          [(0x0000003fU 
                                            & (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits) 
                                                - (IData)(1U)) 
                                               >> 5U))] 
                                          >> (0x0000001fU 
                                              & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits) 
                                                 - (IData)(1U))))))));
                if ((0x063fU >= (0x000007ffU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits) 
                                                - (IData)(1U))))) {
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[(0x0000003fU 
                                                                                & (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x0000001fU 
                                                & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits) 
                                                   - (IData)(1U))))) 
                            & vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                            [(0x0000003fU & (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits) 
                                              - (IData)(1U)) 
                                             >> 5U))]) 
                           | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT____Vlvbound_h258c997c__0) 
                              << (0x0000001fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__rate_bits) 
                                                 - (IData)(1U)))));
                }
            } else if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[0U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[0U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[1U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[1U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[2U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[2U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[3U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[3U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[4U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[4U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[5U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[5U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[6U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[6U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[7U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[7U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[8U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[8U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[9U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[9U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[10U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[10U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[11U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[11U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[12U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[12U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[13U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[13U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[14U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[14U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[15U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[15U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[16U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[16U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[17U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[17U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[18U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[18U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[19U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[19U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[20U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[20U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[21U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[21U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[22U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[22U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[23U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[23U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[24U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[24U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[25U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[25U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[26U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[26U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[27U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[27U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[28U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[28U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[29U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[29U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[30U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[30U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[31U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[31U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[32U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[32U];
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[33U] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[33U];
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_len;
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_last;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack = 1U;
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
                if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done) {
                    __Vilp3 = 0U;
                    while ((__Vilp3 <= 0x00000031U)) {
                        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[__Vilp3] 
                            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_out
                            [__Vilp3];
                        __Vilp3 = ((IData)(1U) + __Vilp3);
                    }
                    if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block) {
                        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len = 0U;
                        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block = 0U;
                        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 5U;
                    } else {
                        vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 4U;
                    }
                }
            } else {
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start = 1U;
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state))) {
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x00000031U)) {
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[__Vilp4] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__absorb_next
                    [__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
            if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last) {
                if ((((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3) 
                      & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode))) 
                     & (0x88U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len)))) {
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block = 1U;
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 5U;
                }
            } else {
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 2U;
            }
        } else if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid) {
            VL_ASSIGN_W(1600, vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state, Vtb_kyber_top__ConstPool__CONST_ha4affa7d_0);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[0U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[0U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[1U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[1U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[2U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[2U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[3U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[3U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[4U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[4U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[5U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[5U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[6U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[6U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[7U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[7U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[8U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[8U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[9U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[9U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[10U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[10U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[11U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[11U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[12U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[12U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[13U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[13U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[14U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[14U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[15U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[15U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[16U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[16U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[17U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[17U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[18U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[18U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[19U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[19U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[20U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[20U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[21U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[21U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[22U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[22U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[23U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[23U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[24U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[24U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[25U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[25U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[26U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[26U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[27U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[27U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[28U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[28U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[29U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[29U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[30U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[30U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[31U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[31U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[32U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[32U];
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_din[33U] 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_din[33U];
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__eff_len;
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_last;
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block = 0U;
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__mode;
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__is_sha3;
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__out_len_type;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack = 1U;
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state = 1U;
        }
        if ((0U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done = 0U;
            if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start) {
                __Vilp5 = 0U;
                while ((__Vilp5 <= 0x00000031U)) {
                    vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[__Vilp5] 
                        = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
                        [__Vilp5];
                    __Vilp5 = ((IData)(1U) + __Vilp5);
                }
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt = 0U;
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state))) {
            __Vilp6 = 0U;
            while ((__Vilp6 <= 0x00000031U)) {
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[__Vilp6] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__next_state
                    [__Vilp6];
                __Vilp6 = ((IData)(1U) + __Vilp6);
            }
            if ((0x17U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt))) {
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state = 2U;
            } else {
                vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt)));
            }
        } else if ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_done = 1U;
            __Vilp7 = 0U;
            while ((__Vilp7 <= 0x00000031U)) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_out[__Vilp7] 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state
                    [__Vilp7];
                __Vilp7 = ((IData)(1U) + __Vilp7);
            }
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state = 0U;
        } else {
            vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state = 0U;
        }
    }
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
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group 
        = ((0x0000007fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt)) 
           >> (0x0000000fU & ((IData)(7U) - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__addr_b = 
        (0x00000fffU & ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                         ? ((IData)(1U) + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))
                         : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_addr_b)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__addr_a = 
        ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
          ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__cbd_ram_addr)
          : ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
              : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__fsm_addr_a)));
    if (vlSelfRef.__VdlySet__tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram__v0) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram[vlSelfRef.__VdlyDim0__tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram__v0] 
            = vlSelfRef.__VdlyVal__tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram__v0;
    }
    if (vlSelfRef.__VdlySet__tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram__v1) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram[vlSelfRef.__VdlyDim0__tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram__v1] 
            = vlSelfRef.__VdlyVal__tb_kyber_top__DOT__uut__DOT__u_ram__DOT__bram__v1;
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_last;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__final_full_block;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_mode;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_is_sha3;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__saved_out_len_type;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__state;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_last 
        = (1U & ((~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_en)) 
                 | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_last)));
    if (vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_en) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_valid;
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
    } else {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_valid 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_start;
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
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__beat_len;
    __Vtableidx2 = (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_prf_eta3) 
                     << 3U) | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_cmd));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__is_sha3 
        = Vtb_kyber_top__ConstPool__TABLE_h9ce4d438_0
        [__Vtableidx2];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__mode 
        = Vtb_kyber_top__ConstPool__TABLE_h4d2ef343_0
        [__Vtableidx2];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__out_len_type 
        = Vtb_kyber_top__ConstPool__TABLE_hdc428c08_0
        [__Vtableidx2];
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a 
        = (0x000000ffU & (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__group) 
                           << (0x0000000fU & ((IData)(8U) 
                                              - (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)))) 
                          + (0x0000007fU & (((0x80U 
                                              >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)) 
                                             - (IData)(1U)) 
                                            & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__cnt)))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__stream_ack 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__hash_stream_en) 
           & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__i_ack));
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
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_start;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__state;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x00000031U)) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[__Vilp8] 
            = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x00000031U)) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[__Vilp9] 
            = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_b 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_b)
            ? vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_b[2U]
            : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b));
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x00000031U)) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__absorb_next[__Vilp10] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__i = 0U;
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
    __Vtableidx3 = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__rc 
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
}

void Vtb_kyber_top___024root___nba_comb__TOP__0(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___nba_comb__TOP__0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__ct_bytes_total 
        = ((0U == (IData)(vlSelfRef.tb_kyber_top__DOT__mode_k))
            ? 0x0300U : ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__mode_k))
                          ? 0x0440U : 0x0620U));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__ext_din 
        = (vlSelfRef.tb_kyber_top__DOT__tb_ram[(0x00001fffU 
                                                & vlSelfRef.tb_kyber_top__DOT__ext_addr)] 
           & (- (IData)((0x00002000U > vlSelfRef.tb_kyber_top__DOT__ext_addr))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even 
        = (0x00000fffU & (VL_SHIFTL_III(12,12,32, ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_j) 
                                                   + 
                                                   ((7U 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.tb_kyber_top__DOT__mode_k))) 
                                                    * (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__loop_i))), 8U) 
                          + ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__pwma_ram0_addr) 
                             << 1U)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w = 0U;
    if ((0x33U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w 
                = ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__mode_k))
                    ? 3U : 1U);
        } else if ((1U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_phase))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w 
                = ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__mode_k))
                    ? 7U : 5U);
        }
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ct_pack__DOT__u_total_groups 
        = (0x000003ffU & (((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__mode_k))
                            ? 0x20U : 0x40U) * (7U 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelfRef.tb_kyber_top__DOT__mode_k)))));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_a_cache__DOT__addr_a 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_we_fsm)
            ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_fsm)
            : ((2U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__mux_sel))
                ? (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__a_cache_addr_even)
                : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__gm_ram_addr)));
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w1 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w2 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w0 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w3 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[2U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w4 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b5 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b6 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b7 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b8 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b9 = 0U;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b10 = 0U;
    if ((4U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w))) {
        if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w)))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w1 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w2 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w0 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w3 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U] 
                    = (0xffffff00U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U]);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__w4 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m = 0U;
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
                    = (0x0000001fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 
                    = ((0x00000018U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                       << 3U)) | (7U 
                                                  & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0) 
                                                     >> 5U)));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                      >> 2U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 
                    = ((0x0000001eU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                                     >> 7U)));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 
                    = ((0x00000010U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3) 
                                       << 4U)) | (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2) 
                                                     >> 4U)));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3) 
                                      >> 1U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 
                    = (0x1fU & (VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3), 6U) 
                                | VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4), 2U)));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4) 
                                      >> 3U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__262__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000010U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__262__x))) 
                       >> 5U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_20__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_20__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__263__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000010U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__263__x))) 
                       >> 5U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_21__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_21__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__264__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000010U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__264__x))) 
                       >> 5U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_22__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_22__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__265__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000010U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__265__x))) 
                       >> 5U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_23__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_23__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__266__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000010U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__266__x))) 
                       >> 5U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_24__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_24__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__267__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000010U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__267__x))) 
                       >> 5U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_25__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_25__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__268__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000010U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__268__x))) 
                       >> 5U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_26__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_26__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__269__x 
                    = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(0x00000010U) + ((IData)(0x00000d01U) 
                                                * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__269__x))) 
                       >> 5U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_27__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_27__decompress_d) 
                          << 0x00000010U));
            } else {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4 = 0U;
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w)))) {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m = 0U;
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
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__278__x 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__278__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_12__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_12__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__279__x 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0) 
                                      >> 4U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__279__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_13__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_13__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__280__x 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__280__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_14__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_14__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__281__x 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                      >> 4U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__281__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_15__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_15__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__282__x 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__282__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_16__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_16__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__283__x 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2) 
                                      >> 4U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__283__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_17__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_17__decompress_d) 
                          << 0x00000010U));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__284__x 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__284__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_18__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] 
                    = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U]) 
                       | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_18__decompress_d));
                vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__285__x 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3) 
                                      >> 4U));
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                    = (((IData)(8U) + ((IData)(0x00000d01U) 
                                       * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__285__x))) 
                       >> 4U);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_19__decompress_d 
                    = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] 
                    = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U]) 
                       | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_19__decompress_d) 
                          << 0x00000010U));
            } else {
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 = 0U;
                vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w)))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[2U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m = 0U;
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
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b5 
                = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[1U] 
                                  >> 8U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b6 
                = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[1U] 
                                  >> 0x00000010U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b7 
                = (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[1U] 
                   >> 0x00000018U);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b8 
                = (0x000000ffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[2U]);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b9 
                = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[2U] 
                                  >> 8U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b10 
                = (0x000000ffU & (vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_bytes_w[2U] 
                                  >> 0x00000010U));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0 
                = ((0x00000700U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                   << 8U)) | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1 
                = ((0x000007e0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2) 
                                   << 5U)) | (0x0000001fU 
                                              & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1) 
                                                 >> 3U)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2 
                = ((0x00000400U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4) 
                                   << 0x0000000aU)) 
                   | (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3) 
                       << 2U) | (3U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2) 
                                       >> 6U))));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3 
                = ((0x00000780U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b5) 
                                   << 7U)) | (0x0000007fU 
                                              & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4) 
                                                 >> 1U)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 
                = ((0x000007f0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b6) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b5) 
                                                 >> 4U)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 
                = ((0x00000600U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b8) 
                                   << 9U)) | (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b7) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b6) 
                                                    >> 7U))));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 
                = ((0x000007c0U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b9) 
                                   << 6U)) | (0x0000003fU 
                                              & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b8) 
                                                 >> 2U)));
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 
                = (((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b10) 
                    << 3U) | (7U & ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b9) 
                                    >> 5U)));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__294__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000400U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__294__x))) 
                   >> 0x0bU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_4__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_4__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__295__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000400U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__295__x))) 
                   >> 0x0bU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_5__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                   | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_5__decompress_d) 
                      << 0x00000010U));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__296__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000400U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__296__x))) 
                   >> 0x0bU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_6__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_6__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__297__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000400U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__297__x))) 
                   >> 0x0bU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_7__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                   | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_7__decompress_d) 
                      << 0x00000010U));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__298__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000400U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__298__x))) 
                   >> 0x0bU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_8__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_8__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__299__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000400U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__299__x))) 
                   >> 0x0bU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_9__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[2U]) 
                   | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_9__decompress_d) 
                      << 0x00000010U));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__300__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000400U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__300__x))) 
                   >> 0x0bU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_10__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[3U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_10__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__301__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000400U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__301__x))) 
                   >> 0x0bU);
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
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t4 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t5 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t6 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t7 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b0 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b1 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b2 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b3 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b4 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b5 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b6 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b7 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b8 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b9 = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__b10 = 0U;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_op_w)))) {
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__u = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__t = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[0U] = 0U;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U] 
                = (0xffffff00U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__bytes_out[1U]);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__compress_d__Vstatic__m = 0U;
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
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__310__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t0;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__310__x))) 
                   >> 0x0aU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_0__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_0__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__311__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t1;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__311__x))) 
                   >> 0x0aU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_1__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U] 
                = ((0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[0U]) 
                   | ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_1__decompress_d) 
                      << 0x00000010U));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__312__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t2;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__312__x))) 
                   >> 0x0aU);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_2__decompress_d 
                = (0x0000ffffU & vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t);
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U] 
                = ((0xffff0000U & vlSelfRef.tb_kyber_top__DOT__uut__DOT__dec_codec_coeff_out[1U]) 
                   | (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT____VlemCall_2__decompress_d));
            vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__313__x 
                = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__t3;
            vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__Vstatic__t 
                = (((IData)(0x00000200U) + ((IData)(0x00000d01U) 
                                            * (IData)(vlSelfRef.__Vfunc_tb_kyber_top__DOT__uut__DOT__u_dec_codec__DOT__decompress_d__313__x))) 
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
}

void Vtb_kyber_top___024root___nba_sequent__TOP__0(Vtb_kyber_top___024root* vlSelf);

void Vtb_kyber_top___024root___eval_nba(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_nba\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_kyber_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vtb_kyber_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_kyber_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

void Vtb_kyber_top___024root___timing_ready(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___timing_ready\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready("@(posedge tb_kyber_top.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready("@( tb_kyber_top.done)");
    }
}

void Vtb_kyber_top___024root___timing_resume(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___timing_resume\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd1eddec1__0.moveToResumeQueue(
                                                          "@(posedge tb_kyber_top.clk)");
    vlSelfRef.__VtrigSched_h5ca4dc88__0.moveToResumeQueue(
                                                          "@( tb_kyber_top.done)");
    vlSelfRef.__VtrigSched_hd1eddec1__0.resume("@(posedge tb_kyber_top.clk)");
    vlSelfRef.__VtrigSched_h5ca4dc88__0.resume("@( tb_kyber_top.done)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_kyber_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_kyber_top___024root___eval_triggers_vec__act(Vtb_kyber_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_kyber_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_kyber_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_kyber_top___024root___eval_act(Vtb_kyber_top___024root* vlSelf);

bool Vtb_kyber_top___024root___eval_phase__act(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_phase__act\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_kyber_top___024root___eval_triggers_vec__act(vlSelf);
    Vtb_kyber_top___024root___timing_ready(vlSelf);
    Vtb_kyber_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_kyber_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_kyber_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_kyber_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_kyber_top___024root___timing_resume(vlSelf);
        Vtb_kyber_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_kyber_top___024root___eval_phase__inact(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_phase__inact\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_kyber_top.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_kyber_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_kyber_top___024root___eval_phase__nba(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_phase__nba\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_kyber_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_kyber_top___024root___eval_nba(vlSelf);
        Vtb_kyber_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_kyber_top___024root___eval(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_kyber_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_kyber_top.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_kyber_top.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_kyber_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_kyber_top.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_kyber_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_kyber_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_kyber_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_kyber_top___024root____VbeforeTrig_hd1eddec1__0(Vtb_kyber_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root____VbeforeTrig_hd1eddec1__0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_kyber_top__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_kyber_top__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_kyber_top__DOT__clk__0 
        = vlSelfRef.tb_kyber_top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd1eddec1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_kyber_top___024root____VbeforeTrig_h5ca4dc88__0(Vtb_kyber_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root____VbeforeTrig_h5ca4dc88__0\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_kyber_top__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_kyber_top__DOT__done__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_kyber_top__DOT__done__0 
        = vlSelfRef.tb_kyber_top__DOT__done;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5ca4dc88__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_kyber_top___024root___eval_debug_assertions(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_debug_assertions\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
