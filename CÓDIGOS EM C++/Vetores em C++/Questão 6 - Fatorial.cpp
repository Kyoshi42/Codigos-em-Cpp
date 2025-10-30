#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, fatorial = 1;
    cout << "Digite um numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    cout << "Fatorial de " << n << " e " << fatorial << endl;
    return 0;
}