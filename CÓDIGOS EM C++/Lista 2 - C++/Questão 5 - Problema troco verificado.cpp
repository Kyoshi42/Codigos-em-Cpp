#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int quantidade;
    double valorunitario, dinheiro, preco, troco;
    cout << "Digite a quantidade de itens comprados: ";
    cin >> quantidade;
    cout << "Digite o valor unitario do item: ";
    cin >> valorunitario;
    cout << "Digite o dinheiro dado pelo cliente: ";
    cin >> dinheiro;
    preco = quantidade * valorunitario;
    troco = dinheiro - preco;
    cout << fixed << setprecision(2);
    cout << "Preco total: R$ " << preco << endl;
    if (troco < 0) {
        cout << "Dinheiro insuficiente. Faltam R$ " << fabs(troco) << endl;
    } else if (troco == 0) {
        cout << "Pagamento exato. Sem troco." << endl;
    } else {
        cout << "Troco: R$ " << troco << endl;
    }
    return 0;
}
