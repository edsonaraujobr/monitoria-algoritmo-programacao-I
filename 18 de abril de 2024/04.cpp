#include <iostream>
using namespace std;

/*
Dado um n�mero inteiro positivo n, calcular a soma dos n primeiros n�meros inteiros positivos.
*/

//5 = 0 + 1 + 2 + 3 + 4 + 5 = 15

int main () {
    setlocale (LC_ALL,"portuguese");
    int numeroSolicitado;
    int somador = 0;

    cout << "Digite o n�mero solicitado: ";
    cin >> numeroSolicitado;

    for(int i = 0; i <= numeroSolicitado; i++) {
        somador = somador + i;
    }

    cout << "A soma �: " << somador;


}
