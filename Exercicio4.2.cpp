#include <iostream>
#include <string>

using namespace std;

#define PI 3.14

int main(void) {
    double x, y;
    string quadrante;

    cout << "Digite o valor de x: ";
    cin >> x;
    
    cout << "Digite o valor de y: ";
    cin >> y;

    x > 0 && y > 0 ? quadrante = "Primeiro quadrante." : x < 0 && y > 0 ? quadrante = "Segundo quadrante." : x < 0 && y < 0 ? quadrante = "Terceiro quadrante." : x > 0 && y < 0 ? quadrante = "Quarto quadrante." : quadrante = "Sobre um dos eixos.";

    cout << quadrante << endl;

    return 0;
}