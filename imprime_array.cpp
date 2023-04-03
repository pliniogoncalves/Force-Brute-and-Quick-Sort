// Função para imprimir o array ordenado
#include "imprime_array.hpp"

void imprime_array(int arr[], int tamanho) {
    std::cout << "Array ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}