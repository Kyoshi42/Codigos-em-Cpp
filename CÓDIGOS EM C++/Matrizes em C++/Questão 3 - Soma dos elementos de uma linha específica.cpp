#include <iostream>
#include <iomanip>
using namespace std;

int somaLinha(int matriz[5][5], int linha) {
    int soma = 0;
    for (int j = 0; j < 5; j++)
        soma += matriz[linha][j];
    return soma;
}
int main() {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int linha;
    cout << "Digite o numero da linha (0 a 4): ";
    cin >> linha;

    if (linha >= 0 && linha < 5) {
        int resultado = somaLinha(matriz, linha);
        cout << "Soma dos elementos da linha " << linha << ": " << resultado << endl;
    } 
    return 0;
}