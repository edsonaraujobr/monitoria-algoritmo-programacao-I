#include <iostream>
using namespace std;
void buscarLinear(int [], int , int&);

/* Buscar todas as posições no qual a chave esta naquela array com busca linear */

int main() {
    setlocale(LC_ALL,"portuguese");
    const int tamanho = 5;
    int array[tamanho];
    int chave;

    for(int i = 0; i < tamanho; i++) {
        cin >> array[i];
    }
    cout << "Digite a chave: ";
    cin >> chave;
    buscarLinear(array, tamanho, chave);
    for(int i = 0; i < chave; i++) {
        cout << "Posição: " << array[i] << endl;
    }

}

void buscarLinear(int array[], int tamanho, int &chave) {
    int arrayAuxiliar[tamanho];
    int contador = 0;

    for (int i = 0; i < tamanho; i++) {
        if(array[i] == chave) {
            arrayAuxiliar[contador] = i;
            ++contador;
        }
    }
    for(int i = 0; i < contador; i++) {
        array[i] = arrayAuxiliar[i];
    }
    chave = contador;
}






