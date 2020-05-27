#include <iostream>

using namespace std;
 
int main() 
{
    int pais;
    float ESA = 0.13, GT = 0.09,  ES = 0.20, HN = 0.15, x, iva ;

    cout << endl;
    cout << "Hola, los paises disponibles para calcular el IVA son: "<< endl;   

    cout << " 1. El Salvador "<< endl;
    cout << " 2. Guatemala "<< endl;
    cout << " 3. Honduras "<< endl;
    cout << " 4. Espana " << endl;
    cout << "Selecciona y pon el numero de tu pais deseado: ";
    cin >> pais;

    cout << "Ingrese la cantidad de dinero: ";
    cin >> x;

    if (pais==1){

        x *= ESA;
          cout << "El impuesto a pagar es de: $"<< x << endl;
    } else if (pais==2) {
        
        x *= GT;
          cout << "El impuesto a pagar es de: $"<< x << endl;
    } else if (pais==3){

        x *= HN;
            cout << "El impuesto a pagar es de: $"<< x << endl;
    } else if (pais==4){

         x *= ES;
            cout << "El impuesto a pagar es de: $"<< x << endl;    
    }

    return 0;
}