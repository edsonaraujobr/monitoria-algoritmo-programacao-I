#include <iostream>
using namespace std;
int razao (float& , float& );
/*
Escreva uma função que retorna a razão entre dois números. A função deve retornar, pelo
comando return, o valor 1, se a operação foi possível; e o valor 0, se a operação não foi possível
(divisão por zero, por exemplo). O resultado da divisão deve ser retornado por um parâmetro
por referência.
Escreva um programa que chame a função.
*/

int main () {
    setlocale(LC_ALL,"portuguese");
    float numero01, numero02;

    cout << "Digite dois números para realizar a divisão: ";
    cin >> numero01 >> numero02;

    int resultado = razao(numero01,numero02);

    if(resultado == 1) {
        cout << "O resultado da divisão é: " << numero01;
    } else {
        cout << "Não foi possivel realizar a divisão.";
    }
}

int razao (float& a, float b) {
    if(b != 0) {
        a = a/b;
        return 1;
    }
    return 0;
}
