// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_mult_pipelined);
    __Vhier.remove(&__Vscope_mult_pipelined, &__Vscope_mult_pipelined__u_hi);
    __Vhier.remove(&__Vscope_mult_pipelined, &__Vscope_mult_pipelined__u_lo);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_mult_pipelined.configure(this, name(), "mult_pipelined", "mult_pipelined", "mult_pipelined", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_mult_pipelined__u_hi.configure(this, name(), "mult_pipelined.u_hi", "u_hi", "mult8x4", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_mult_pipelined__u_lo.configure(this, name(), "mult_pipelined.u_lo", "u_lo", "mult8x4", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_mult_pipelined);
    __Vhier.add(&__Vscope_mult_pipelined, &__Vscope_mult_pipelined__u_hi);
    __Vhier.add(&__Vscope_mult_pipelined, &__Vscope_mult_pipelined__u_lo);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"A", &(TOP.A), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"B", &(TOP.B), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"P", &(TOP.P), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"in_valid", &(TOP.in_valid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"out_valid", &(TOP.out_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"A", &(TOP.mult_pipelined__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"B", &(TOP.mult_pipelined__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"P", &(TOP.mult_pipelined__DOT__P), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"clk", &(TOP.mult_pipelined__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"in_valid", &(TOP.mult_pipelined__DOT__in_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"out_valid", &(TOP.mult_pipelined__DOT__out_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"ph", &(TOP.mult_pipelined__DOT__ph), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"ph_r", &(TOP.mult_pipelined__DOT__ph_r), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"pl", &(TOP.mult_pipelined__DOT__pl), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"pl_r", &(TOP.mult_pipelined__DOT__pl_r), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"product", &(TOP.mult_pipelined__DOT__product), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"rst", &(TOP.mult_pipelined__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult_pipelined.varInsert(__Vfinal,"v1", &(TOP.mult_pipelined__DOT__v1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mult_pipelined__u_hi.varInsert(__Vfinal,"a", &(TOP.mult_pipelined__DOT__u_hi__DOT__a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_mult_pipelined__u_hi.varInsert(__Vfinal,"b", &(TOP.mult_pipelined__DOT__u_hi__DOT__b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_mult_pipelined__u_hi.varInsert(__Vfinal,"p", &(TOP.mult_pipelined__DOT__u_hi__DOT__p), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_hi.varInsert(__Vfinal,"pp0", &(TOP.mult_pipelined__DOT__u_hi__DOT__pp0), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_hi.varInsert(__Vfinal,"pp1", &(TOP.mult_pipelined__DOT__u_hi__DOT__pp1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_hi.varInsert(__Vfinal,"pp2", &(TOP.mult_pipelined__DOT__u_hi__DOT__pp2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_hi.varInsert(__Vfinal,"pp3", &(TOP.mult_pipelined__DOT__u_hi__DOT__pp3), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_lo.varInsert(__Vfinal,"a", &(TOP.mult_pipelined__DOT__u_lo__DOT__a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_mult_pipelined__u_lo.varInsert(__Vfinal,"b", &(TOP.mult_pipelined__DOT__u_lo__DOT__b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_mult_pipelined__u_lo.varInsert(__Vfinal,"p", &(TOP.mult_pipelined__DOT__u_lo__DOT__p), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_lo.varInsert(__Vfinal,"pp0", &(TOP.mult_pipelined__DOT__u_lo__DOT__pp0), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_lo.varInsert(__Vfinal,"pp1", &(TOP.mult_pipelined__DOT__u_lo__DOT__pp1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_lo.varInsert(__Vfinal,"pp2", &(TOP.mult_pipelined__DOT__u_lo__DOT__pp2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_mult_pipelined__u_lo.varInsert(__Vfinal,"pp3", &(TOP.mult_pipelined__DOT__u_lo__DOT__pp3), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
    }
}
