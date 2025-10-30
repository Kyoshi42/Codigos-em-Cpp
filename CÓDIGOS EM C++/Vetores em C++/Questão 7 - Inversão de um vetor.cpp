#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int vetor[10], inverso[10];

    cout << "Digite 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    for (int i = 0; i < 10; i++) {
        inverso[i] = vetor[9 - i];
    }
    cout << "Vetor invertido:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << inverso[i] << " ";
    }
    cout << endl;
    return 0;
}