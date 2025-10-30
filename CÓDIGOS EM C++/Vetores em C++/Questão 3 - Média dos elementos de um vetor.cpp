#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double numeros[8], soma = 0;
    int i;
    double media;
    cout << "Digite 8 numeros reais: ";
    for (i = 0; i < 8; i++) {
        cin >> numeros[i];
        soma += numeros[i];
    }
    media = soma / 8.0;
    cout << "A media dos numeros e: " << media << endl;

    return 0;
}