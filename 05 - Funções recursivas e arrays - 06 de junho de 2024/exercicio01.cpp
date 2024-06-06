#include <iostream>
int calcularPotencia (int , int );
using namespace std;

/*
Escreva uma função recursiva de nome potencia( ),
que receba dois inteiros positivos, i e j, e retorne i
elevado a j. Escreva um programa que use a função.
*/

int main () {

    setlocale(LC_ALL,"portuguese");
    int numero01, numero02;
    cout << "Digite dois numeros: ";
    cin >> numero01 >> numero02;
    cout << numero01 << " elevado a " << numero02 << " é: " << calcularPotencia(numero01, numero02);

}

int calcularPotencia (int i, int j) {
    if(j == 0) {
        return 1;
    } else if(j == 1) {
        return i;
    } else {
        return i * calcularPotencia(i,j-1);
    }
}
