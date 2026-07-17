// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mult_pipelined__DOT__clk = vlSelfRef.clk;
    vlSelfRef.mult_pipelined__DOT__rst = vlSelfRef.rst;
    vlSelfRef.mult_pipelined__DOT__in_valid = vlSelfRef.in_valid;
    vlSelfRef.mult_pipelined__DOT__B = vlSelfRef.B;
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__clk 
            = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__rst 
            = vlSelfRef.rst;
    }
    if (((IData)(vlSelfRef.in_valid) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__in_valid))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__in_valid 
            = vlSelfRef.in_valid;
    }
    if (((IData)(vlSelfRef.mult_pipelined__DOT__out_valid) 
         ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__out_valid))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__out_valid 
            = vlSelfRef.mult_pipelined__DOT__out_valid;
    }
    if (((IData)(vlSelfRef.mult_pipelined__DOT__v1) 
         ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__v1))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__v1 
            = vlSelfRef.mult_pipelined__DOT__v1;
    }
    vlSelfRef.mult_pipelined__DOT__u_lo__DOT__b = (0xfU 
                                                   & ((IData)(vlSelfRef.B) 
                                                      >> 0U));
    vlSelfRef.mult_pipelined__DOT__u_hi__DOT__b = (0xfU 
                                                   & ((IData)(vlSelfRef.B) 
                                                      >> 4U));
    vlSelfRef.out_valid = vlSelfRef.mult_pipelined__DOT__out_valid;
    vlSelfRef.P = vlSelfRef.mult_pipelined__DOT__P;
    vlSelfRef.mult_pipelined__DOT__A = vlSelfRef.A;
    if ((1U & ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__A 
            = ((0xfeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)) 
               | (1U & (IData)(vlSelfRef.A)));
    }
    if ((2U & ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__A 
            = ((0xfdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)) 
               | (2U & (IData)(vlSelfRef.A)));
    }
    if ((4U & ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__A 
            = ((0xfbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)) 
               | (4U & (IData)(vlSelfRef.A)));
    }
    if ((8U & ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__A 
            = ((0xf7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)) 
               | (8U & (IData)(vlSelfRef.A)));
    }
    if ((0x10U & ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__A 
            = ((0xefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)) 
               | (0x10U & (IData)(vlSelfRef.A)));
    }
    if ((0x20U & ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__A 
            = ((0xdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)) 
               | (0x20U & (IData)(vlSelfRef.A)));
    }
    if ((0x40U & ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__A 
            = ((0xbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)) 
               | (0x40U & (IData)(vlSelfRef.A)));
    }
    if ((0x80U & ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__A 
            = ((0x7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__A)) 
               | (0x80U & (IData)(vlSelfRef.A)));
    }
    if ((1U & ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__B 
            = ((0xfeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)) 
               | (1U & (IData)(vlSelfRef.B)));
    }
    if ((2U & ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__B 
            = ((0xfdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)) 
               | (2U & (IData)(vlSelfRef.B)));
    }
    if ((4U & ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__B 
            = ((0xfbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)) 
               | (4U & (IData)(vlSelfRef.B)));
    }
    if ((8U & ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__B 
            = ((0xf7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)) 
               | (8U & (IData)(vlSelfRef.B)));
    }
    if ((0x10U & ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__B 
            = ((0xefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)) 
               | (0x10U & (IData)(vlSelfRef.B)));
    }
    if ((0x20U & ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__B 
            = ((0xdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)) 
               | (0x20U & (IData)(vlSelfRef.B)));
    }
    if ((0x40U & ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__B 
            = ((0xbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)) 
               | (0x40U & (IData)(vlSelfRef.B)));
    }
    if ((0x80U & ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__B 
            = ((0x7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__B)) 
               | (0x80U & (IData)(vlSelfRef.B)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xffefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xffdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xffbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xff7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xf7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xefffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x1000U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xdfffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x2000U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xbfffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x4000U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0x7fffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x8000U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    vlSelfRef.mult_pipelined__DOT__product = (0xffffU 
                                              & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                                                 + 
                                                 ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                                                  << 4U)));
    vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0 = 
        ((1U & (IData)(vlSelfRef.B)) ? (IData)(vlSelfRef.A)
          : 0U);
    vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1 = 
        ((2U & (IData)(vlSelfRef.B)) ? ((IData)(vlSelfRef.A) 
                                        << 1U) : 0U);
    vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2 = 
        ((4U & (IData)(vlSelfRef.B)) ? ((IData)(vlSelfRef.A) 
                                        << 2U) : 0U);
    vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3 = 
        ((8U & (IData)(vlSelfRef.B)) ? ((IData)(vlSelfRef.A) 
                                        << 3U) : 0U);
    vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0 = 
        ((0x10U & (IData)(vlSelfRef.B)) ? (IData)(vlSelfRef.A)
          : 0U);
    vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1 = 
        ((0x20U & (IData)(vlSelfRef.B)) ? ((IData)(vlSelfRef.A) 
                                           << 1U) : 0U);
    vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2 = 
        ((0x40U & (IData)(vlSelfRef.B)) ? ((IData)(vlSelfRef.A) 
                                           << 2U) : 0U);
    vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3 = 
        ((0x80U & (IData)(vlSelfRef.B)) ? ((IData)(vlSelfRef.A) 
                                           << 3U) : 0U);
    vlSelfRef.mult_pipelined__DOT__u_lo__DOT__a = vlSelfRef.mult_pipelined__DOT__A;
    vlSelfRef.mult_pipelined__DOT__u_hi__DOT__a = vlSelfRef.mult_pipelined__DOT__A;
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xffefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xffdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xffbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xff7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xf7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xefffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x1000U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xdfffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x2000U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xbfffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x4000U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0x7fffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x8000U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)));
    }
    vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p = (0xfffU 
                                                   & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp0) 
                                                      + 
                                                      ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp1) 
                                                       + 
                                                       ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp2) 
                                                        + (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__pp3)))));
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)));
    }
    vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p = (0xfffU 
                                                   & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp0) 
                                                      + 
                                                      ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp1) 
                                                       + 
                                                       ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp2) 
                                                        + (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__pp3)))));
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT____Vtogcov__p)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p)));
    }
    vlSelfRef.mult_pipelined__DOT__pl = vlSelfRef.mult_pipelined__DOT__u_lo__DOT__p;
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT____Vtogcov__p)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p)));
    }
    vlSelfRef.mult_pipelined__DOT__ph = vlSelfRef.mult_pipelined__DOT__u_hi__DOT__p;
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__pl)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__ph)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.mult_pipelined__DOT__out_valid = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.mult_pipelined__DOT__out_valid = vlSelfRef.mult_pipelined__DOT__v1;
    }
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.mult_pipelined__DOT__P = vlSelfRef.mult_pipelined__DOT__product;
    vlSelfRef.mult_pipelined__DOT__pl_r = vlSelfRef.mult_pipelined__DOT__pl;
    vlSelfRef.mult_pipelined__DOT__ph_r = vlSelfRef.mult_pipelined__DOT__ph;
    if (((IData)(vlSelfRef.mult_pipelined__DOT__out_valid) 
         ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__out_valid))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__out_valid 
            = vlSelfRef.mult_pipelined__DOT__out_valid;
    }
    vlSelfRef.out_valid = vlSelfRef.mult_pipelined__DOT__out_valid;
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.mult_pipelined__DOT__v1 = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.mult_pipelined__DOT__v1 = vlSelfRef.in_valid;
    }
    ++(vlSymsp->__Vcoverage[87]);
    vlSelfRef.P = vlSelfRef.mult_pipelined__DOT__P;
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xffefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xffdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xffbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xff7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xfbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xf7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xefffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x1000U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xdfffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x2000U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0xbfffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x4000U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.mult_pipelined__DOT__P) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__P 
            = ((0x7fffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__P)) 
               | (0x8000U & (IData)(vlSelfRef.mult_pipelined__DOT__P)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__pl_r)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__pl_r)));
    }
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xfefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xfdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xfbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xf7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0xbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r 
            = ((0x7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__ph_r)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__ph_r)));
    }
    vlSelfRef.mult_pipelined__DOT__product = (0xffffU 
                                              & ((IData)(vlSelfRef.mult_pipelined__DOT__pl_r) 
                                                 + 
                                                 ((IData)(vlSelfRef.mult_pipelined__DOT__ph_r) 
                                                  << 4U)));
    if ((1U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfffeU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (1U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfffdU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (2U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfffbU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (4U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
               ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfff7U & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (8U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xffefU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x10U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xffdfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x20U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xffbfU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x40U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                  ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xff7fU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x80U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfeffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x100U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfdffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x200U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xfbffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x400U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                   ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xf7ffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x800U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xefffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x1000U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xdfffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x2000U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0xbfffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x4000U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.mult_pipelined__DOT__product) 
                    ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__product 
            = ((0x7fffU & (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__product)) 
               | (0x8000U & (IData)(vlSelfRef.mult_pipelined__DOT__product)));
    }
    if (((IData)(vlSelfRef.mult_pipelined__DOT__v1) 
         ^ (IData)(vlSelfRef.mult_pipelined__DOT____Vtogcov__v1))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.mult_pipelined__DOT____Vtogcov__v1 
            = vlSelfRef.mult_pipelined__DOT__v1;
    }
}
