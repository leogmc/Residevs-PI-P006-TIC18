#include <iostream>
using namespace std;
int main(){
    int numero1, numero2, resultado, resultado2;
    cout<<"Digite dois numeros inteiros. "<<endl<<"Numero 1:";
    cin>>numero1;
    cout<<"Numero 2:";
    cin>>numero2;

    resultado = 4 * numero1 + numero2 / 3 - 5;
    cout<<"O resultado da equacao (4 * numero1 + numero2 / 3 - 5) e: "<<resultado<<endl;
    
    resultado = 4 * (numero1 + numero2) / (3 - 5);
    cout<<"O resultado da equacao (4 * (numero1 + numero2) / (3 - 5)) e: "<<resultado<<endl;

    /*O resultado da equacoes acima foi diferente porque na primeira a multiplicacao e a divisao foram executadas primeiro
    E na segunda especificou-se a ordem por meio de parenteses que nesse caso a soma foi executada primeiro.*/ 

    resultado2 = (numero1*numero1) + 2 * numero2  + resultado;
    cout<<"O resultado da equacao (numero1 * numero1) + 2 * numero2  + resultado e: "<<resultado2<<endl;

    return 0;
}