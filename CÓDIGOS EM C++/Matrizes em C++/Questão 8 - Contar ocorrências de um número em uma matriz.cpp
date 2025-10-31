#include <iostream>
#include <iomanip>
using namespace std;

int contarOcorrencias(int matriz[4][4], int numero) {
    int cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] == numero)
                cont++;
    return cont;
}
int main() {
    int matriz[4][4];
    cout << "Digite os valores da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    int numero;
    cout << "Digite o número a ser contado: ";
    cin >> numero;
    int resultado = contarOcorrencias(matriz, numero);
    cout << "O número " << numero << " aparece " << resultado << " vezes.\n";
    return 0;
}