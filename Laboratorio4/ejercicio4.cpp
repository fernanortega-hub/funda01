#include <iostream>

using namespace std;

int main (){

    int factorial=1, n;

    do {

        cout << "Ingrese un numero: ";
        cin >> n;

    } while (n<=0) ;
        if (n>20){ 
        for (int i=1; i<=n; i++){
            factorial*=i;
        }
        cout << "El factorial de " << n << " es " << factorial;

          } 
        cout << "El numero es mayor a 20";
        

    return 0;
 }