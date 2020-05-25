#include <iostream>

using namespace std;

int main (){

    int x;

    cout<<"Ingrese numero: "<< endl;
    cin>> x;

    if (x % 2 == 0){

        cout<<"el numero "<< x <<  " es PAR" << endl;
    } else {

        cout<<"el numero "<< x <<  " es IMPAR" << endl;
    }

    return 0;
}