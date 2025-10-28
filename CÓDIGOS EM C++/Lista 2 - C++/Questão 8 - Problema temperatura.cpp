#include <iostream>
using namespace std;

int main() {
    char escala;
    float temp;
    cout << "C ou F? ";
    cin >> escala;
    cout << "Temperatura: ";
    cin >> temp;
    if (escala == 'C' || escala == 'c')
        cout << "Fahrenheit: " << (temp * 9 / 5 + 32) << endl;
    else if (escala == 'F' || escala == 'f')
        cout << "Celsius: " << ((temp - 32) * 5 / 9) << endl;
    else
        cout << "Escala invalida." << endl;

    return 0;
}
