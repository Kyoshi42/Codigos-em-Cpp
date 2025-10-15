#include <iostream>
#include <iomanip>
using namespace std;
double distancia, combustivel, consumoM;
int main() {
    cout << "Distancia percorrida (km): " << endl;
    cin >> distancia;
    cout << "Combustivel gasto (litros): " << endl;
    cin >> combustivel;
    consumoM = distancia / combustivel;
    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumoM << " km/l" << endl;
    return 0;
}