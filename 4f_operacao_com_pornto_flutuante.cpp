#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  double x, y, z;
  scanf("%lf %lf", &x, &y);

  z = x > y ? x : y;
  cout << z << endl;
}
//4g_operacao_com_pornto_flutuante.cpp