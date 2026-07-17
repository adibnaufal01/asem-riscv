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
    vlSelfRef.adder_pipelined__DOT__clk = vlSelfRef.clk;
    vlSelfRef.adder_pipelined__DOT__rst = vlSelfRef.rst;
    vlSelfRef.adder_pipelined__DOT__in_valid = vlSelfRef.in_valid;
    vlSelfRef.adder_pipelined__DOT__A[0U] = vlSelfRef.A[0U];
    vlSelfRef.adder_pipelined__DOT__A[1U] = vlSelfRef.A[1U];
    vlSelfRef.adder_pipelined__DOT__A[2U] = vlSelfRef.A[2U];
    vlSelfRef.adder_pipelined__DOT__A[3U] = vlSelfRef.A[3U];
    vlSelfRef.adder_pipelined__DOT__B[0U] = vlSelfRef.B[0U];
    vlSelfRef.adder_pipelined__DOT__B[1U] = vlSelfRef.B[1U];
    vlSelfRef.adder_pipelined__DOT__B[2U] = vlSelfRef.B[2U];
    vlSelfRef.adder_pipelined__DOT__B[3U] = vlSelfRef.B[3U];
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__clk 
            = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__rst 
            = vlSelfRef.rst;
    }
    if (((IData)(vlSelfRef.in_valid) ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__in_valid))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__in_valid 
            = vlSelfRef.in_valid;
    }
    if (((IData)(vlSelfRef.Cin) ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__Cin))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Cin 
            = vlSelfRef.Cin;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__out_valid) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__out_valid))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__out_valid 
            = vlSelfRef.adder_pipelined__DOT__out_valid;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__Cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout 
            = vlSelfRef.adder_pipelined__DOT__Cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__Cout0_d) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout0_d))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout0_d 
            = vlSelfRef.adder_pipelined__DOT__Cout0_d;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__v1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__v1))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__v1 
            = vlSelfRef.adder_pipelined__DOT__v1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__Cout1_d) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout1_d))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout1_d 
            = vlSelfRef.adder_pipelined__DOT__Cout1_d;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__v2) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__v2))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__v2 
            = vlSelfRef.adder_pipelined__DOT__v2;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__Cout2_d) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout2_d))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout2_d 
            = vlSelfRef.adder_pipelined__DOT__Cout2_d;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__v3) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__v3))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__v3 
            = vlSelfRef.adder_pipelined__DOT__v3;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.A[(((IData)(0x1fU) 
                                             + (IData)(0U)) 
                                            >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.A[0U] >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.B[(((IData)(0x1fU) 
                                             + (IData)(0U)) 
                                            >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.B[0U] >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__a 
        = (0xffU & (((0U == 0U) ? 0U : (vlSelfRef.A[
                                        (((IData)(7U) 
                                          + (IData)(0U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(0U)))) 
                    | (vlSelfRef.A[0U] >> 0U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__b 
        = (0xffU & (((0U == 0U) ? 0U : (vlSelfRef.B[
                                        (((IData)(7U) 
                                          + (IData)(0U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(0U)))) 
                    | (vlSelfRef.B[0U] >> 0U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__a 
        = (0xffU & (((0U == 8U) ? 0U : (vlSelfRef.A[
                                        (((IData)(7U) 
                                          + (IData)(8U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(8U)))) 
                    | (vlSelfRef.A[0U] >> 8U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__b 
        = (0xffU & (((0U == 8U) ? 0U : (vlSelfRef.B[
                                        (((IData)(7U) 
                                          + (IData)(8U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(8U)))) 
                    | (vlSelfRef.B[0U] >> 8U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__a 
        = (0xffU & (((0U == 8U) ? 0U : (vlSelfRef.A[
                                        (((IData)(7U) 
                                          + (IData)(8U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(8U)))) 
                    | (vlSelfRef.A[0U] >> 8U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__b 
        = (0xffU & (((0U == 8U) ? 0U : (vlSelfRef.B[
                                        (((IData)(7U) 
                                          + (IData)(8U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(8U)))) 
                    | (vlSelfRef.B[0U] >> 8U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__a 
        = (0xffU & (((0U == 0x10U) ? 0U : (vlSelfRef.A[
                                           (((IData)(7U) 
                                             + (IData)(0x10U)) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x10U)))) 
                    | (vlSelfRef.A[0U] >> 0x10U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__b 
        = (0xffU & (((0U == 0x10U) ? 0U : (vlSelfRef.B[
                                           (((IData)(7U) 
                                             + (IData)(0x10U)) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x10U)))) 
                    | (vlSelfRef.B[0U] >> 0x10U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__a 
        = (0xffU & (((0U == 0x10U) ? 0U : (vlSelfRef.A[
                                           (((IData)(7U) 
                                             + (IData)(0x10U)) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x10U)))) 
                    | (vlSelfRef.A[0U] >> 0x10U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__b 
        = (0xffU & (((0U == 0x10U) ? 0U : (vlSelfRef.B[
                                           (((IData)(7U) 
                                             + (IData)(0x10U)) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x10U)))) 
                    | (vlSelfRef.B[0U] >> 0x10U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__a 
        = (0xffU & (((0U == 0x18U) ? 0U : (vlSelfRef.A[
                                           (((IData)(7U) 
                                             + (IData)(0x18U)) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x18U)))) 
                    | (vlSelfRef.A[0U] >> 0x18U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__b 
        = (0xffU & (((0U == 0x18U) ? 0U : (vlSelfRef.B[
                                           (((IData)(7U) 
                                             + (IData)(0x18U)) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x18U)))) 
                    | (vlSelfRef.B[0U] >> 0x18U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__a 
        = (0xffU & (((0U == 0x18U) ? 0U : (vlSelfRef.A[
                                           (((IData)(7U) 
                                             + (IData)(0x18U)) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x18U)))) 
                    | (vlSelfRef.A[0U] >> 0x18U)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__b 
        = (0xffU & (((0U == 0x18U) ? 0U : (vlSelfRef.B[
                                           (((IData)(7U) 
                                             + (IData)(0x18U)) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x18U)))) 
                    | (vlSelfRef.B[0U] >> 0x18U)));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__a 
        = vlSelfRef.adder_pipelined__DOT__A1_d;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__b 
        = vlSelfRef.adder_pipelined__DOT__B1_d;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__cin 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__cin;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__a 
        = vlSelfRef.adder_pipelined__DOT__A1_d;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__b 
        = vlSelfRef.adder_pipelined__DOT__B1_d;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__cin 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__cin;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__a 
        = vlSelfRef.adder_pipelined__DOT__A2_d2;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__b 
        = vlSelfRef.adder_pipelined__DOT__B2_d2;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__cin 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__cin;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__a 
        = vlSelfRef.adder_pipelined__DOT__A2_d2;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__b 
        = vlSelfRef.adder_pipelined__DOT__B2_d2;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__cin 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__cin;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__a 
        = vlSelfRef.adder_pipelined__DOT__A3_d3;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__b 
        = vlSelfRef.adder_pipelined__DOT__B3_d3;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__cin 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__cin;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__a 
        = vlSelfRef.adder_pipelined__DOT__A3_d3;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__b 
        = vlSelfRef.adder_pipelined__DOT__B3_d3;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__cin 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__cin;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0x10U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__a 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    >> 0x18U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__b 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    >> 0x18U));
    vlSelfRef.out_valid = vlSelfRef.adder_pipelined__DOT__out_valid;
    vlSelfRef.SUM[0U] = vlSelfRef.adder_pipelined__DOT__SUM[0U];
    vlSelfRef.SUM[1U] = vlSelfRef.adder_pipelined__DOT__SUM[1U];
    vlSelfRef.SUM[2U] = vlSelfRef.adder_pipelined__DOT__SUM[2U];
    vlSelfRef.SUM[3U] = vlSelfRef.adder_pipelined__DOT__SUM[3U];
    vlSelfRef.Cout = vlSelfRef.adder_pipelined__DOT__Cout;
    vlSelfRef.adder_pipelined__DOT__Cin = vlSelfRef.Cin;
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__cout 
        = (1U & (((vlSelfRef.A[0U] >> 0x18U) + (vlSelfRef.B[0U] 
                                                >> 0x18U)) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__cout 
        = (1U & (((IData)(1U) + ((vlSelfRef.A[0U] >> 0x18U) 
                                 + (vlSelfRef.B[0U] 
                                    >> 0x18U))) >> 8U));
    if ((1U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (1U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (2U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (4U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum0_r1 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r1) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r1));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__A1_d 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (1U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__A1_d 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (2U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__A1_d 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (4U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__A1_d 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (8U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__A1_d 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if (((vlSelfRef.adder_pipelined__DOT__A1_d ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A1_d) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__A1_d));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__B1_d 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (1U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__B1_d 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (2U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__B1_d 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (4U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__B1_d 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (8U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__B1_d 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if (((vlSelfRef.adder_pipelined__DOT__B1_d ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B1_d) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__B1_d));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (1U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (2U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (4U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (8U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__A2_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if (((vlSelfRef.adder_pipelined__DOT__A2_d1 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d1) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__A2_d1));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (1U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (2U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (4U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (8U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__B2_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if (((vlSelfRef.adder_pipelined__DOT__B2_d1 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d1) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__B2_d1));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (1U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (2U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (4U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (8U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__A3_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if (((vlSelfRef.adder_pipelined__DOT__A3_d1 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d1) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__A3_d1));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (1U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (2U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (4U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (8U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__B3_d1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if (((vlSelfRef.adder_pipelined__DOT__B3_d1 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d1) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__B3_d1));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (1U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (2U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (4U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum0_r2 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r2) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r2));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (1U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (2U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (4U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum1_r1 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r1) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r1));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (1U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (2U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (4U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (8U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if (((vlSelfRef.adder_pipelined__DOT__A2_d2 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A2_d2) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__A2_d2));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (1U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (2U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (4U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (8U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if (((vlSelfRef.adder_pipelined__DOT__B2_d2 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B2_d2) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__B2_d2));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (1U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (2U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (4U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (8U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__A3_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if (((vlSelfRef.adder_pipelined__DOT__A3_d2 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d2) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__A3_d2));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (1U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (2U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (4U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (8U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__B3_d2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if (((vlSelfRef.adder_pipelined__DOT__B3_d2 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d2) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__B3_d2));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (1U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (2U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (4U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum0_r3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum0_r3 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum0_r3) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum0_r3));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (1U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (2U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (4U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum1_r2 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum1_r2 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum1_r2) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum1_r2));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (1U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (2U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (4U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum2_r1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum2_r1 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum2_r1) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum2_r1));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (1U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (2U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (4U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (8U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if (((vlSelfRef.adder_pipelined__DOT__A3_d3 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A3_d3) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__A3_d3));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (1U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (2U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (4U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (8U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    if (((vlSelfRef.adder_pipelined__DOT__B3_d3 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B3_d3) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__B3_d3));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__cout 
        = (1U & (((vlSelfRef.adder_pipelined__DOT__A1_d 
                   >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B1_d 
                                >> 0x18U)) >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__cout 
        = (1U & (((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A1_d 
                                  >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B1_d 
                                               >> 0x18U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__cout 
        = (1U & (((vlSelfRef.adder_pipelined__DOT__A2_d2 
                   >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                >> 0x18U)) >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__cout 
        = (1U & (((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A2_d2 
                                  >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                               >> 0x18U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__cout 
        = (1U & (((vlSelfRef.adder_pipelined__DOT__A3_d3 
                   >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                >> 0x18U)) >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__cout 
        = (1U & (((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A3_d3 
                                  >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                               >> 0x18U))) 
                 >> 8U));
    if ((1U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (1U & vlSelfRef.A[0U]));
    }
    if ((2U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (2U & vlSelfRef.A[0U]));
    }
    if ((4U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (4U & vlSelfRef.A[0U]));
    }
    if ((8U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (8U & vlSelfRef.A[0U]));
    }
    if ((0x10U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x10U & vlSelfRef.A[0U]));
    }
    if ((0x20U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x20U & vlSelfRef.A[0U]));
    }
    if ((0x40U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x40U & vlSelfRef.A[0U]));
    }
    if ((0x80U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x80U & vlSelfRef.A[0U]));
    }
    if ((0x100U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x100U & vlSelfRef.A[0U]));
    }
    if ((0x200U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x200U & vlSelfRef.A[0U]));
    }
    if ((0x400U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x400U & vlSelfRef.A[0U]));
    }
    if ((0x800U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x800U & vlSelfRef.A[0U]));
    }
    if ((0x1000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x1000U & vlSelfRef.A[0U]));
    }
    if ((0x2000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x2000U & vlSelfRef.A[0U]));
    }
    if ((0x4000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x4000U & vlSelfRef.A[0U]));
    }
    if ((0x8000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x8000U & vlSelfRef.A[0U]));
    }
    if ((0x10000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x10000U & vlSelfRef.A[0U]));
    }
    if ((0x20000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x20000U & vlSelfRef.A[0U]));
    }
    if ((0x40000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x40000U & vlSelfRef.A[0U]));
    }
    if ((0x80000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x80000U & vlSelfRef.A[0U]));
    }
    if ((0x100000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x100000U & vlSelfRef.A[0U]));
    }
    if ((0x200000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x200000U & vlSelfRef.A[0U]));
    }
    if ((0x400000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x400000U & vlSelfRef.A[0U]));
    }
    if ((0x800000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x800000U & vlSelfRef.A[0U]));
    }
    if ((0x1000000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x1000000U & vlSelfRef.A[0U]));
    }
    if ((0x2000000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x2000000U & vlSelfRef.A[0U]));
    }
    if ((0x4000000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x4000000U & vlSelfRef.A[0U]));
    }
    if ((0x8000000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x8000000U & vlSelfRef.A[0U]));
    }
    if ((0x10000000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x10000000U & vlSelfRef.A[0U]));
    }
    if ((0x20000000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x20000000U & vlSelfRef.A[0U]));
    }
    if ((0x40000000U & (vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x40000000U & vlSelfRef.A[0U]));
    }
    if (((vlSelfRef.A[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[0U]) 
               | (0x80000000U & vlSelfRef.A[0U]));
    }
    if ((1U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (1U & vlSelfRef.A[1U]));
    }
    if ((2U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (2U & vlSelfRef.A[1U]));
    }
    if ((4U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (4U & vlSelfRef.A[1U]));
    }
    if ((8U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (8U & vlSelfRef.A[1U]));
    }
    if ((0x10U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x10U & vlSelfRef.A[1U]));
    }
    if ((0x20U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x20U & vlSelfRef.A[1U]));
    }
    if ((0x40U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x40U & vlSelfRef.A[1U]));
    }
    if ((0x80U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x80U & vlSelfRef.A[1U]));
    }
    if ((0x100U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x100U & vlSelfRef.A[1U]));
    }
    if ((0x200U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x200U & vlSelfRef.A[1U]));
    }
    if ((0x400U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x400U & vlSelfRef.A[1U]));
    }
    if ((0x800U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x800U & vlSelfRef.A[1U]));
    }
    if ((0x1000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x1000U & vlSelfRef.A[1U]));
    }
    if ((0x2000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x2000U & vlSelfRef.A[1U]));
    }
    if ((0x4000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x4000U & vlSelfRef.A[1U]));
    }
    if ((0x8000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x8000U & vlSelfRef.A[1U]));
    }
    if ((0x10000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x10000U & vlSelfRef.A[1U]));
    }
    if ((0x20000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x20000U & vlSelfRef.A[1U]));
    }
    if ((0x40000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x40000U & vlSelfRef.A[1U]));
    }
    if ((0x80000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x80000U & vlSelfRef.A[1U]));
    }
    if ((0x100000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x100000U & vlSelfRef.A[1U]));
    }
    if ((0x200000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x200000U & vlSelfRef.A[1U]));
    }
    if ((0x400000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x400000U & vlSelfRef.A[1U]));
    }
    if ((0x800000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x800000U & vlSelfRef.A[1U]));
    }
    if ((0x1000000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x1000000U & vlSelfRef.A[1U]));
    }
    if ((0x2000000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x2000000U & vlSelfRef.A[1U]));
    }
    if ((0x4000000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x4000000U & vlSelfRef.A[1U]));
    }
    if ((0x8000000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x8000000U & vlSelfRef.A[1U]));
    }
    if ((0x10000000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x10000000U & vlSelfRef.A[1U]));
    }
    if ((0x20000000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x20000000U & vlSelfRef.A[1U]));
    }
    if ((0x40000000U & (vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x40000000U & vlSelfRef.A[1U]));
    }
    if (((vlSelfRef.A[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[1U]) 
               | (0x80000000U & vlSelfRef.A[1U]));
    }
    if ((1U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (1U & vlSelfRef.A[2U]));
    }
    if ((2U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (2U & vlSelfRef.A[2U]));
    }
    if ((4U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (4U & vlSelfRef.A[2U]));
    }
    if ((8U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (8U & vlSelfRef.A[2U]));
    }
    if ((0x10U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x10U & vlSelfRef.A[2U]));
    }
    if ((0x20U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x20U & vlSelfRef.A[2U]));
    }
    if ((0x40U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x40U & vlSelfRef.A[2U]));
    }
    if ((0x80U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x80U & vlSelfRef.A[2U]));
    }
    if ((0x100U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x100U & vlSelfRef.A[2U]));
    }
    if ((0x200U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x200U & vlSelfRef.A[2U]));
    }
    if ((0x400U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x400U & vlSelfRef.A[2U]));
    }
    if ((0x800U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x800U & vlSelfRef.A[2U]));
    }
    if ((0x1000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x1000U & vlSelfRef.A[2U]));
    }
    if ((0x2000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x2000U & vlSelfRef.A[2U]));
    }
    if ((0x4000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x4000U & vlSelfRef.A[2U]));
    }
    if ((0x8000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x8000U & vlSelfRef.A[2U]));
    }
    if ((0x10000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x10000U & vlSelfRef.A[2U]));
    }
    if ((0x20000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x20000U & vlSelfRef.A[2U]));
    }
    if ((0x40000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x40000U & vlSelfRef.A[2U]));
    }
    if ((0x80000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x80000U & vlSelfRef.A[2U]));
    }
    if ((0x100000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x100000U & vlSelfRef.A[2U]));
    }
    if ((0x200000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x200000U & vlSelfRef.A[2U]));
    }
    if ((0x400000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x400000U & vlSelfRef.A[2U]));
    }
    if ((0x800000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x800000U & vlSelfRef.A[2U]));
    }
    if ((0x1000000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x1000000U & vlSelfRef.A[2U]));
    }
    if ((0x2000000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x2000000U & vlSelfRef.A[2U]));
    }
    if ((0x4000000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x4000000U & vlSelfRef.A[2U]));
    }
    if ((0x8000000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x8000000U & vlSelfRef.A[2U]));
    }
    if ((0x10000000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x10000000U & vlSelfRef.A[2U]));
    }
    if ((0x20000000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x20000000U & vlSelfRef.A[2U]));
    }
    if ((0x40000000U & (vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x40000000U & vlSelfRef.A[2U]));
    }
    if (((vlSelfRef.A[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[2U]) 
               | (0x80000000U & vlSelfRef.A[2U]));
    }
    if ((1U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (1U & vlSelfRef.A[3U]));
    }
    if ((2U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (2U & vlSelfRef.A[3U]));
    }
    if ((4U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (4U & vlSelfRef.A[3U]));
    }
    if ((8U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (8U & vlSelfRef.A[3U]));
    }
    if ((0x10U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x10U & vlSelfRef.A[3U]));
    }
    if ((0x20U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x20U & vlSelfRef.A[3U]));
    }
    if ((0x40U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x40U & vlSelfRef.A[3U]));
    }
    if ((0x80U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x80U & vlSelfRef.A[3U]));
    }
    if ((0x100U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x100U & vlSelfRef.A[3U]));
    }
    if ((0x200U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x200U & vlSelfRef.A[3U]));
    }
    if ((0x400U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x400U & vlSelfRef.A[3U]));
    }
    if ((0x800U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x800U & vlSelfRef.A[3U]));
    }
    if ((0x1000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x1000U & vlSelfRef.A[3U]));
    }
    if ((0x2000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x2000U & vlSelfRef.A[3U]));
    }
    if ((0x4000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x4000U & vlSelfRef.A[3U]));
    }
    if ((0x8000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x8000U & vlSelfRef.A[3U]));
    }
    if ((0x10000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x10000U & vlSelfRef.A[3U]));
    }
    if ((0x20000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x20000U & vlSelfRef.A[3U]));
    }
    if ((0x40000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x40000U & vlSelfRef.A[3U]));
    }
    if ((0x80000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x80000U & vlSelfRef.A[3U]));
    }
    if ((0x100000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x100000U & vlSelfRef.A[3U]));
    }
    if ((0x200000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x200000U & vlSelfRef.A[3U]));
    }
    if ((0x400000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x400000U & vlSelfRef.A[3U]));
    }
    if ((0x800000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x800000U & vlSelfRef.A[3U]));
    }
    if ((0x1000000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x1000000U & vlSelfRef.A[3U]));
    }
    if ((0x2000000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x2000000U & vlSelfRef.A[3U]));
    }
    if ((0x4000000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x4000000U & vlSelfRef.A[3U]));
    }
    if ((0x8000000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x8000000U & vlSelfRef.A[3U]));
    }
    if ((0x10000000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x10000000U & vlSelfRef.A[3U]));
    }
    if ((0x20000000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x20000000U & vlSelfRef.A[3U]));
    }
    if ((0x40000000U & (vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x40000000U & vlSelfRef.A[3U]));
    }
    if (((vlSelfRef.A[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__A[3U]) 
               | (0x80000000U & vlSelfRef.A[3U]));
    }
    if ((1U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (1U & vlSelfRef.B[0U]));
    }
    if ((2U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (2U & vlSelfRef.B[0U]));
    }
    if ((4U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (4U & vlSelfRef.B[0U]));
    }
    if ((8U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (8U & vlSelfRef.B[0U]));
    }
    if ((0x10U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x10U & vlSelfRef.B[0U]));
    }
    if ((0x20U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x20U & vlSelfRef.B[0U]));
    }
    if ((0x40U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x40U & vlSelfRef.B[0U]));
    }
    if ((0x80U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x80U & vlSelfRef.B[0U]));
    }
    if ((0x100U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x100U & vlSelfRef.B[0U]));
    }
    if ((0x200U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x200U & vlSelfRef.B[0U]));
    }
    if ((0x400U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x400U & vlSelfRef.B[0U]));
    }
    if ((0x800U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x800U & vlSelfRef.B[0U]));
    }
    if ((0x1000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x1000U & vlSelfRef.B[0U]));
    }
    if ((0x2000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x2000U & vlSelfRef.B[0U]));
    }
    if ((0x4000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x4000U & vlSelfRef.B[0U]));
    }
    if ((0x8000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x8000U & vlSelfRef.B[0U]));
    }
    if ((0x10000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x10000U & vlSelfRef.B[0U]));
    }
    if ((0x20000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x20000U & vlSelfRef.B[0U]));
    }
    if ((0x40000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x40000U & vlSelfRef.B[0U]));
    }
    if ((0x80000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x80000U & vlSelfRef.B[0U]));
    }
    if ((0x100000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x100000U & vlSelfRef.B[0U]));
    }
    if ((0x200000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x200000U & vlSelfRef.B[0U]));
    }
    if ((0x400000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x400000U & vlSelfRef.B[0U]));
    }
    if ((0x800000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x800000U & vlSelfRef.B[0U]));
    }
    if ((0x1000000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x1000000U & vlSelfRef.B[0U]));
    }
    if ((0x2000000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x2000000U & vlSelfRef.B[0U]));
    }
    if ((0x4000000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x4000000U & vlSelfRef.B[0U]));
    }
    if ((0x8000000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x8000000U & vlSelfRef.B[0U]));
    }
    if ((0x10000000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x10000000U & vlSelfRef.B[0U]));
    }
    if ((0x20000000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x20000000U & vlSelfRef.B[0U]));
    }
    if ((0x40000000U & (vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x40000000U & vlSelfRef.B[0U]));
    }
    if (((vlSelfRef.B[0U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[0U]) 
               | (0x80000000U & vlSelfRef.B[0U]));
    }
    if ((1U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (1U & vlSelfRef.B[1U]));
    }
    if ((2U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (2U & vlSelfRef.B[1U]));
    }
    if ((4U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (4U & vlSelfRef.B[1U]));
    }
    if ((8U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (8U & vlSelfRef.B[1U]));
    }
    if ((0x10U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x10U & vlSelfRef.B[1U]));
    }
    if ((0x20U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x20U & vlSelfRef.B[1U]));
    }
    if ((0x40U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x40U & vlSelfRef.B[1U]));
    }
    if ((0x80U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x80U & vlSelfRef.B[1U]));
    }
    if ((0x100U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x100U & vlSelfRef.B[1U]));
    }
    if ((0x200U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x200U & vlSelfRef.B[1U]));
    }
    if ((0x400U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x400U & vlSelfRef.B[1U]));
    }
    if ((0x800U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x800U & vlSelfRef.B[1U]));
    }
    if ((0x1000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x1000U & vlSelfRef.B[1U]));
    }
    if ((0x2000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x2000U & vlSelfRef.B[1U]));
    }
    if ((0x4000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x4000U & vlSelfRef.B[1U]));
    }
    if ((0x8000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x8000U & vlSelfRef.B[1U]));
    }
    if ((0x10000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x10000U & vlSelfRef.B[1U]));
    }
    if ((0x20000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x20000U & vlSelfRef.B[1U]));
    }
    if ((0x40000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x40000U & vlSelfRef.B[1U]));
    }
    if ((0x80000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x80000U & vlSelfRef.B[1U]));
    }
    if ((0x100000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x100000U & vlSelfRef.B[1U]));
    }
    if ((0x200000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x200000U & vlSelfRef.B[1U]));
    }
    if ((0x400000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x400000U & vlSelfRef.B[1U]));
    }
    if ((0x800000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x800000U & vlSelfRef.B[1U]));
    }
    if ((0x1000000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x1000000U & vlSelfRef.B[1U]));
    }
    if ((0x2000000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x2000000U & vlSelfRef.B[1U]));
    }
    if ((0x4000000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x4000000U & vlSelfRef.B[1U]));
    }
    if ((0x8000000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x8000000U & vlSelfRef.B[1U]));
    }
    if ((0x10000000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x10000000U & vlSelfRef.B[1U]));
    }
    if ((0x20000000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x20000000U & vlSelfRef.B[1U]));
    }
    if ((0x40000000U & (vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x40000000U & vlSelfRef.B[1U]));
    }
    if (((vlSelfRef.B[1U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[1U]) 
               | (0x80000000U & vlSelfRef.B[1U]));
    }
    if ((1U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (1U & vlSelfRef.B[2U]));
    }
    if ((2U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (2U & vlSelfRef.B[2U]));
    }
    if ((4U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (4U & vlSelfRef.B[2U]));
    }
    if ((8U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (8U & vlSelfRef.B[2U]));
    }
    if ((0x10U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x10U & vlSelfRef.B[2U]));
    }
    if ((0x20U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x20U & vlSelfRef.B[2U]));
    }
    if ((0x40U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x40U & vlSelfRef.B[2U]));
    }
    if ((0x80U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x80U & vlSelfRef.B[2U]));
    }
    if ((0x100U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x100U & vlSelfRef.B[2U]));
    }
    if ((0x200U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x200U & vlSelfRef.B[2U]));
    }
    if ((0x400U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x400U & vlSelfRef.B[2U]));
    }
    if ((0x800U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x800U & vlSelfRef.B[2U]));
    }
    if ((0x1000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x1000U & vlSelfRef.B[2U]));
    }
    if ((0x2000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x2000U & vlSelfRef.B[2U]));
    }
    if ((0x4000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x4000U & vlSelfRef.B[2U]));
    }
    if ((0x8000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x8000U & vlSelfRef.B[2U]));
    }
    if ((0x10000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x10000U & vlSelfRef.B[2U]));
    }
    if ((0x20000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x20000U & vlSelfRef.B[2U]));
    }
    if ((0x40000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x40000U & vlSelfRef.B[2U]));
    }
    if ((0x80000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x80000U & vlSelfRef.B[2U]));
    }
    if ((0x100000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x100000U & vlSelfRef.B[2U]));
    }
    if ((0x200000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x200000U & vlSelfRef.B[2U]));
    }
    if ((0x400000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x400000U & vlSelfRef.B[2U]));
    }
    if ((0x800000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x800000U & vlSelfRef.B[2U]));
    }
    if ((0x1000000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x1000000U & vlSelfRef.B[2U]));
    }
    if ((0x2000000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x2000000U & vlSelfRef.B[2U]));
    }
    if ((0x4000000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x4000000U & vlSelfRef.B[2U]));
    }
    if ((0x8000000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x8000000U & vlSelfRef.B[2U]));
    }
    if ((0x10000000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x10000000U & vlSelfRef.B[2U]));
    }
    if ((0x20000000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x20000000U & vlSelfRef.B[2U]));
    }
    if ((0x40000000U & (vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x40000000U & vlSelfRef.B[2U]));
    }
    if (((vlSelfRef.B[2U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[2U]) 
               | (0x80000000U & vlSelfRef.B[2U]));
    }
    if ((1U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (1U & vlSelfRef.B[3U]));
    }
    if ((2U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (2U & vlSelfRef.B[3U]));
    }
    if ((4U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (4U & vlSelfRef.B[3U]));
    }
    if ((8U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (8U & vlSelfRef.B[3U]));
    }
    if ((0x10U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x10U & vlSelfRef.B[3U]));
    }
    if ((0x20U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x20U & vlSelfRef.B[3U]));
    }
    if ((0x40U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x40U & vlSelfRef.B[3U]));
    }
    if ((0x80U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x80U & vlSelfRef.B[3U]));
    }
    if ((0x100U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x100U & vlSelfRef.B[3U]));
    }
    if ((0x200U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x200U & vlSelfRef.B[3U]));
    }
    if ((0x400U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x400U & vlSelfRef.B[3U]));
    }
    if ((0x800U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x800U & vlSelfRef.B[3U]));
    }
    if ((0x1000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x1000U & vlSelfRef.B[3U]));
    }
    if ((0x2000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x2000U & vlSelfRef.B[3U]));
    }
    if ((0x4000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x4000U & vlSelfRef.B[3U]));
    }
    if ((0x8000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x8000U & vlSelfRef.B[3U]));
    }
    if ((0x10000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x10000U & vlSelfRef.B[3U]));
    }
    if ((0x20000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x20000U & vlSelfRef.B[3U]));
    }
    if ((0x40000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x40000U & vlSelfRef.B[3U]));
    }
    if ((0x80000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x80000U & vlSelfRef.B[3U]));
    }
    if ((0x100000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x100000U & vlSelfRef.B[3U]));
    }
    if ((0x200000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x200000U & vlSelfRef.B[3U]));
    }
    if ((0x400000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x400000U & vlSelfRef.B[3U]));
    }
    if ((0x800000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x800000U & vlSelfRef.B[3U]));
    }
    if ((0x1000000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x1000000U & vlSelfRef.B[3U]));
    }
    if ((0x2000000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x2000000U & vlSelfRef.B[3U]));
    }
    if ((0x4000000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x4000000U & vlSelfRef.B[3U]));
    }
    if ((0x8000000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x8000000U & vlSelfRef.B[3U]));
    }
    if ((0x10000000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x10000000U & vlSelfRef.B[3U]));
    }
    if ((0x20000000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x20000000U & vlSelfRef.B[3U]));
    }
    if ((0x40000000U & (vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x40000000U & vlSelfRef.B[3U]));
    }
    if (((vlSelfRef.B[3U] ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__B[3U]) 
               | (0x80000000U & vlSelfRef.B[3U]));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (1U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (2U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (4U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (8U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__SUM[0U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if (((vlSelfRef.adder_pipelined__DOT__SUM[0U] ^ 
          vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[0U]) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__SUM[0U]));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (1U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (2U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (4U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (8U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__SUM[1U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if (((vlSelfRef.adder_pipelined__DOT__SUM[1U] ^ 
          vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[1U]) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__SUM[1U]));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (1U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (2U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (4U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (8U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__SUM[2U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if (((vlSelfRef.adder_pipelined__DOT__SUM[2U] ^ 
          vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[2U]) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__SUM[2U]));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (1U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (2U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (4U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (8U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__SUM[3U] 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    if (((vlSelfRef.adder_pipelined__DOT__SUM[3U] ^ 
          vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U] 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__SUM[3U]) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__SUM[3U]));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__cout 
        = (1U & (((0xffU & (vlSelfRef.A[0U] >> 0x10U)) 
                  + (0xffU & (vlSelfRef.B[0U] >> 0x10U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & (vlSelfRef.A[0U] 
                                           >> 0x10U)) 
                                 + (0xffU & (vlSelfRef.B[0U] 
                                             >> 0x10U)))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum 
        = (0xffU & (((vlSelfRef.A[0U] << 0x18U) | (
                                                   vlSelfRef.A[0U] 
                                                   >> 8U)) 
                    + ((vlSelfRef.B[0U] << 0x18U) | 
                       (vlSelfRef.B[0U] >> 8U))));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum 
        = (0xffU & ((IData)(1U) + (((vlSelfRef.A[0U] 
                                     << 0x18U) | (vlSelfRef.A[0U] 
                                                  >> 8U)) 
                                   + ((vlSelfRef.B[0U] 
                                       << 0x18U) | 
                                      (vlSelfRef.B[0U] 
                                       >> 8U)))));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum 
        = (0xffU & (((vlSelfRef.A[0U] << 0x10U) | (
                                                   vlSelfRef.A[0U] 
                                                   >> 0x10U)) 
                    + ((vlSelfRef.B[0U] << 0x10U) | 
                       (vlSelfRef.B[0U] >> 0x10U))));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum 
        = (0xffU & ((IData)(1U) + (((vlSelfRef.A[0U] 
                                     << 0x10U) | (vlSelfRef.A[0U] 
                                                  >> 0x10U)) 
                                   + ((vlSelfRef.B[0U] 
                                       << 0x10U) | 
                                      (vlSelfRef.B[0U] 
                                       >> 0x10U)))));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum 
        = (0xffU & (((vlSelfRef.A[0U] << 8U) | (vlSelfRef.A[0U] 
                                                >> 0x18U)) 
                    + ((vlSelfRef.B[0U] << 8U) | (vlSelfRef.B[0U] 
                                                  >> 0x18U))));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum 
        = (0xffU & ((IData)(1U) + (((vlSelfRef.A[0U] 
                                     << 8U) | (vlSelfRef.A[0U] 
                                               >> 0x18U)) 
                                   + ((vlSelfRef.B[0U] 
                                       << 8U) | (vlSelfRef.B[0U] 
                                                 >> 0x18U)))));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum 
        = (0xffU & (vlSelfRef.A[0U] + (vlSelfRef.B[0U] 
                                       + (IData)(vlSelfRef.Cin))));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                    + vlSelfRef.adder_pipelined__DOT__B1_d));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum 
        = (0xffU & ((IData)(1U) + (vlSelfRef.adder_pipelined__DOT__A1_d 
                                   + vlSelfRef.adder_pipelined__DOT__B1_d)));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                    + vlSelfRef.adder_pipelined__DOT__B2_d2));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum 
        = (0xffU & ((IData)(1U) + (vlSelfRef.adder_pipelined__DOT__A2_d2 
                                   + vlSelfRef.adder_pipelined__DOT__B2_d2)));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum 
        = (0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                    + vlSelfRef.adder_pipelined__DOT__B3_d3));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum 
        = (0xffU & ((IData)(1U) + (vlSelfRef.adder_pipelined__DOT__A3_d3 
                                   + vlSelfRef.adder_pipelined__DOT__B3_d3)));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__cout 
        = (1U & (((0xffU & (vlSelfRef.A[0U] >> 8U)) 
                  + (0xffU & (vlSelfRef.B[0U] >> 8U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & (vlSelfRef.A[0U] 
                                           >> 8U)) 
                                 + (0xffU & (vlSelfRef.B[0U] 
                                             >> 8U)))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__cout 
        = (1U & (((0xffU & vlSelfRef.A[0U]) + ((0xffU 
                                                & vlSelfRef.B[0U]) 
                                               + (IData)(vlSelfRef.Cin))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout 
        = (1U & (((0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                            >> 0x10U)) + (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                                                   >> 0x10U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                                           >> 0x10U)) 
                                 + (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                                             >> 0x10U)))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout 
        = (1U & (((0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                            >> 0x10U)) + (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                                   >> 0x10U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                                           >> 0x10U)) 
                                 + (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                             >> 0x10U)))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout 
        = (1U & (((0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                            >> 0x10U)) + (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                                   >> 0x10U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                                           >> 0x10U)) 
                                 + (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                             >> 0x10U)))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A1_d 
                     >> 8U) + (vlSelfRef.adder_pipelined__DOT__B1_d 
                               >> 8U)));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A1_d 
                                    >> 8U) + (vlSelfRef.adder_pipelined__DOT__B1_d 
                                              >> 8U))));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A1_d 
                     >> 0x10U) + (vlSelfRef.adder_pipelined__DOT__B1_d 
                                  >> 0x10U)));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A1_d 
                                    >> 0x10U) + (vlSelfRef.adder_pipelined__DOT__B1_d 
                                                 >> 0x10U))));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A1_d 
                     >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B1_d 
                                  >> 0x18U)));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A1_d 
                                    >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B1_d 
                                                 >> 0x18U))));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A2_d2 
                     >> 8U) + (vlSelfRef.adder_pipelined__DOT__B2_d2 
                               >> 8U)));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A2_d2 
                                    >> 8U) + (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                              >> 8U))));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A2_d2 
                     >> 0x10U) + (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                  >> 0x10U)));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A2_d2 
                                    >> 0x10U) + (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                                 >> 0x10U))));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A2_d2 
                     >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                  >> 0x18U)));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A2_d2 
                                    >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                                 >> 0x18U))));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A3_d3 
                     >> 8U) + (vlSelfRef.adder_pipelined__DOT__B3_d3 
                               >> 8U)));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A3_d3 
                                    >> 8U) + (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                              >> 8U))));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A3_d3 
                     >> 0x10U) + (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                  >> 0x10U)));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A3_d3 
                                    >> 0x10U) + (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                                 >> 0x10U))));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum 
        = (0xffU & ((vlSelfRef.adder_pipelined__DOT__A3_d3 
                     >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                  >> 0x18U)));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum 
        = (0xffU & ((IData)(1U) + ((vlSelfRef.adder_pipelined__DOT__A3_d3 
                                    >> 0x18U) + (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                                 >> 0x18U))));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__cout 
        = (1U & (((0xffU & vlSelfRef.adder_pipelined__DOT__A1_d) 
                  + (0xffU & vlSelfRef.adder_pipelined__DOT__B1_d)) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & vlSelfRef.adder_pipelined__DOT__A1_d) 
                                 + (0xffU & vlSelfRef.adder_pipelined__DOT__B1_d))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__cout 
        = (1U & (((0xffU & vlSelfRef.adder_pipelined__DOT__A2_d2) 
                  + (0xffU & vlSelfRef.adder_pipelined__DOT__B2_d2)) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & vlSelfRef.adder_pipelined__DOT__A2_d2) 
                                 + (0xffU & vlSelfRef.adder_pipelined__DOT__B2_d2))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__cout 
        = (1U & (((0xffU & vlSelfRef.adder_pipelined__DOT__A3_d3) 
                  + (0xffU & vlSelfRef.adder_pipelined__DOT__B3_d3)) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & vlSelfRef.adder_pipelined__DOT__A3_d3) 
                                 + (0xffU & vlSelfRef.adder_pipelined__DOT__B3_d3))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout 
        = (1U & (((0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                            >> 8U)) + (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                                                >> 8U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & (vlSelfRef.adder_pipelined__DOT__A1_d 
                                           >> 8U)) 
                                 + (0xffU & (vlSelfRef.adder_pipelined__DOT__B1_d 
                                             >> 8U)))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout 
        = (1U & (((0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                            >> 8U)) + (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                                >> 8U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & (vlSelfRef.adder_pipelined__DOT__A2_d2 
                                           >> 8U)) 
                                 + (0xffU & (vlSelfRef.adder_pipelined__DOT__B2_d2 
                                             >> 8U)))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout 
        = (1U & (((0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                            >> 8U)) + (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                                >> 8U))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout 
        = (1U & (((IData)(1U) + ((0xffU & (vlSelfRef.adder_pipelined__DOT__A3_d3 
                                           >> 8U)) 
                                 + (0xffU & (vlSelfRef.adder_pipelined__DOT__B3_d3 
                                             >> 8U)))) 
                 >> 8U));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__cin 
        = vlSelfRef.adder_pipelined__DOT__Cin;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__cout;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__cout;
    }
    if (vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__cout) {
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c0 = 1U;
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__cout;
    } else {
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c0 = 0U;
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum;
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum)));
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__cout)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout));
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__cout)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__cout)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout));
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__cout)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1_0 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1_1 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__cout 
        = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout;
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__cout)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout));
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__cout)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__cin 
        = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__cin;
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c3_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c3_0))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c3_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c3_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c3_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c3_1))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c3_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c3_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c3_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c3_0))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c3_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c3_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c3_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c3_0))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c3_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c3_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c3_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c3_1))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c3_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c3_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c3_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c3_1))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c3_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c3_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c3_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c3_0))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c3_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c3_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c3_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c3_0))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c3_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c3_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c3_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c3_1))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c3_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c3_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c3_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c3_1))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c3_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c3_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c3_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c3_0))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c3_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c3_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c3_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3_0))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c3_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c3_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c3_1))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c3_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c3_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c3_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3_1))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c3_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2_0))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2_1))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2_1;
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s1_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s2_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s3_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__s0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s0)));
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1_0))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1_1))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c0))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c0 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c2_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c2_0))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c2_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c2_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c2_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c2_0))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c2_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c2_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c2_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c2_1))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c2_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c2_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c2_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c2_1))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c2_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c2_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c2_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c2_0))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c2_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c2_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c2_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c2_0))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c2_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c2_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c2_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c2_1))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c2_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c2_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c2_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c2_1))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c2_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c2_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c2_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c2_0))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c2_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c2_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c2_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c2_0))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c2_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c2_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c2_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c2_1))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c2_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c2_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c2_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c2_1))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c2_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c2_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__cout;
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s1_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s1_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s2_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s2_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__s3_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__s3_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s1_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s1_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s2_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s2_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__s3_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__s3_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s1_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s1_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s2_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s2_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_0)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__s3_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__s3_1)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfeU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfdU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xfbU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((8U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum) 
               ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xf7U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xefU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x20U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xdfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x40U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0xbfU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum)));
    }
    if ((0x80U & ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum) 
                  ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum 
            = ((0x7fU & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum)));
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c0))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c0 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c0))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c0 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c0))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c0 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c0))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c0 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c0))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c0 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c0))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c0 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1_0))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1_0))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1_1))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1_1))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c2 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__c1)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c2 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c1__DOT__c1)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1_0))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1_0))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1_1))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1_1))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c2 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__c1)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c2 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c1__DOT__c1)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1_0))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1_0) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1_0))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1_0 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1_0;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1_1))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1_1))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1_1 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__cout) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__cout 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__cout;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c2 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__c1)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c2 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c1)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout));
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelfRef.adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2 
            = vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2;
    }
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__cout 
        = ((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2)
            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__cout)
            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__cout));
    vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__sum 
        = (((((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c2)
               ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum)
               : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum)) 
             << 0x18U) | (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__c1)
                            ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum)
                            : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum)) 
                          << 0x10U)) | ((((IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__cout)
                                           ? (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum)
                                           : (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum)) 
                                         << 8U) | (IData)(vlSelfRef.adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum)));
}
