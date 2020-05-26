#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int numero1 ,  numero2;
    
        cout<< "Ingrese numero 1: " <<endl;
         cin>>numero1;

        cout<< "Ingrese numero 2: " <<endl;
        cin>>numero2;

    if (numero1 % numero2 == 0) {
        cout<<"El NUMERO ES DIVISIBLE";

    } else {
        cout<<"NO ES DIVISIBLE";
    }

    return 0;
}
