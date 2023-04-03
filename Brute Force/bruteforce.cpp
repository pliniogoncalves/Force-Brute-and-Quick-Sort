#include "bruteforce.hpp"

void bruteForce(int arr[], int tamanho){
    int i, j;
    for (i = 0; i < tamanho-1; i++) {
        // Percorre o array até o penúltimo elemento
        for(j = 0; j < tamanho-i-1; j++) {
            // Percorre o array até o elemento que precisa ser ordenado
            if(arr[j] > arr[j+1]) {
                // Troca os elementos adjacentes de lugar
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
