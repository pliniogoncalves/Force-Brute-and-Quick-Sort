// Função que recebe o tamanho do array e preenche o array com valores digitados pelo usuário

#include "recebe_array.hpp"

void recebe_array(int arr[], int tamanho) {
    std::cout << "Digite os valores do array: " << std::endl;
    for (int i = 0; i < tamanho; i++) {
        std::cin >> arr[i];
    }
}