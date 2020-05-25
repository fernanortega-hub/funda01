#include <iostream>

using namespace std;

int main (){

    int acum=0, n;

    cout << "Ingrese un numero: ";
    cin >> n;

    for(int i=0; i<=n; i++){

        if (i%2==0){

            acum += i;
        }

    }
    cout << "La suma de numeros pares es: "<< acum;


    return 0;
 }