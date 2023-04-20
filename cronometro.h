#ifndef CRONOMETRO_H
#define CRONOMETRO_H

void iniciar_cronometro();
void parar_cronometro();
double tempo_decorrido();

#endif
#include <time.h>

static clock_t inicio;

void iniciar_cronometro() {
    inicio = clock();
}

void parar_cronometro() {
    inicio = 0;
}

double tempo_decorrido() {
    clock_t atual = clock();
    double tempo = (double)(atual - inicio) / CLOCKS_PER_SEC;
    return tempo;
}
