#include <iostream>
using namespace std;
int main(){
    double x, y;
    string quadrante = "";


    cout<<"Digite os valores (x, y) de um ponto do plano. "<<endl<<"Ponto x:";
    cin>>x;
    cout<<"Ponto y:";
    cin>>y;

    quadrante = (x > 0 && y > 0) ? "Primeiro Quadrante" :
       (x < 0 && y > 0)  ? "Segundo Quadrante" :
       (x < 0 && y < 0)  ? "Terceiro Quadrante" :
       (x > 0 && y < 0)  ? "Quarto Quadrante" : "Sobre um dos eixos";

    cout<<quadrante<<endl;

    return 0;
}