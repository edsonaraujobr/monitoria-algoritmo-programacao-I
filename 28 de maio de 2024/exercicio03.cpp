#include <iostream>
using namespace std;

template <class qualquerTipo>
qualquerTipo somar(qualquerTipo numero01, qualquerTipo numero02) {
    return numero01 + numero02;
}

int main() {
    setlocale(LC_ALL,"portuguese");
    cout << "está" << endl;

    int numero1, numero2;
    cout << "Digite dois numeros inteiros:  ";
    cin >> numero1 >> numero2;
    cout << somar(numero1, numero2) << endl;

    float numeroA, numeroB;
    cout << "Digite dois numeros floats: ";
    cin >> numeroA >> numeroB;
    cout << somar(numeroA, numeroB) << endl;

}

