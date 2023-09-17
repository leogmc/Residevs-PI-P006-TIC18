#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int a, b, c;

    cout << "Digite o primeiro número inteiro: ";
    cin >> a;

    cout << "Digite o segundo número inteiro: ";
    cin >> b;

    c = 4 * a + b / 3 - 5;
    cout << "Resultado da expressão c = 4 * a + b / 3 - 5 = " << c << endl;

    c = 4 * (a + b) / (3 - 5);
    cout << "Resultado da expressão c = 4 * (a + b) / (3 - 5) = " << c << endl;

    /**
     * Os resultados são diferentes por conta da precedência.
     * 
     * Na primeira expressão, primeiro será efetuado a multiplicação e a divisão.
     * Em seguida, da esquerda para a direita, a soma e a subtração.
     * 
     * Na segunda expressão, primeiramente serão efetuadas as expressões entre 
     * parêntesis e em seguida, da esquerda para a direita, a multiplicação e a
     * divisão.
     * 
     * Segue exemplo:
     * x = a + b * c
     * x = (a + b) * c
    */

    cout << "\n\nOutro exemplo: \n\n";
    int x = a + b * c;
    cout << "Resultado da expressão x = a + b * c = " << x << endl;

    x = (a + b) * c;
    cout << "Resultado da expressão x = (a + b) * c = " << x << endl << endl;

    x = pow(a, 2) + 2 * b + c;
    cout << "Resultado da expressão a^2 + 2 * b + c = " << x << endl;

    cout << endl;
    return 0; 
}