#ifndef HYBRID_SYSTEM_H
#define HYBRID_SYSTEM_H

// Include necessary standard libraries
#include "quantum_model.h"
#include "neural_simulation.h"

// Function prototypes for hybrid system
void initialize_hybrid_system();
void run_hybrid_simulation();
void update_hybrid_parameters(double *params);

#endif // HYBRID_SYSTEM_H
