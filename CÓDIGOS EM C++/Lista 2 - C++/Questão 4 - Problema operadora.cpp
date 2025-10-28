#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double minutos, preco;
    cout << "Digite a quantidade de minutos consumidos: ";
    cin >> minutos;
    if (minutos <= 100) {
        preco = 50;
    } else {
        preco = 50 + (minutos - 100)*2;
    }
    cout << fixed << setprecision(2);
    cout << "O preco total da conta e: R$ " << preco << endl;
    return 0;  
}