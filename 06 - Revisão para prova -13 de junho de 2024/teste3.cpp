#include <iostream>
using namespace std;
int razaoDoisNumeros(double &, double);
/*
Escreva uma fun��o que retorna a raz�o entre dois n�meros. A fun��o deve retornar, pelo
comando return, o valor 1, se a opera��o foi poss�vel; e o valor 0, se a opera��o n�o foi poss�vel
(divis�o por zero, por exemplo). O resultado da divis�o deve ser retornado por um par�metro
por refer�ncia.
Escreva um programa que chame a fun��o. */

int main () {
    setlocale(LC_ALL,"portuguese");
    double n1,n2;
    cout << "Digite dois n�meros: " << endl;
    cin >> n1 >> n2;
    if(razaoDoisNumeros(n1,n2) == 1) {
        cout << "N�o foi poss�vel realizar a divis�o.";
    } else {
        cout << "Foi poss�vel realizar a divis�o, e o resultado �: " << endl;
        cout << n1;
    }

}

int razaoDoisNumeros(double &numero01, double numero02) {
    if (numero02 == 0) {
        return 1;
    }
    numero01 = numero01/numero02;
    return 0;
}


