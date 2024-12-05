#ifndef SIMULATION_OUTPUT_H
#define SIMULATION_OUTPUT_H

// Function prototypes for managing simulation outputs
void write_simulation_output(const char *filename, double *simulation_data);
void print_simulation_summary();
void save_output_to_file(const char *filename, double *data);

#endif // SIMULATION_OUTPUT_H
