#include <iostream>

using namespace std;

int main (){

   int anio;

   //lectura por teclado del año
   cout<<"Introduce un a"<<(char)164<<"o: "; //164 ASCII de ñ
   cin >> anio;
  
   if(anio%4==0 && anio%100!=0 || anio%400==0){  //Condición de bisiesto
      cout << "El a"<<(char)164<<"o, ES bisiesto" << endl;
   } else{
      cout << "El a"<<(char)164<<"o, NO es bisiesto" << endl;
    }
      
   system("pause"); 
   return 0;
} 
