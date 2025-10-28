#include <iostream>
#include <iomanip>
using namespace std;
double r, area;
int main() {
    cout << "Digite o raio do circulo: " << endl;
    cin >> r;
    area = 3.14159 * r * r;
    cout << fixed << setprecision(3);
    cout << "Area = " << area << endl;
    return 0;
}