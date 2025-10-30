#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int vetor[10] = {0, 2, 3, 5, 6, 7, 9, 11, 12, 14};
    int numero, encontrado = 0;

    cout << "Digite o numero a ser buscado: ";
    cin >> numero;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado)
        cout << "Numero encontrado no vetor.\n";
    else
        cout << "Numero nao esta no vetor.\n";

    return 0;
}