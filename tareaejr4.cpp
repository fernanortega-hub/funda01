#include <iostream>

using namespace std;

int main (){

    int n;

    cout<<"Ingrese numero: " << endl;
    cin>>n;

    if (n % 2 == 0)
    {
        cout<< "EL NUMERO ES PAR";
    } else {

        cout<<"EL NUMERO ES IMPAR";
    }
    
    return 0;
}