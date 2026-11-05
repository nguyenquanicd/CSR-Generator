// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_AXIL__SYMS_H_
#define VERILATED_VTB_AXIL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_axil.h"

// INCLUDE MODULE CLASSES
#include "Vtb_axil___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_axil__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_axil* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_axil___024root             TOP;

    // COVERAGE
    uint32_t __Vcoverage[3763];

    // CONSTRUCTORS
    Vtb_axil__Syms(VerilatedContext* contextp, const char* namep, Vtb_axil* modelp);
    ~Vtb_axil__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
