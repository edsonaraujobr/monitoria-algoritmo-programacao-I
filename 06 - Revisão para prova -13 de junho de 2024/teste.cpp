#include <iostream>
using namespace std;

/*
Escreva um programa que solicite 2 números inteiros, 2 reais e 2 caracteres e armazene-os nas
variáveis i1, i2, r1, r2, c1 e c2, respectivamente. Com ajuda da função, troque os valores das
variáveis aos pares, isto é, troque i2 com i2; r1 com r2 e c1 com c2. O programa deve imprimir os
valores das variáveis antes e depois da chamada correspondente da função. */

template < class Tipo>
void trocarValores(Tipo &variavel01, Tipo &variavel02) {
    Tipo auxiliar = variavel01;
    variavel01 = variavel02;
    variavel02 = auxiliar;
}

int main () {
    setlocale(LC_ALL,"portuguese");
    int int01, int02;
    float real01, real02;
    char char01, char02;

    cout << "Digite dois números inteiros: ";
    cin >> int01 >> int02;

    cout << "Digite dois números reais: ";
    cin >> real01 >> real02;

    cout << "Digite dois caracteres: ";
    cin >> char01 >> char02;

    cout << "Os números inteiros antes da função: " << endl;
    cout << "Numero 01: " << int01 << " e número 02: " << int02;
    trocarValores(int01,int02);
    cout << endl << "\nOs números inteiros depois da função: " << endl;
    cout << "Numero 01: " << int01 << " e número 02: " << int02 << endl;

    cout << "\nOs números reais antes da função: " << endl;
    cout << "Numero 01: " << real01 << " e número 02: " << real02;
    trocarValores(real01,real02);
    cout << endl << "\nOs números reais depois da função: " << endl;
    cout << "Numero 01: " << real01 << " e número 02: " << real02 << endl;

    cout << "\nOs caracteres antes da função: " << endl;
    cout << "Char 01: " << char01 << " e Char 02: " << char02;
    trocarValores(char01,char02);
    cout << endl << "\nOs caracteres depois da função: " << endl;
    cout << "Char 01: " << char01 << " e Char 02: " << char02;

}


