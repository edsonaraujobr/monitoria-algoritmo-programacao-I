#include <iostream>
using namespace std;
void calcularFibonnaci (int);

/*
A s�rie de Fibonacci � formada pela sequ�ncia 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Fa�a um
programa capaz de gerar a s�rie at� o n-�simo termo.
Por exemplo, dado n = 8, o programa deve mostrar: 1 1 2 3 5 8 21 34*/

int main () {
    setlocale(LC_ALL,"portuguese");
    int numeroSolicitado;
    cout << "Digite o n�mero desejado: ";
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
