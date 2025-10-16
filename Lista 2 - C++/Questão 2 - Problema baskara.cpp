#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta, x1, x2;
    
    cout<< "Digite os valores dos coeficientes a, b e c: ";
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "Nao existem raizes reais." << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(2);
        cout << "Raiz 1: " << x1 << endl;
        cout << "Raiz 2: " << x2 << endl;
    }
    return 0;
}
