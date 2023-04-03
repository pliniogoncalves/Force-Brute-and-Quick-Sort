//
// Created by plinio on 03/04/23.
//

#include <iostream>
#include "recebe_array.hpp"
#include "Quick Sort/quicksort.hpp"
#include "Brute Force/bruteforce.hpp"
#include "imprime_array.hpp"
using namespace std;


/* Função principal. */
int main() {

    char opcao;
    cout << "Escolha Quick Sort(Q) ou Brute Force(B):" << endl;
    cin >> opcao;

    int tamanho;
    cout << "Digite o tamanho do array: ";
    cin >> tamanho;

    int arr[tamanho];

    recebe_array(arr, tamanho); // chama a função para preencher o array com os valores digitados pelo usuário

    if(opcao == 'Q'){
        quickSort(arr, 0, tamanho - 1); // chama a função Quicksort para ordenar o array
    }
    if(opcao == 'B'){
        bruteForce(arr, tamanho); // chama a função BruteForce para ordenar o array
    }

    imprime_array(arr, tamanho); // chama a função para imprimir o array ordenado
    return 0;
}