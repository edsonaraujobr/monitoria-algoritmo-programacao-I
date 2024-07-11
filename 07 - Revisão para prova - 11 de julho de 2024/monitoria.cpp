#include <iostream>
void bubbleSort(int [], int);
void buscarBinaria(int [], int , int );
using namespace std;

/*
Escreva um programa que leia 21 valores inteiros, sendo que os primeiros 20 valores devem ser
armazenados no vetor V. Em seguida, o programa deve determinar se o 21o valor lido está no vetor, isto
é, se pelo menos um dos elementos do vetor é igual ao 21o valor lido. Se estiver, o programa deve
imprimir a posição (o índice) em que o valor foi encontrado. Se não estiver, deve imprimir a mensagem:
“O valor chave não foi encontrado”.
*/

int main() {
    setlocale(LC_ALL,"portuguese");
    const int tamanho = 5;
    int array[tamanho];
    int chave;

    for(int i = 0; i < tamanho; i++) {
        cin >> array[i];
    }
    cin >> chave;
    bubbleSort(array, tamanho);
    buscarBinaria(array, tamanho, chave);

}

void bubbleSort(int array [] , int tamanho) {
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if(array[j] > array[j + 1]) {
                int auxiliar = array[j+1];
                array[j+1] = array[j];
                array[j] = auxiliar;
            }
        }
    }
}

void buscarBinaria(int array [] , int tamanho, int chave) {
    int inicio = 0;
    int meio;
    int fim = tamanho - 1;
    bool encontrou = false;

    while(inicio <= fim) {
        meio = (inicio + fim) / 2;
        if(chave == array[meio]) {
            encontrou = true;
            cout << "A posição é: " << meio;
            break;
        } else {
            if(array[meio] > chave) {
                fim = meio - 1;
            } else if(array[meio] < chave) {
                inicio = meio + 1;
            }
        }
    }

    if(!encontrou) {
        cout << "O valor chave não foi encontrado";
    }
}



