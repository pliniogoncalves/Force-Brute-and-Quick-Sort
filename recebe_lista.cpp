#include "recebe_lista.hpp"

int recebe_lista(int *n, int **lista){

    std::cout << "Digite o tamanho da lista: ";
    std::cin >> *n;
    *lista = new int [*n];// declaração da lista com o tamanho fornecido pelo usuário

    return *lista[*n];
}
