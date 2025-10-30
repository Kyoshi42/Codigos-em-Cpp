#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numeros[15], i;
    int maior, menor;

    cout << "Digite 15 numeros inteiros: ";
    for (i = 0; i < 15; i++) {
        cin >> numeros[i];

        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if (numeros[i] > maior)
                maior = numeros[i];
            if (numeros[i] < menor)
                menor = numeros[i];
        }
    }

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}