#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota1, nota2, notaFinal;

    cout << "Digite a nota do primeiro semestre: ";
    cin >> nota1;

    cout << "Digite a nota do segundo semestre: ";
    cin >> nota2;

    notaFinal = (nota1 + nota2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "\nNota final = " << notaFinal << endl;

    if (notaFinal < 60.0) {
        cout << "REPROVADO" << endl;
    }
    else {
        cout << "APROVADO" << endl;
    }
    return 0;
}