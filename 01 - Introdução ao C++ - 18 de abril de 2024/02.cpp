#include <iostream>

using namespace std;


/*
Escreva um programa que calcule a média das idades dos alunos de uma escola. Considere
que o número de alunos não é conhecido a priori. Então o seu algoritmo deve ler todas as
idades até que um valor negativo seja fornecido. */

int main () {

    setlocale(LC_ALL,"portuguese");

    int nota;
    int contador = 0;
    int soma = 0;

    cout << "Digite a primeira nota: ";
    cin >> nota;
    while(nota >= 0) {
        soma = soma + nota;
        ++contador;

        cout << "Digite a nota: ";
        cin >> nota;
    }
    if(contador > 0)
        cout << "A média é: " << soma/contador << endl;



}
