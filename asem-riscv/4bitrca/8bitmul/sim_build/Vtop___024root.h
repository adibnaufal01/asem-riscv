// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(in_valid,0,0);
    VL_IN8(A,7,0);
    VL_IN8(B,7,0);
    VL_OUT8(out_valid,0,0);
    CData/*0:0*/ mult_pipelined__DOT__clk;
    CData/*0:0*/ mult_pipelined__DOT__rst;
    CData/*0:0*/ mult_pipelined__DOT__in_valid;
    CData/*7:0*/ mult_pipelined__DOT__A;
    CData/*7:0*/ mult_pipelined__DOT__B;
    CData/*0:0*/ mult_pipelined__DOT__out_valid;
    CData/*0:0*/ mult_pipelined__DOT__v1;
    CData/*0:0*/ mult_pipelined__DOT____Vtogcov__clk;
    CData/*0:0*/ mult_pipelined__DOT____Vtogcov__rst;
    CData/*0:0*/ mult_pipelined__DOT____Vtogcov__in_valid;
    CData/*7:0*/ mult_pipelined__DOT____Vtogcov__A;
    CData/*7:0*/ mult_pipelined__DOT____Vtogcov__B;
    CData/*0:0*/ mult_pipelined__DOT____Vtogcov__out_valid;
    CData/*0:0*/ mult_pipelined__DOT____Vtogcov__v1;
    CData/*7:0*/ mult_pipelined__DOT__u_lo__DOT__a;
    CData/*3:0*/ mult_pipelined__DOT__u_lo__DOT__b;
    CData/*7:0*/ mult_pipelined__DOT__u_hi__DOT__a;
    CData/*3:0*/ mult_pipelined__DOT__u_hi__DOT__b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(P,15,0);
    SData/*15:0*/ mult_pipelined__DOT__P;
    SData/*11:0*/ mult_pipelined__DOT__pl;
    SData/*11:0*/ mult_pipelined__DOT__ph;
    SData/*11:0*/ mult_pipelined__DOT__pl_r;
    SData/*11:0*/ mult_pipelined__DOT__ph_r;
    SData/*15:0*/ mult_pipelined__DOT__product;
    SData/*15:0*/ mult_pipelined__DOT____Vtogcov__P;
    SData/*11:0*/ mult_pipelined__DOT____Vtogcov__pl;
    SData/*11:0*/ mult_pipelined__DOT____Vtogcov__ph;
    SData/*11:0*/ mult_pipelined__DOT____Vtogcov__pl_r;
    SData/*11:0*/ mult_pipelined__DOT____Vtogcov__ph_r;
    SData/*15:0*/ mult_pipelined__DOT____Vtogcov__product;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT__p;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT__pp0;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT__pp1;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT__pp2;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT__pp3;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT____Vtogcov__p;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp0;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp1;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp2;
    SData/*11:0*/ mult_pipelined__DOT__u_lo__DOT____Vtogcov__pp3;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT__p;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT__pp0;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT__pp1;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT__pp2;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT__pp3;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT____Vtogcov__p;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp0;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp1;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp2;
    SData/*11:0*/ mult_pipelined__DOT__u_hi__DOT____Vtogcov__pp3;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
