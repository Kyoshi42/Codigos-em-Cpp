#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    double areaQuadrado, areaTriangulo, areaTrapezio;

    cout << "Digite as tres medidas A, B e C: " << endl;
    cin >> A >> B >> C;
    areaQuadrado = A * A;
    areaTriangulo = (A * B) / 2.0;
    areaTrapezio = (A + B) * C / 2.0;
    cout << fixed << setprecision(4);
    cout << "Area do quadrado = " << areaQuadrado << endl;
    cout << "Area do triangulo = " << areaTriangulo << endl;
    cout << "Area do trapezio = " << areaTrapezio << endl;
    return 0;
}