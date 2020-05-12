#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int x1, x2, x3;
 
    float promedio;

    cout<<"Ingrese primer valor: "<< endl;
    cin>> x1;

    cout<<"Ingrese segundo valor: "<< endl;
    cin>> x2;

    cout<<"Ingrese tercer valor: "<< endl;
    cin>> x3;

    promedio = (x1 + x2 + x3) /3 ;
    cout<<"El promedio es: " << promedio;

    return 0;
}

