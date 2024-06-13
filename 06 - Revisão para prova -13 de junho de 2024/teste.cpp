#include <iostream>
using namespace std;

/*
Escreva um programa que solicite 2 n�meros inteiros, 2 reais e 2 caracteres e armazene-os nas
vari�veis i1, i2, r1, r2, c1 e c2, respectivamente. Com ajuda da fun��o, troque os valores das
vari�veis aos pares, isto �, troque i2 com i2; r1 com r2 e c1 com c2. O programa deve imprimir os
valores das vari�veis antes e depois da chamada correspondente da fun��o. */

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

    cout << "Digite dois n�meros inteiros: ";
    cin >> int01 >> int02;

    cout << "Digite dois n�meros reais: ";
    cin >> real01 >> real02;

    cout << "Digite dois caracteres: ";
    cin >> char01 >> char02;

    cout << "Os n�meros inteiros antes da fun��o: " << endl;
    cout << "Numero 01: " << int01 << " e n�mero 02: " << int02;
    trocarValores(int01,int02);
    cout << endl << "\nOs n�meros inteiros depois da fun��o: " << endl;
    cout << "Numero 01: " << int01 << " e n�mero 02: " << int02 << endl;

    cout << "\nOs n�meros reais antes da fun��o: " << endl;
    cout << "Numero 01: " << real01 << " e n�mero 02: " << real02;
    trocarValores(real01,real02);
    cout << endl << "\nOs n�meros reais depois da fun��o: " << endl;
    cout << "Numero 01: " << real01 << " e n�mero 02: " << real02 << endl;

    cout << "\nOs caracteres antes da fun��o: " << endl;
    cout << "Char 01: " << char01 << " e Char 02: " << char02;
    trocarValores(char01,char02);
    cout << endl << "\nOs caracteres depois da fun��o: " << endl;
    cout << "Char 01: " << char01 << " e Char 02: " << char02;

}


