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
        c->pc++;
        unsigned int paquete1_op = (instruccion >> 16) & 0xF;
        unsigned int paquete2_rd = (instruccion >> 12) & 0xF;
        unsigned int paquete3_rs = (instruccion >> 8)  & 0xF;
        unsigned int paquete4_rt = (instruccion >> 4)  & 0xF;
        unsigned int los_otros_8_bits = instruccion & 0xFF;
    }
}
