#include <iostream>

using namespace std;

int main () {
    setlocale(LC_ALL,"portuguese");

    int valor = 12;

    if (valor == 10) {
        cout << "O valor � igual a 10";
    } else {
        cout << "O valor n�o � igual a 10";
    }

    switch(valor) {
        case 10:
            cout << "� 10";
            break;
        case 11:
            cout << "� 11";
            break;
        default:
            cout << "N�o sei o n�mero";
    }



}
