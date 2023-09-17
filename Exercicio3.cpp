#include <iostream>

using namespace std;

int main(void) {
    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin >> ch1;

    cout << "Digite outro caractere: ";
    cin >> ch2;

    ch3 = ch1 - 1;
    cout << "Caractere antecessor do caractere " << ch1 << ": " << endl;
    cout << "Caractere: "  << ch3 << endl;
    cout << "Decimal: " << dec << int(ch3) << endl;
    cout << "Octal: " << oct << int(ch3) << endl;
    cout << "Hexadecimal: " << hex << int(ch3) << endl;

    ch3 = ch2 - 1;
    cout << "Caractere antecessor do caractere " << ch2 << ": " << endl;
    cout << "Caractere: "  << ch3 << endl;
    cout << "Decimal: " << dec << int(ch3) << endl;
    cout << "Octal: " << oct << int(ch3) << endl;
    cout << "Hexadecimal: " << hex << int(ch3) << endl;

    isupper(ch1) ? ch3 = 'A' : ch3 = ' ';
    cout << "ch3: " << ch3 << endl;

    islower(ch2) ? ch3 = 'a' : ch3 = ' ';
    cout << "ch3: " << ch3 << endl;

    isdigit(ch1) || isdigit(ch2) ? ch3 = '1' : ch3 = ' ';
    cout << "ch3: " << ch3 << endl;

    cout << endl;
    return 0;
}