#include <iostream>
using namespace std;
double calcularMediaAritmetica (double, double, double);
double calcularMediaPonderada (double, double, double);
double calcularMediaHarmonica (double, double, double);

/*
(35) Escreva um programa que receba 3 números e chame uma função que calcule:
(a) a média aritmética dos números dados;
(b) a média ponderada (pesos: 1, 3 e 6); e
(c) a média harmônica.

O programa principal deve mostrar os resultados. Veja a fórmula de cada média a seguir:
RESTRIÇÕES:
• Não utilize variáveis globais.
• O programa deve permanecer perguntando ao usuário se quer calcular as médias de três
valores até que ele informe que não.*/

int main() {
    setlocale(LC_ALL,"portuguese");
    int resposta;
    cout << "Você deseja calcular a média de três valores? 0. NÃO | 1. SIM ";
    cin >> resposta;
    while (resposta == 1) {
        double n1,n2,n3;
        cout << "Digite três números: " << endl;
        cin >> n1 >> n2 >> n3;

        cout <<"A média arimética é: " <<calcularMediaAritmetica(n1, n2, n3) << endl;
        cout <<"A média ponderada é: "<< calcularMediaPonderada(n1, n2, n3)<< endl;
        cout <<"A média harmônica é: "<< calcularMediaHarmonica(n1, n2, n3)<< endl;
        cout << "Você deseja calcular a média de três valores? 0. NÃO | 1. SIM ";
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
