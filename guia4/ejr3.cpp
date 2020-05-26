#include <iostream>

using namespace std;

int main (){

    int n;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    if (n==0){ 
        cout << "El numero es cero";
    } else {
            
    if (n>0){
        cout << "El numero es positivo";

    } else {
        cout << "El numero es negativo";
    }
    }

    return 0;
}