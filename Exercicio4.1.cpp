#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14

int main(void) {
    double r;

    cout << "Digite o raio da circunferência: ";
    cin >> r;

    cout << "O diâmetro do círculo é: " << r * 2 << endl;
    cout << "O perímetro do círculo é: " << 2 * PI * r << endl;
    cout << "A área do círculo é: " << PI * pow(r, 2) << endl;

    cout << endl;
    return 0;
}