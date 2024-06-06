#include <iostream>
using namespace std;


/*
(4) Escreva um programa que leia 20 números inteiros e os armazene em
um vetor. Em seguida,

(a) calcule e imprima a média desses valores.
(b) imprima os valores negativos.
(c) conte quantas vezes o número 5 é encontrado no vetor e imprima
essa quantidade.
(d) imprima cada posição no vetor em que o número 10 é
encontrado.
*/

int main () {
    setlocale(LC_ALL,"portuguese");

    int tamanho;
    cout << "Digite o tamanho do seu array: " << endl;
    cin >> tamanho;

    const int tamanhoArray = tamanho;
    int array[tamanhoArray];
    int somador = 0;
    int contadorNumeroCinco = 0;

    cout << "Digite "<< tamanhoArray << " números: " << endl;;
    for (int i = 0; i < tamanhoArray; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < tamanhoArray; i++) {
        somador += array[i];
        if (array[i] < 0) {
            cout << "Você digitou o valor: " << array[i] << " e ele é negativo" << endl;
        } else if (array[i] == 5) {
            ++contadorNumeroCinco;
        } else if(array[i] == 10) {
            cout << "A posição em que o número 10 foi encontrado é: " << i << endl;
        }
    }
    cout << "A média é: " << somador/tamanhoArray << endl;
    cout << "O número 5 foi encontrado: " << contadorNumeroCinco << " vezes" << endl;

}
