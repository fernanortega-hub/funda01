#include <iostream>

using namespace std;

int main (){

    int n;

    while (n !=0 ) {

        cout << "Ingrese el numero: ";
        cin >> n;

        if (n % 2 == 0){
            
            cout << "el numero es par" << endl;
        } else {

            cout << "el numero es impar"<< endl;
        }


    }


    return 0;
 }