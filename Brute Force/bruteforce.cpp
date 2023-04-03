#include <iostream>
using namespace std;

int main()
{
    int n, menor; // declaração das variáveis "n" para o tamanho da lista e "menor" para armazenar o menor número encontrado
    cout << "Digite o tamanho da lista: ";
    cin >> n;
    int lista[n]; // declaração da lista com o tamanho fornecido pelo usuário
    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << i+1 << "o elemento: "; // solicita ao usuário para digitar o elemento i+1 da lista
        cin >> lista[i]; // lê o elemento digitado e armazena na lista
    }
    menor = lista[0]; // inicializa a variável "menor" com o primeiro elemento da lista
    for (int i = 1; i < n; i++)
    {
        if (lista[i] < menor) // verifica se o elemento atual é menor do que o menor atual
        {
            menor = lista[i]; // atualiza a variável "menor" com o elemento atual, se necessário
        }
    }
    cout << "O menor número é: " << menor << endl; // exibe o menor número encontrado na lista
    return 0;
}