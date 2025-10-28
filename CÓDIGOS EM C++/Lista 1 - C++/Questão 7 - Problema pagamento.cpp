#include <iostream>
#include <iomanip>
using namespace std;
string nome;
double valorHora, horas, pagamento;
int main() {
    cout << "Nome do funcionario: " << endl;
    cin >> nome;
    cout << "Valor por hora: " << endl;
    cin >> valorHora;
    cout << "Horas trabalhadas: " << endl;
    cin >> horas;
    pagamento = valorHora * horas;
    cout << fixed << setprecision(2);
    cout << "" << nome << " recebe R$ " << pagamento << " de salario. " << endl;
    return 0;
}