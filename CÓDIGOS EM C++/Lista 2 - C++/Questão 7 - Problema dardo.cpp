#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double dardo1, dardo2, dardo3;
    cout << "Digite a distancia do primeiro dardo: ";
    cin >> dardo1;  
    cout << "Digite a distancia do segundo dardo: ";
    cin >> dardo2;
    cout << "Digite a distancia do terceiro dardo: ";
    cin >> dardo3;
    int maior = dardo1;
    if (dardo2 > maior) {
        maior = dardo2;
    }
    if (dardo3 > maior) {
        maior = dardo3;
    }
    cout << "A maior distancia alcancada foi: " << maior << endl;
    return 0;
}
