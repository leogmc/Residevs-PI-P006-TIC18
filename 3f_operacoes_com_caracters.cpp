#include <iostream>


using namespace std;

int main(){
   char ch1,ch2, ch3;
   cin >> ch1 >> ch2;
   ch3 = char(int(ch2)+1);
  
   
   ch3 = ((int(ch2)>64 & int(ch2)<91) || (int(ch2)>96 && 123<int(ch2))|| (int(ch2)>47 && 58<int(ch2)))? '1' : ' ';
   cout << ch3 <<endl;
}

//3g_operacoes_com_caracters.cpp