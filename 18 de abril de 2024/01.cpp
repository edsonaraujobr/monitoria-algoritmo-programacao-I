#include <iostream>
using namespace std;

/*
Fa�a um programa que receba dois n�meros inteiros, m e n, e mostre os n�meros inteiros
que est�o no intervalo compreendido por eles.
Por exemplo, para m = 5 e n = 11, o programa deve mostrar: 6 7 8 9 10*/

int main () {
    setlocale(LC_ALL,"portuguese");
    int m, n;

    cout << "Digite o primeiro n�mero: ";
    cin >> m;
    cout << "\nDigite o segundo n�mero: ";
    cin >> n;

    for(m = m + 1; m < n; m++) {
        cout << m << endl;
    }

}
