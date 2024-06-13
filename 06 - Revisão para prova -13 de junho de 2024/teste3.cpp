#include <iostream>
using namespace std;
int razaoDoisNumeros(double &, double);
/*
Escreva uma função que retorna a razão entre dois números. A função deve retornar, pelo
comando return, o valor 1, se a operação foi possível; e o valor 0, se a operação não foi possível
(divisão por zero, por exemplo). O resultado da divisão deve ser retornado por um parâmetro
por referência.
Escreva um programa que chame a função. */

int main () {
    setlocale(LC_ALL,"portuguese");
    double n1,n2;
    cout << "Digite dois números: " << endl;
    cin >> n1 >> n2;
    if(razaoDoisNumeros(n1,n2) == 1) {
        cout << "Não foi possível realizar a divisão.";
    } else {
        cout << "Foi possível realizar a divisão, e o resultado é: " << endl;
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


