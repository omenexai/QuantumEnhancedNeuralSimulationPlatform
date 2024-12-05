#ifndef LEARNING_ALGORITHMS_H
#define LEARNING_ALGORITHMS_H

// Include necessary standard libraries
#include "neural_simulation.h"

// Function prototypes for learning algorithms
void apply_backpropagation(double *input_data, double *output_data);
void update_weights(double learning_rate);
double calculate_loss(double *predicted_output, double *true_output);

#endif // LEARNING_ALGORITHMS_H
