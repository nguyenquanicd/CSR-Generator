// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_csr_golden__pch.h"

//============================================================
// Constructors

Vtb_csr_golden::Vtb_csr_golden(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_csr_golden__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_csr_golden::Vtb_csr_golden(const char* _vcname__)
    : Vtb_csr_golden(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_csr_golden::~Vtb_csr_golden() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_csr_golden___024root___eval_debug_assertions(Vtb_csr_golden___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___eval_static(Vtb_csr_golden___024root* vlSelf);
void Vtb_csr_golden___024root___eval_initial(Vtb_csr_golden___024root* vlSelf);
VL_ATTR_COLD bool Vtb_csr_golden___024root___eval_stl(Vtb_csr_golden___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb_csr_golden___024root___eval_sample(Vtb_csr_golden___024root* vlSelf);
bool Vtb_csr_golden___024root___eval_ico(Vtb_csr_golden___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb_csr_golden___024root___eval_act(Vtb_csr_golden___024root* vlSelf);
bool Vtb_csr_golden___024root___eval_inact(Vtb_csr_golden___024root* vlSelf);
bool Vtb_csr_golden___024root___eval_nba(Vtb_csr_golden___024root* vlSelf);
bool Vtb_csr_golden___024root___eval_obs(Vtb_csr_golden___024root* vlSelf);
bool Vtb_csr_golden___024root___eval_react(Vtb_csr_golden___024root* vlSelf);
void Vtb_csr_golden___024root___eval_postponed(Vtb_csr_golden___024root* vlSelf);
VL_ATTR_COLD void Vtb_csr_golden___024root___eval_final(Vtb_csr_golden___024root* vlSelf);
VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__stl(Vtb_csr_golden___024root* vlSelf);
VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__ico(Vtb_csr_golden___024root* vlSelf);
VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__act(Vtb_csr_golden___024root* vlSelf);
VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__nba(Vtb_csr_golden___024root* vlSelf);
VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__obs(Vtb_csr_golden___024root* vlSelf);
VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__react(Vtb_csr_golden___024root* vlSelf);

void Vtb_csr_golden::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_csr_golden::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_csr_golden::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_csr_golden___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_csr_golden::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb_csr_golden::evalStatic() {
    Vtb_csr_golden___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb_csr_golden::evalInitial() {
    Vtb_csr_golden___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb_csr_golden::evalStl(bool firstIteration) {
    return Vtb_csr_golden___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb_csr_golden::evalSample() {
    Vtb_csr_golden___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb_csr_golden::evalIco(bool firstIteration) {
    return Vtb_csr_golden___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb_csr_golden::evalAct() {
    return Vtb_csr_golden___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb_csr_golden::evalInact() {
    return Vtb_csr_golden___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb_csr_golden::evalNba() {
    return Vtb_csr_golden___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb_csr_golden::evalObs() {
    return Vtb_csr_golden___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb_csr_golden::evalReact() {
    return Vtb_csr_golden___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb_csr_golden::evalPostponed() {
    Vtb_csr_golden___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb_csr_golden::evalFinal() {
    Vtb_csr_golden___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_csr_golden::dumpTriggersStl() {
    Vtb_csr_golden___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_csr_golden::dumpTriggersIco() {
    Vtb_csr_golden___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_csr_golden::dumpTriggersAct() {
    Vtb_csr_golden___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_csr_golden::dumpTriggersNba() {
    Vtb_csr_golden___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_csr_golden::dumpTriggersObs() {
    Vtb_csr_golden___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_csr_golden::dumpTriggersReact() {
    Vtb_csr_golden___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vtb_csr_golden::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_csr_golden::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_csr_golden::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_csr_golden::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_csr_golden::hierName() const { return vlSymsp->name(); }
const char* Vtb_csr_golden::modelName() const { return "Vtb_csr_golden"; }
unsigned Vtb_csr_golden::threads() const { return 1; }
void Vtb_csr_golden::prepareClone() const { contextp()->prepareClone(); }
void Vtb_csr_golden::atClone() const {
    contextp()->threadPoolpOnClone();
}
