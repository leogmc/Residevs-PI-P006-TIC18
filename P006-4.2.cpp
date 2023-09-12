#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double raio, diametro, circunferencia, area;
    double pid = M_PI;
    printf("Digite um raio de um circulo\n"); 
    scanf("%lf",&raio);
    diametro=2*raio;
    circunferencia = 2 * M_PI * raio;
    area = M_PI * (raio * raio);

    printf("O diametro do circulo eh = %f\n", diametro);
    printf("A circunferencia do circulo eh  = %f\n", circunferencia);
    printf("A area do circulo eh  = %f\n", area);
return 0;
}
