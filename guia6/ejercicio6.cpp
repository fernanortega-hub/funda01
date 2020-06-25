#include <iostream>

using namespace std;

int encontrarNumero (int t, int n,int array[]){ //Funcion para encontrar el numero que el usuario busca.
    int contador = 0;

    for (int i=0;i<t;i++){
        if (n==array[i]){
            contador++;
        }
    }
    return contador;
}

int main (){
    int t,n;

        cout <<"Ingrese tama"<<char(164)<<"o del arreglo: "; cin >> t;
    int vector [t];
        
        for(int i=0; i<t; i++){//Llenando el arreglo
            cout << "Ingrese el dato: "; cin >> vector [i];
            }

        cout << "Ingrese numero a buscar: "; cin >> n;

        cout <<"El numero se repite: "<<encontrarNumero (t,n,vector)<<endl;

    system ("pause");
    return 0;
}


