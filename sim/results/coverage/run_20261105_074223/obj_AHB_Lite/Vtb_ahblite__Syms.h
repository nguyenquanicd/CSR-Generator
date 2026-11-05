// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_AHBLITE__SYMS_H_
#define VERILATED_VTB_AHBLITE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_ahblite.h"

// INCLUDE MODULE CLASSES
#include "Vtb_ahblite___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_ahblite__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_ahblite* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_ahblite___024root          TOP;

    // COVERAGE
    uint32_t __Vcoverage[3163];

    // CONSTRUCTORS
    Vtb_ahblite__Syms(VerilatedContext* contextp, const char* namep, Vtb_ahblite* modelp);
    ~Vtb_ahblite__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
