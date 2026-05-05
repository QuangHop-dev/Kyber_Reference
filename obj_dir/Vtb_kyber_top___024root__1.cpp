// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_kyber_top.h for the primary calling header

#include "Vtb_kyber_top__pch.h"

extern const VlUnpacked<QData/*63:0*/, 32> Vtb_kyber_top__ConstPool__TABLE_h46e597c0_0;

void Vtb_kyber_top___024root___nba_sequent__TOP__1(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    // Body
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b 
        = (0x000000ffU & ((0x80U >> (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__stage_eff)) 
                          + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_a)));
    if ((0U == (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__state))) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_a 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_a 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr;
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram1__DOT__addr_b 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__ntt_ext_addr)));
    } else {
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
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000031U)) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state[__Vilp1] 
            = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt 
        = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x00000031U)) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state[__Vilp2] 
            = vlSelfRef.__Vdly__tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__curr_state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__addr_b 
        = ((IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_ram0__DOT__we_b)
            ? vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__delay_addr_b[2U]
            : (IData)(vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_ntt__DOT__u_addr_gen__DOT__addr_b));
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x00000031U)) {
        vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__absorb_next[__Vilp3] 
            = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__sponge_state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
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
    __Vtableidx2 = vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__round_cnt;
    vlSelfRef.tb_kyber_top__DOT__uut__DOT__u_hash__DOT__u_shake__DOT__sponge_inst__DOT__f_inst__DOT__rc 
        = Vtb_kyber_top__ConstPool__TABLE_h46e597c0_0
        [__Vtableidx2];
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

void Vtb_kyber_top___024root___nba_sequent__TOP__0(Vtb_kyber_top___024root* vlSelf);
void Vtb_kyber_top___024root___act_comb__TOP__0(Vtb_kyber_top___024root* vlSelf);

void Vtb_kyber_top___024root___eval_nba(Vtb_kyber_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_kyber_top___024root___eval_nba\n"); );
    Vtb_kyber_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_kyber_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtb_kyber_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_kyber_top___024root___act_comb__TOP__0(vlSelf);
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
