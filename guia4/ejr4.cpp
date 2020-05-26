#include <string.h>
#include <iostream>

using namespace std;
 
 
int main()
{
  char texto[40];
    int longitud = 0;
 
    cout << "Introduce una palabra: ";
        cin.getline (texto,40);
    longitud = strlen (texto) ;


         if (longitud>10){

        cout << "La palabra tiene mas de 10 caracteres." << endl;
    }
        else if (longitud==10){
            cout <<"La palabra tiene 10 caracteres" << endl;

        } else {
            cout <<"La palabra tiene menos de 10 caracteres" << endl ;
        }

    if (longitud%2==0){

        cout <<"Los caracteres de la palabra son pares" << endl ;

    }else{
        cout <<"Los caracteres de la palabra son impares" << endl;
    }

    return 0;
}