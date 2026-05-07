#include <stdio.h>

unsigned char Data_memory[64000]; 
typedef struct {
    unsigned int pc; 
    unsigned int regs[16]; 
} CPU;

void iniciar_cpu(CPU *c) {
    c->pc = 0; 
    for(int i = 0; i < 16; i++){
        c->regs[i] = 0;
    }
}

void procesador_run(CPU *c) {
    int prendido = 1;
    while(prendido && c->pc < 16384) {
        unsigned int instruccion = program_memory[c->pc];
        c->pc++; // Avanzo el PC
    }
}
