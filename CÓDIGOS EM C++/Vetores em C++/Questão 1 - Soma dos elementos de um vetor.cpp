#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numeros[10];
    int soma = 0;

    cout << "Digite 10 numeros inteiros: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        soma += numeros[i];
    }
    cout << "A soma dos numeros e: " << soma << endl;
    return 0;
}