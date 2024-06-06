#include <iostream>
int calcularMultiplicacaoRecursivamente(int, int);
using namespace std;

/*
Fa�a uma fun��o recursiva que realize a
multiplica��o entre dois valores inteiros positivos
sem utilizar o operador *. Escreva um programa que use a fun��o.
*/

int main () {
    setlocale(LC_ALL,"portuguese");
    int numero01, numero02;
    cout << "Digite dois numeros: ";
    cin >> numero01 >> numero02;
    cout << "A multiplica��o entre" << numero01 << " e " << numero02 << " �: " << calcularMultiplicacaoRecursivamente(numero01,numero02);

}

int calcularMultiplicacaoRecursivamente(int num01, int num02) {
    if (num02 == 1) {
        return num01;
    } else {
        return num01 + calcularMultiplicacaoRecursivamente(num01,num02-1);
    }
}
