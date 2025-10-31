#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matriz[4][4] = {
        {1, 5, 3, 7},
        {9, 2, 6, 4},
        {8, 0, 11, 13},
        {14, 12, 10, 15}};
    int maior = matriz[0][0];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
    cout << "Maior elemento: " << maior << endl;
    return 0;
}