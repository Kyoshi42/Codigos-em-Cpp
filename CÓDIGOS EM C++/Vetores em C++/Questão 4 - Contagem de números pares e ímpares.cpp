#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numeros[20], i, n = 20;
    int pares = 0, impares = 0;
    cout << "Digite 20 numeros inteiros: ";
    for (i = 0; i < n; i++) {
        cin >> numeros[i];
        if (numeros[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;
    return 0;
}