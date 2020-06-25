#include <iostream>

using namespace std;

//Funcion para leer arreglo.
void leerArreglo (int vector[], int x){
    for (int i = 0; i < x; i++)
    {
        cout << "Ingrese los datos: "<< endl;
        cin >> vector[i];
    }
}

//Realizar la suma de arreglos.
void suma (int vec1[], int vec2[], int x, int resultado[]){
    for (int i = 0; i < x; i++)
    {
        resultado[i] = vec1 [i] + vec2 [i];
    }
}

//Desplegar resultado.
void mostrarResultado(int resultado[], int x){
    cout << "El resultado de los arreglos es: "<<endl;
        for (int i = 0; i < x; i++)
        {
            cout << resultado[i]<<endl;
        }
}

int main(){

    int x;

        cout <<"Ingrese tama"<<char(164)<<"o de los arreglos: "; cin >> x;
    int vector1 [x];
    int vector2 [x];
    int resultado [x];

    leerArreglo (vector1,x);
    leerArreglo (vector2,x);

    suma (vector1, vector2, x, resultado);
    mostrarResultado (resultado, x);

    system ("pause");
    return 0;
}