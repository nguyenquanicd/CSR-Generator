// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_CSR_GOLDEN__SYMS_H_
#define VERILATED_VTB_CSR_GOLDEN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_csr_golden.h"

// INCLUDE MODULE CLASSES
#include "Vtb_csr_golden___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_csr_golden__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_csr_golden* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_csr_golden___024root       TOP;

    // COVERAGE
    uint32_t __Vcoverage[3333];

    // CONSTRUCTORS
    Vtb_csr_golden__Syms(VerilatedContext* contextp, const char* namep, Vtb_csr_golden* modelp);
    ~Vtb_csr_golden__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
