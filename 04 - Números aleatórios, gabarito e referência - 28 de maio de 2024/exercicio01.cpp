#include <iostream>
using namespace std;
#include <ctime>;
#include <cstdlib>
int gerador();
/*
26º
    Crie um jogo onde o computador sorteia um número de 0 até 50, e você tenta adivinhar qual é.
    Inicialmente, o programa deve chamar a função gerador para gerar o número a ser adivinhado.
    Faça com que o programa diga quantas tentativas você levou para acertar. A cada vez que você
    chutar, ele deve dizer se você chutou abaixo do valor real, acima ou se acertou. Ao final, diz o
    número de tentativas que você usou e se bateu o recorde ou não. Ah, ao final de cada rodada, o
    programa pergunta se você quer jogar novamente ou não, exibindo o recorde atual.
    (a) Altere a função gerador de modo que o número gerado esteja no intervalo [1, 50].
    (b) Altere a função gerador de modo que o número gerado esteja no intervalo [10, 50].
*/
int main () {
    int numeroJogadas = 0;
    int numeroDigitado;
    int numeroSorteado;
    int recorde;
    int resposta;
    bool primeiraVez = true;

    setlocale(LC_ALL,"portuguese");

    cout << "\nVocê quer jogar? 1. Para SIM | 0. Para NÃO: ";
    cin >> resposta;

    while(resposta == 1) {
        numeroSorteado = gerador();
        do {
            ++numeroJogadas;
            cout << "\nDigite o numero: ";
            cin >> numeroDigitado;

            if(numeroDigitado > numeroSorteado) {
                cout << "\nVocê chutou acima do numero: ";
            } else if(numeroDigitado < numeroSorteado) {
                cout << "\nVocê chutou abaixo do numero: ";
            }
        } while(numeroDigitado != numeroSorteado);

        cout << "\nVocê acertou na tentativa: " << numeroJogadas;
        if(primeiraVez) {
            recorde = numeroJogadas;
            primeiraVez = false;
        }

        if(numeroJogadas < recorde) {
            recorde = numeroJogadas;
            cout << "\nVocê bateu o recorde: ";
        } else if(numeroJogadas > recorde) {
            cout << "\nVocê não bateu o recorde: ";
        }
        numeroJogadas = 0;

        cout << "\nVocê quer continuar jogando? 1. Para SIM, 0. Para NÃO . Seu recorde atual: " << recorde; ;
        cin >> resposta;
    }


}

int gerador() {
    srand(time(0));
    int numero = rand() % 50;
    return numero;
}
