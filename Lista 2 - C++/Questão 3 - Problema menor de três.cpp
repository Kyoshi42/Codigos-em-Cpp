#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, menor;
    cout << "Digite tres valores inteiros: ";
    cin >> a >> b >> c;
    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    cout << "O menor valor e: " << menor << endl;
    return 0;
}