#include <iostream>
using namespace std;
int razao (float& , float& );
/*
Escreva uma fun��o que retorna a raz�o entre dois n�meros. A fun��o deve retornar, pelo
comando return, o valor 1, se a opera��o foi poss�vel; e o valor 0, se a opera��o n�o foi poss�vel
(divis�o por zero, por exemplo). O resultado da divis�o deve ser retornado por um par�metro
por refer�ncia.
Escreva um programa que chame a fun��o.
*/

int main () {
    setlocale(LC_ALL,"portuguese");
    float numero01, numero02;

    cout << "Digite dois n�meros para realizar a divis�o: ";
    cin >> numero01 >> numero02;

    int resultado = razao(numero01,numero02);

    if(resultado == 1) {
        cout << "O resultado da divis�o �: " << numero01;
    } else {
        cout << "N�o foi possivel realizar a divis�o.";
    }
}

int razao (float& a, float b) {
    if(b != 0) {
        a = a/b;
        return 1;
    }
    return 0;
}
