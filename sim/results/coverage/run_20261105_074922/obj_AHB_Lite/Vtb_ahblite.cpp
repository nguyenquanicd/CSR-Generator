// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_ahblite__pch.h"

//============================================================
// Constructors

Vtb_ahblite::Vtb_ahblite(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_ahblite__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_ahblite::Vtb_ahblite(const char* _vcname__)
    : Vtb_ahblite(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_ahblite::~Vtb_ahblite() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_ahblite___024root___eval_debug_assertions(Vtb_ahblite___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___eval_static(Vtb_ahblite___024root* vlSelf);
void Vtb_ahblite___024root___eval_initial(Vtb_ahblite___024root* vlSelf);
VL_ATTR_COLD bool Vtb_ahblite___024root___eval_stl(Vtb_ahblite___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb_ahblite___024root___eval_sample(Vtb_ahblite___024root* vlSelf);
bool Vtb_ahblite___024root___eval_ico(Vtb_ahblite___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb_ahblite___024root___eval_act(Vtb_ahblite___024root* vlSelf);
bool Vtb_ahblite___024root___eval_inact(Vtb_ahblite___024root* vlSelf);
bool Vtb_ahblite___024root___eval_nba(Vtb_ahblite___024root* vlSelf);
bool Vtb_ahblite___024root___eval_obs(Vtb_ahblite___024root* vlSelf);
bool Vtb_ahblite___024root___eval_react(Vtb_ahblite___024root* vlSelf);
void Vtb_ahblite___024root___eval_postponed(Vtb_ahblite___024root* vlSelf);
VL_ATTR_COLD void Vtb_ahblite___024root___eval_final(Vtb_ahblite___024root* vlSelf);
VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__stl(Vtb_ahblite___024root* vlSelf);
VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__ico(Vtb_ahblite___024root* vlSelf);
VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__act(Vtb_ahblite___024root* vlSelf);
VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__nba(Vtb_ahblite___024root* vlSelf);
VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__obs(Vtb_ahblite___024root* vlSelf);
VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__react(Vtb_ahblite___024root* vlSelf);

void Vtb_ahblite::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_ahblite::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_ahblite::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_ahblite___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_ahblite::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb_ahblite::evalStatic() {
    Vtb_ahblite___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb_ahblite::evalInitial() {
    Vtb_ahblite___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb_ahblite::evalStl(bool firstIteration) {
    return Vtb_ahblite___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb_ahblite::evalSample() {
    Vtb_ahblite___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb_ahblite::evalIco(bool firstIteration) {
    return Vtb_ahblite___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb_ahblite::evalAct() {
    return Vtb_ahblite___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb_ahblite::evalInact() {
    return Vtb_ahblite___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb_ahblite::evalNba() {
    return Vtb_ahblite___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb_ahblite::evalObs() {
    return Vtb_ahblite___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb_ahblite::evalReact() {
    return Vtb_ahblite___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb_ahblite::evalPostponed() {
    Vtb_ahblite___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb_ahblite::evalFinal() {
    Vtb_ahblite___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ahblite::dumpTriggersStl() {
    Vtb_ahblite___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ahblite::dumpTriggersIco() {
    Vtb_ahblite___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ahblite::dumpTriggersAct() {
    Vtb_ahblite___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ahblite::dumpTriggersNba() {
    Vtb_ahblite___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ahblite::dumpTriggersObs() {
    Vtb_ahblite___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ahblite::dumpTriggersReact() {
    Vtb_ahblite___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vtb_ahblite::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_ahblite::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_ahblite::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_ahblite::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_ahblite::hierName() const { return vlSymsp->name(); }
const char* Vtb_ahblite::modelName() const { return "Vtb_ahblite"; }
unsigned Vtb_ahblite::threads() const { return 1; }
void Vtb_ahblite::prepareClone() const { contextp()->prepareClone(); }
void Vtb_ahblite::atClone() const {
    contextp()->threadPoolpOnClone();
}
