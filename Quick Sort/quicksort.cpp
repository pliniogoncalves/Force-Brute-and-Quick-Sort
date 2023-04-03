//
// Created by plinio on 03/04/23.
//

#include <iostream>
using namespace std;

// Função auxiliar para trocar valores de duas variáveis
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Função para selecionar o pivô e dividir o array em subarrays menores.
Recebe como argumentos o array a ser ordenado, os índices de início e fim
do array, e retorna o índice do pivô. */
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // escolhe o último elemento como pivô
    int i = (low - 1); // inicializa o índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // se o elemento atual for menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++; // incrementa o índice do menor elemento
            swap(&arr[i], &arr[j]); // troca o elemento atual pelo menor
        }
    }
    swap(&arr[i + 1], &arr[high]); // troca o pivô com o próximo elemento
    return (i + 1); // retorna o índice do pivô
}

/* Função principal de ordenação QuickSort.
Recebe como argumentos o array a ser ordenado, os índices de início e fim
do array. */
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // índice do pivô após o particionamento

        quickSort(arr, low, pi - 1); // ordena subarray antes do pivô
        quickSort(arr, pi + 1, high); // ordena subarray depois do pivô
    }
}

/* Função auxiliar para imprimir o array.
Recebe como argumentos o array e o tamanho do array. */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/* Função principal. */
int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1); // chama a função QuickSort para ordenar o array

    cout << "Array ordenado: \n";
    printArray(arr, n); // imprime o array ordenado

    return 0;
}