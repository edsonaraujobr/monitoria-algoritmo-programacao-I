#include <iostream>
using namespace std;


/*
(4) Escreva um programa que leia 20 n�meros inteiros e os armazene em
um vetor. Em seguida,

(a) calcule e imprima a m�dia desses valores.
(b) imprima os valores negativos.
(c) conte quantas vezes o n�mero 5 � encontrado no vetor e imprima
essa quantidade.
(d) imprima cada posi��o no vetor em que o n�mero 10 �
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

    cout << "Digite "<< tamanhoArray << " n�meros: " << endl;;
    for (int i = 0; i < tamanhoArray; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < tamanhoArray; i++) {
        somador += array[i];
        if (array[i] < 0) {
            cout << "Voc� digitou o valor: " << array[i] << " e ele � negativo" << endl;
        } else if (array[i] == 5) {
            ++contadorNumeroCinco;
        } else if(array[i] == 10) {
            cout << "A posi��o em que o n�mero 10 foi encontrado �: " << i << endl;
        }
    }
    cout << "A m�dia �: " << somador/tamanhoArray << endl;
    cout << "O n�mero 5 foi encontrado: " << contadorNumeroCinco << " vezes" << endl;

}
