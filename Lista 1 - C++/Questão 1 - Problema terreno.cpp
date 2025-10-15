#include <iostream>
#include <iomanip>
using namespace std;
double larg, comp, area, valormq, preco;
int main() {
    cout << "Digite a largura e o comprimento do terreno: " << endl;
    cin >> larg >> comp;
    area = larg * comp;
    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << " m2" << endl;  
    cout << "Digite o valor do metro quadrado: " << endl;
    cin >> valormq;
    preco = area * valormq;
    cout << "Preco do terreno = R$ " << preco << endl;
    return 0;
}
