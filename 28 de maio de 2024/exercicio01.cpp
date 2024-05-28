#include <iostream>
using namespace std;
#include <ctime>;
#include <cstdlib>
int gerador();
/*
26�
    Crie um jogo onde o computador sorteia um n�mero de 0 at� 50, e voc� tenta adivinhar qual �.
    Inicialmente, o programa deve chamar a fun��o gerador para gerar o n�mero a ser adivinhado.
    Fa�a com que o programa diga quantas tentativas voc� levou para acertar. A cada vez que voc�
    chutar, ele deve dizer se voc� chutou abaixo do valor real, acima ou se acertou. Ao final, diz o
    n�mero de tentativas que voc� usou e se bateu o recorde ou n�o. Ah, ao final de cada rodada, o
    programa pergunta se voc� quer jogar novamente ou n�o, exibindo o recorde atual.
    (a) Altere a fun��o gerador de modo que o n�mero gerado esteja no intervalo [1, 50].
    (b) Altere a fun��o gerador de modo que o n�mero gerado esteja no intervalo [10, 50].
*/
int main () {
    int numeroJogadas = 0;
    int numeroDigitado;
    int numeroSorteado;
    int recorde;
    int resposta;
    bool primeiraVez = true;

    setlocale(LC_ALL,"portuguese");

    cout << "\nVoc� quer jogar? 1. Para SIM | 0. Para N�O: ";
    cin >> resposta;

    while(resposta == 1) {
        numeroSorteado = gerador();
        do {
            ++numeroJogadas;
            cout << "\nDigite o numero: ";
            cin >> numeroDigitado;

            if(numeroDigitado > numeroSorteado) {
                cout << "\nVoc� chutou acima do numero: ";
            } else if(numeroDigitado < numeroSorteado) {
                cout << "\nVoc� chutou abaixo do numero: ";
            }
        } while(numeroDigitado != numeroSorteado);

        cout << "\nVoc� acertou na tentativa: " << numeroJogadas;
        if(primeiraVez) {
            recorde = numeroJogadas;
            primeiraVez = false;
        }

        if(numeroJogadas < recorde) {
            recorde = numeroJogadas;
            cout << "\nVoc� bateu o recorde: ";
        } else if(numeroJogadas > recorde) {
            cout << "\nVoc� n�o bateu o recorde: ";
        }
        numeroJogadas = 0;

        cout << "\nVoc� quer continuar jogando? 1. Para SIM, 0. Para N�O . Seu recorde atual: " << recorde; ;
        cin >> resposta;
    }


}

int gerador() {
    srand(time(0));
    int numero = rand() % 50;
    return numero;
}
