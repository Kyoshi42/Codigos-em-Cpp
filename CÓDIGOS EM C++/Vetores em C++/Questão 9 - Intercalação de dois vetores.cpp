#include <iostream>
using namespace std;

int main() {
    int vetor1[5], vetor2[5], intercalado[10];

    cout << "Digite 5 numeros para o primeiro vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> vetor1[i];
    }
    cout << "Digite 5 numeros para o segundo vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> vetor2[i];
    }
    for (int i = 0; i < 5; i++) {
        intercalado[i * 2] = vetor1[i];
        intercalado[i * 2 + 1] = vetor2[i];
    }
    cout << "Vetor intercalado:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << intercalado[i] << " ";
    }
    cout << endl;
    return 0;
}