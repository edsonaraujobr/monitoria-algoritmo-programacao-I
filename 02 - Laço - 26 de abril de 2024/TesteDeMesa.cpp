#include <iostream>

using namespace std;

/* Criar um programa, que calcule a media de idade dos alunos, a quantidade de alunos é desconhecido, e calcule quantos alunos
possui mais de 18 anos */
int main () {
    setlocale (LC_ALL,"portuguese");

    int idade;
    int contadorGeral = 0;
    int acumulador = 0;
    int contadorMais18 = 0;
    float media;

    do {
        cout << "Digite a idade do aluno: (Digite 0 para encerrar)";
        cin >> idade;
        if (idade > 18) {
            ++contadorMais18;
        }
        acumulador += idade;
        ++contadorGeral;

    } while ( idade > 0);

    if(contadorGeral > 1) {
        media = acumulador/(contadorGeral-1);
        cout << "A média é: " << media << endl;
        cout << "A quantidade de alunos maiores que 18 anos são: " << contadorMais18 << " alunos" << endl;
    }

}
