// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_0 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum3_0 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_0) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum3_0));
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__Cout3_1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout3_1))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout3_1 
            = vlSelfRef.adder_pipelined__DOT__Cout3_1;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c3) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT____Vtogcov__c3 
            = vlSelfRef.adder_pipelined__DOT__u_stage4_c1__DOT__c3;
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__Cout3) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout3))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Cout3 
            = vlSelfRef.adder_pipelined__DOT__Cout3;
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (1U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (2U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (4U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum3_1 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum3_1 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3_1) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum3_1));
    }
    if ((1U & (vlSelfRef.adder_pipelined__DOT__Sum3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffffffeU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (1U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((2U & (vlSelfRef.adder_pipelined__DOT__Sum3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffffffdU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (2U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((4U & (vlSelfRef.adder_pipelined__DOT__Sum3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffffffbU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (4U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((8U & (vlSelfRef.adder_pipelined__DOT__Sum3 
               ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffffff7U & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (8U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x10U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffffffefU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x10U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x20U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffffffdfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x20U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x40U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffffffbfU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x40U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x80U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                  ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffffff7fU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x80U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x100U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffffeffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x100U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x200U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffffdffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x200U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x400U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffffbffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x400U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x800U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                   ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffff7ffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x800U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x1000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffffefffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x1000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x2000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffffdfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x2000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x4000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffffbfffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x4000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x8000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                    ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffff7fffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x8000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x10000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffeffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x10000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x20000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffdffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x20000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x40000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfffbffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x40000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x80000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                     ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfff7ffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x80000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x100000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffefffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x100000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x200000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffdfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x200000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x400000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xffbfffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x400000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x800000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                      ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xff7fffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x800000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x1000000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfeffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x1000000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x2000000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfdffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x2000000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x4000000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xfbffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x4000000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x8000000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                       ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xf7ffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x8000000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x10000000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xefffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x10000000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x20000000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xdfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x20000000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if ((0x40000000U & (vlSelfRef.adder_pipelined__DOT__Sum3 
                        ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0xbfffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x40000000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if (((vlSelfRef.adder_pipelined__DOT__Sum3 ^ vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3 
            = ((0x7fffffffU & vlSelfRef.adder_pipelined__DOT____Vtogcov__Sum3) 
               | (0x80000000U & vlSelfRef.adder_pipelined__DOT__Sum3));
    }
    if (((IData)(vlSelfRef.adder_pipelined__DOT__v1) 
         ^ (IData)(vlSelfRef.adder_pipelined__DOT____Vtogcov__v1))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.adder_pipelined__DOT____Vtogcov__v1 
            = vlSelfRef.adder_pipelined__DOT__v1;
    }
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
}
