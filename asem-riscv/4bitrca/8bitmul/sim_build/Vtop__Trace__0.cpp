// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.in_valid));
    bufp->chgCData(oldp+3,(vlSelfRef.A),8);
    bufp->chgCData(oldp+4,(vlSelfRef.B),8);
    bufp->chgBit(oldp+5,(vlSelfRef.out_valid));
    bufp->chgSData(oldp+6,(vlSelfRef.P),16);
    bufp->chgBit(oldp+7,(vlSelfRef.mult_pipelined__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.mult_pipelined__DOT__rst));
    bufp->chgBit(oldp+9,(vlSelfRef.mult_pipelined__DOT__in_valid));
    bufp->chgCData(oldp+10,(vlSelfRef.mult_pipelined__DOT__A),8);
    bufp->chgCData(oldp+11,(vlSelfRef.mult_pipelined__DOT__B),8);
    bufp->chgBit(oldp+12,(vlSelfRef.mult_pipelined__DOT__out_valid));
    bufp->chgSData(oldp+13,(vlSelfRef.mult_pipelined__DOT__P),16);
    bufp->chgSData(oldp+14,(vlSelfRef.mult_pipelined__DOT__pl),12);
    bufp->chgSData(oldp+15,(vlSelfRef.mult_pipelined__DOT__ph),12);
    bufp->chgSData(oldp+16,(vlSelfRef.mult_pipelined__DOT__pl_r),12);
    bufp->chgSData(oldp+17,(vlSelfRef.mult_pipelined__DOT__ph_r),12);
    bufp->chgBit(oldp+18,(vlSelfRef.mult_pipelined__DOT__v1));
    bufp->chgSData(oldp+19,(vlSelfRef.mult_pipelined__DOT__product),16);
    bufp->chgCData(oldp+20,(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__a),8);
    bufp->chgCData(oldp+21,(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__b),4);
    bufp->chgSData(oldp+22,(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p),12);
    bufp->chgSData(oldp+23,(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0),12);
    bufp->chgSData(oldp+24,(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1),12);
    bufp->chgSData(oldp+25,(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2),12);
    bufp->chgSData(oldp+26,(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3),12);
    bufp->chgCData(oldp+27,(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__a),8);
    bufp->chgCData(oldp+28,(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__b),4);
    bufp->chgSData(oldp+29,(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p),12);
    bufp->chgSData(oldp+30,(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0),12);
    bufp->chgSData(oldp+31,(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1),12);
    bufp->chgSData(oldp+32,(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2),12);
    bufp->chgSData(oldp+33,(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3),12);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
