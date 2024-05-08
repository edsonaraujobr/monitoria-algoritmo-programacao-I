#include <iostream>
using namespace std;
void calcularFibonnaci (int);

/*
A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Faça um
programa capaz de gerar a série até o n-ésimo termo.
Por exemplo, dado n = 8, o programa deve mostrar: 1 1 2 3 5 8 21 34*/

int main () {
    setlocale(LC_ALL,"portuguese");
    int numeroSolicitado;
    cout << "Digite o número desejado: ";
    cin >> numeroSolicitado;
    calcularFibonnaci(numeroSolicitado);
    return 0;
}

void calcularFibonnaci(int numero) {
    int a = 0;
    int b = 1;
    for (int i = 0; i <= numero; i++) {
        cout << b << " ";
        int auxiliar = a;
        a = b;
        b = auxiliar + b;
    }

}
