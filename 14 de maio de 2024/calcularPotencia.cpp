#include <iostream>
using namespace std;
int calcularPotencia (int, int);

int main () {
    setlocale(LC_ALL,"portuguese");
    int numero, potencia;

    cout << "Digite um n�mero: ";
    cin >> numero;

    cout << "\nDigite a pot�ncia: ";
    cin >> potencia;

    int resultado;

    resultado = calcularPotencia(numero,potencia);

    cout << "O resultado �: " << resultado;

}

int calcularPotencia (int numero, int potencia) {

    int resultado = 1;

    for(int i = 0; i < potencia; i++) {
        resultado *= numero;
    }

    return resultado;
}



