CC = gcc
CFLAGS = -O2 -Wall -std=c11 -Iinclude

# Target executable
all: QuantumEnhancedNeuralSimulationPlatform

# Source files for the project
QuantumEnhancedNeuralSimulationPlatform: src/neural_simulation.c src/quantum_model.c src/hybrid_system.c src/learning_algorithms.c src/network_parameters.c src/multi_scale_model.c src/data_processing.c src/reinforcement_learning.c src/simulation_output.c
	$(CC) $(CFLAGS) -o $@ $^

# Clean the build
clean:
	rm -f QuantumEnhancedNeuralSimulationPlatform
