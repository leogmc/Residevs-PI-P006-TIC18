#include <iostream>

using namespace std;

int main(){
    double numero1, numero2, soma, media, produto, maior, menor;
    printf("Digite um numero de ponto flutuante\n"); 
    scanf("%lf",&numero1);
    printf("Digite outro numero de ponto flutuante\n"); 
    scanf("%lf",&numero2);

    soma = numero1 + numero2;
    media = soma/2;
    produto = numero1 * numero2;

    maior = (numero1 > numero2) ? numero1 : numero2;
    menor = (numero1 < numero2) ? numero1 : numero2;
    printf("Soma = %f\n", soma);
    printf("Media = %f\n", media);
    printf("Produto = %f\n", produto);
    printf("Maior = %f\n", maior);
    printf("Menor = %f\n", menor);
return 0;
}
