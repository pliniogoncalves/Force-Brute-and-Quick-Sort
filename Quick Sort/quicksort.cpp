// Função de ordenação Quicksort

#include "quicksort.hpp"

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        // pi é o índice de partição, arr[p] agora está no lugar certo
        int pi = particao(arr, low, high);

        // Separa os elementos recursivamente antes e depois da partição
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



