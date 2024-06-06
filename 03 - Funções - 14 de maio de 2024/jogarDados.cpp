#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int jogaDado();

int main () {
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int soma;
    int ponto;
    int resposta;
    soma = jogaDado();
    soma += jogaDado();

    cout << "O resultado da soma dos dados �: " << soma;

    switch(soma) {
        case 7:
        case 11:
            cout << "\nVoc� venceu na primeira rodada";
            break;
        case 2:
        case 3:
        case 12:
            cout << "\nVoc� perdeu na primeira rodada";
            break;
        default:
            cout << "\nO seu ponto virou: " << soma;
            ponto = soma;
            soma = 0;
            do {
                soma = jogaDado();
                soma += jogaDado();
                cout << "\nO resultado da soma dos dados �: " << soma;
                if(soma == ponto) {
                    cout << "\nVoc� venceu!";
                    break;
                } else if(soma == 7){
                    cout << "\nVoc� perdeu!";
                    break;
                } else {
                    soma = 0;
                }
                cout << "\nVoc� deseja jogar os dados novamente? 1. SIM 2. N�O \n";
                cin >> resposta;
            } while (resposta == 1);
            if(resposta != 1) {
                cout << "Voc� desistiu!";
            }
            break;
    }
}

int jogaDado() {
    int numeroDado = 1 + rand() % 6; // gera um numero aleatorio entre 1 e 6.
    return numeroDado;
}


