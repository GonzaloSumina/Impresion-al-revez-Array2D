#include <iostream>
using namespace std;

int main()
{
    int B[2][3] = { {1,2,3}, {4,5,6} };
    const int fil = 2;
    const int col = 3;
    int cont = 1;
    for (int* p = *B; p < *(B + fil); p++) {
        cout << *p;
        if (cont == col) {
            cout << "\n";
            cont = 0;
        }
        cont++;
    }
    cont = 1;
    for (int* p = *B; p < *(B + fil); cont++) {
        if (cont <= fil * col) { cout << *p; }
        if (cont%fil==0) {
            cout << "\n";
            p = p - fil;
        }
        else { p = p + col; }
    }
}
