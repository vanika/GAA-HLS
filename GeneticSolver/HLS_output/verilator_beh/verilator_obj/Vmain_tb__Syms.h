// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vmain_tb__Syms_H_
#define _Vmain_tb__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vmain_tb.h"

// SYMS CLASS
class Vmain_tb__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmain_tb*                      TOPp;
    
    // CREATORS
    Vmain_tb__Syms(Vmain_tb* topp, const char* namep);
    ~Vmain_tb__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
