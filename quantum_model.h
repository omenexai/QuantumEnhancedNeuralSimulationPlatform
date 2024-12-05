#ifndef QUANTUM_MODEL_H
#define QUANTUM_MODEL_H

// Include necessary standard libraries
#include <complex.h>

// Quantum model function prototypes
void initialize_quantum_state(double *initial_state);
void apply_quantum_gate(double *quantum_state, int gate_type);
void measure_quantum_state(double *quantum_state, double *measurement_result);

#endif // QUANTUM_MODEL_H
