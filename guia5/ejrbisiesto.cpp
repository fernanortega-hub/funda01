#include <iostream>

using namespace std;

bool prueba(int prb){ //Función para calcular si un año es bisiesto o no

     if (prb % 4 == 0 && prb % 100 != 0 || prb% 400 == 0){//Parámetros sobre un año bisiesto
    return true;
    } else {
    return false;
    }
}
   

int main(){
    int anio;
    bool volver;

    cout << "Ingrese el a"<<(char)164<<"o: ";
    cin >> anio;

    volver = prueba(anio);

    if(volver==true){
        cout << "El a"<<(char)164<<"o ES bisiesto"<<endl; 
    }
    else{
        cout << "El a"<<(char)164<<"o NO es bisiesto"<<endl;
    }

    return 0;
}