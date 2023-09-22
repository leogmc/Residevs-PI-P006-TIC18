#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int num1, num2;
    string maior;

    cout << "Digite um número inteiro: ";
    cin >> num1;

    cout << "Digite outro número inteiro: ";
    cin >> num2;

    num1 > num2 ? maior = "O número " + to_string(num1) + " é maior." : num1 < num2 ? maior = "O número " + to_string(num2) + " é maior." : maior = "Estes números são iguais.";
    cout << maior;
    
    if (num1 > num2)
    {
        if (num1 % 2 == 0)
        {
            cout << " e é par.\n";
        }
        else
        {
            cout << " e é ímpar.\n";
        }
    }
    else if (num1 < num2)
    {
        if (num2 % 2 == 0)
        {
            cout << "É par.\n";
        }
        else
        {
            cout << "É ímpar.\n";
        }
    }
    

    cout << endl;
    return 0;
}