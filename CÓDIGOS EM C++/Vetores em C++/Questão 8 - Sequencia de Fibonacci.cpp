#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, proximo;

    cout << "Quantos numeros da sequencia de Fibonacci devem ser exibidos? ";
    cin >> n;
    cout << "Sequencia de Fibonacci com " << n << " elementos:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        proximo = a + b;
        a = b;
        b = proximo;
    }
    cout << endl;
    return 0;
}