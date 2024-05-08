#include <iostream>
using namespace std;

/*
Faça um programa que receba dois números inteiros, m e n, e mostre os números inteiros
que estão no intervalo compreendido por eles.
Por exemplo, para m = 5 e n = 11, o programa deve mostrar: 6 7 8 9 10*/

int main () {
    setlocale(LC_ALL,"portuguese");
    int m, n;

    cout << "Digite o primeiro número: ";
    cin >> m;
    cout << "\nDigite o segundo número: ";
    cin >> n;

    for(m = m + 1; m < n; m++) {
        cout << m << endl;
    }

}
