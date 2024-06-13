#include <iostream>
using namespace std;
double calcularMediaAritmetica (double, double, double);
double calcularMediaPonderada (double, double, double);
double calcularMediaHarmonica (double, double, double);

/*
(35) Escreva um programa que receba 3 n�meros e chame uma fun��o que calcule:
(a) a m�dia aritm�tica dos n�meros dados;
(b) a m�dia ponderada (pesos: 1, 3 e 6); e
(c) a m�dia harm�nica.

O programa principal deve mostrar os resultados. Veja a f�rmula de cada m�dia a seguir:
RESTRI��ES:
� N�o utilize vari�veis globais.
� O programa deve permanecer perguntando ao usu�rio se quer calcular as m�dias de tr�s
valores at� que ele informe que n�o.*/

int main() {
    setlocale(LC_ALL,"portuguese");
    int resposta;
    cout << "Voc� deseja calcular a m�dia de tr�s valores? 0. N�O | 1. SIM ";
    cin >> resposta;
    while (resposta == 1) {
        double n1,n2,n3;
        cout << "Digite tr�s n�meros: " << endl;
        cin >> n1 >> n2 >> n3;

        cout <<"A m�dia arim�tica �: " <<calcularMediaAritmetica(n1, n2, n3) << endl;
        cout <<"A m�dia ponderada �: "<< calcularMediaPonderada(n1, n2, n3)<< endl;
        cout <<"A m�dia harm�nica �: "<< calcularMediaHarmonica(n1, n2, n3)<< endl;
        cout << "Voc� deseja calcular a m�dia de tr�s valores? 0. N�O | 1. SIM ";
        cin >> resposta;
    }
}

double calcularMediaAritmetica(double numero01, double numero02, double numero03) {
    return (numero01 + numero02+ numero03) / 3;
}

double calcularMediaPonderada(double numero01, double numero02, double numero03) {
    return ((numero01*1) + (numero02*3)+ (numero03*6)) / 10;
}

double calcularMediaHarmonica(double numero01, double numero02, double numero03) {
    return 3/((1/numero01)+(1/numero02)+(1/numero03));
}
