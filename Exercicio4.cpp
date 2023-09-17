#include <iostream>

using namespace std;

int main(void) {
    double x, y, z;

    cout << "Digite o primerio número de ponto flutuante: ";
    cin >> x;

    cout << "Digite o segundo número de ponto flutuante: ";
    cin >> y;

    z = x + y;
    cout << "Soma: x + y = " << z << endl;

    z = (x + y) / 2;
    cout << "Média: (x + y) / 2 = " << z << endl;
    
    z = x * y;
    cout << "Produto: x * y = " << z << endl;
    
    if (x > y) 
    {
        z = x;
    }
    else if (x < y) 
    {
        z = y;
    }

    cout << "O maior valor entre x e y é " << z << endl;
    
    if (x > y) 
    {
        z = y;
    }
    else if (x < y) 
    {
        z = x;
    }

    cout << "O menor valor entre x e y é " << z << endl;

    cout << endl;
    return 0;
}