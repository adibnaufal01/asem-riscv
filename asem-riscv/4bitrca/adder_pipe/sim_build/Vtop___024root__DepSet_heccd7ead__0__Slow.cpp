// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/vsysuser/workspace/4bitrca/adder_pipe/adder_pipelined.v", 78, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->in_valid = 0;
    vlSelf->Cin = 0;
    VL_ZERO_RESET_W(128, vlSelf->A);
    VL_ZERO_RESET_W(128, vlSelf->B);
    vlSelf->out_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->SUM);
    vlSelf->Cout = 0;
    vlSelf->adder_pipelined__DOT__clk = 0;
    vlSelf->adder_pipelined__DOT__rst = 0;
    vlSelf->adder_pipelined__DOT__in_valid = 0;
    vlSelf->adder_pipelined__DOT__Cin = 0;
    VL_ZERO_RESET_W(128, vlSelf->adder_pipelined__DOT__A);
    VL_ZERO_RESET_W(128, vlSelf->adder_pipelined__DOT__B);
    vlSelf->adder_pipelined__DOT__out_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->adder_pipelined__DOT__SUM);
    vlSelf->adder_pipelined__DOT__Cout = 0;
    vlSelf->adder_pipelined__DOT__Sum0 = 0;
    vlSelf->adder_pipelined__DOT__Cout0 = 0;
    vlSelf->adder_pipelined__DOT__Cout0_d = 0;
    vlSelf->adder_pipelined__DOT__Sum0_r1 = 0;
    vlSelf->adder_pipelined__DOT__A1_d = 0;
    vlSelf->adder_pipelined__DOT__B1_d = 0;
    vlSelf->adder_pipelined__DOT__A2_d1 = 0;
    vlSelf->adder_pipelined__DOT__B2_d1 = 0;
    vlSelf->adder_pipelined__DOT__A3_d1 = 0;
    vlSelf->adder_pipelined__DOT__B3_d1 = 0;
    vlSelf->adder_pipelined__DOT__v1 = 0;
    vlSelf->adder_pipelined__DOT__Sum1_0 = 0;
    vlSelf->adder_pipelined__DOT__Sum1_1 = 0;
    vlSelf->adder_pipelined__DOT__Cout1_0 = 0;
    vlSelf->adder_pipelined__DOT__Cout1_1 = 0;
    vlSelf->adder_pipelined__DOT__Sum1 = 0;
    vlSelf->adder_pipelined__DOT__Cout1 = 0;
    vlSelf->adder_pipelined__DOT__Cout1_d = 0;
    vlSelf->adder_pipelined__DOT__Sum0_r2 = 0;
    vlSelf->adder_pipelined__DOT__Sum1_r1 = 0;
    vlSelf->adder_pipelined__DOT__A2_d2 = 0;
    vlSelf->adder_pipelined__DOT__B2_d2 = 0;
    vlSelf->adder_pipelined__DOT__A3_d2 = 0;
    vlSelf->adder_pipelined__DOT__B3_d2 = 0;
    vlSelf->adder_pipelined__DOT__v2 = 0;
    vlSelf->adder_pipelined__DOT__Sum2_0 = 0;
    vlSelf->adder_pipelined__DOT__Sum2_1 = 0;
    vlSelf->adder_pipelined__DOT__Cout2_0 = 0;
    vlSelf->adder_pipelined__DOT__Cout2_1 = 0;
    vlSelf->adder_pipelined__DOT__Sum2 = 0;
    vlSelf->adder_pipelined__DOT__Cout2 = 0;
    vlSelf->adder_pipelined__DOT__Cout2_d = 0;
    vlSelf->adder_pipelined__DOT__Sum0_r3 = 0;
    vlSelf->adder_pipelined__DOT__Sum1_r2 = 0;
    vlSelf->adder_pipelined__DOT__Sum2_r1 = 0;
    vlSelf->adder_pipelined__DOT__A3_d3 = 0;
    vlSelf->adder_pipelined__DOT__B3_d3 = 0;
    vlSelf->adder_pipelined__DOT__v3 = 0;
    vlSelf->adder_pipelined__DOT__Sum3_0 = 0;
    vlSelf->adder_pipelined__DOT__Sum3_1 = 0;
    vlSelf->adder_pipelined__DOT__Cout3_0 = 0;
    vlSelf->adder_pipelined__DOT__Cout3_1 = 0;
    vlSelf->adder_pipelined__DOT__Sum3 = 0;
    vlSelf->adder_pipelined__DOT__Cout3 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__clk = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__rst = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__in_valid = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cin = 0;
    VL_ZERO_RESET_W(128, vlSelf->adder_pipelined__DOT____Vtogcov__A);
    VL_ZERO_RESET_W(128, vlSelf->adder_pipelined__DOT____Vtogcov__B);
    vlSelf->adder_pipelined__DOT____Vtogcov__out_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->adder_pipelined__DOT____Vtogcov__SUM);
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum0 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout0 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout0_d = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum0_r1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__A1_d = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__B1_d = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__A2_d1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__B2_d1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__A3_d1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__B3_d1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__v1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum1_0 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum1_1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout1_0 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout1_1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout1_d = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum0_r2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum1_r1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__A2_d2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__B2_d2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__A3_d2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__B3_d2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__v2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum2_0 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum2_1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout2_0 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout2_1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout2_d = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum0_r3 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum1_r2 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum2_r1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__A3_d3 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__B3_d3 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__v3 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum3_0 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum3_1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout3_0 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout3_1 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Sum3 = 0;
    vlSelf->adder_pipelined__DOT____Vtogcov__Cout3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT____Vtogcov__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b1_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b2_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage1__DOT__u_b3_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT____Vtogcov__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b1_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b2_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c0__DOT__u_b3_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT____Vtogcov__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b1_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b2_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage2_c1__DOT__u_b3_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT____Vtogcov__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b1_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b2_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c0__DOT__u_b3_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT____Vtogcov__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b1_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b2_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage3_c1__DOT__u_b3_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT____Vtogcov__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b1_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b2_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c0__DOT__u_b3_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__s3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c2_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c2_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3_0 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3_1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c1 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c2 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3 = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b1_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b2_1__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_0__DOT____Vtogcov__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__a = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__b = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__cin = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT__cout = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__sum = 0;
    vlSelf->adder_pipelined__DOT__u_stage4_c1__DOT__u_b3_1__DOT____Vtogcov__cout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
}
