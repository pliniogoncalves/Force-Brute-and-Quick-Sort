// Função que seleciona o último elemento como pivô e separa os menores à esquerda e maiores à direita

#include "particao.hpp"

int particao(int arr[], int low, int high) {
    int pivot = arr[high]; // seleciona o último elemento como pivô
    int i = (low - 1); // índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual é menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++; // incrementa o índice do menor elemento
            troca(&arr[i], &arr[j]);
        }
    }
    troca(&arr[i + 1], &arr[high]);
    return (i + 1);
}