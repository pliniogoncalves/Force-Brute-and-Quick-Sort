// Função para fazer a troca de valores entre dois elementos

#include "troca.hpp"

void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
