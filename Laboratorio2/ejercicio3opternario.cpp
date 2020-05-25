#include <iostream>

using namespace std;

int main (){

    int n;
    string respuesta;

    cout<< "Ingrese un numero: ";
    cin>> n;

    respuesta = (n>=0) ? "positivo" : "negativo";

    cout<< n << " es " << respuesta;


    return 0;
}