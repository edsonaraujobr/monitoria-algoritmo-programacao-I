#include <iostream>

using namespace std;

int main () {
    setlocale(LC_ALL,"portuguese");

    int valor = 12;

    if (valor == 10) {
        cout << "O valor é igual a 10";
    } else {
        cout << "O valor não é igual a 10";
    }

    switch(valor) {
        case 10:
            cout << "É 10";
            break;
        case 11:
            cout << "É 11";
            break;
        default:
            cout << "Não sei o número";
    }



}
