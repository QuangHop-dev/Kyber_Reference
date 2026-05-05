// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_kyber_top.h for the primary calling header

#include "Vtb_kyber_top__pch.h"

void Vtb_kyber_top___024root___ctor_var_reset(Vtb_kyber_top___024root* vlSelf);

Vtb_kyber_top___024root::Vtb_kyber_top___024root(Vtb_kyber_top__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_kyber_top___024root___ctor_var_reset(this);
}

void Vtb_kyber_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_kyber_top___024root::~Vtb_kyber_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
