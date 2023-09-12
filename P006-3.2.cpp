#include <iostream>
using namespace std;
int main(){
    int numero1, numero2;
    string resultado = "";


    cout<<"Digite dois numeros. "<<endl<<"Numero 1:";
    cin>>numero1;
    cout<<"Numero 2:";
    cin>>numero2;

    resultado = (numero1 > numero2) ? "E maior" : (numero1 < numero2) ? "E menor" : "E igual";

    cout<<resultado<<endl;

    return 0;
}