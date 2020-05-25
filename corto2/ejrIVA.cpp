#include <iostream>

using namespace std;
 
int main() 
{
    int opc;
    float ESA = 0.13, GT = 0.09,  ES = 0.20, HN = 0.15, x ;

    cout << "Hola, selecciona el pais: "<< endl;

    cout << " 1. El Salvador "<< endl;
    cout << " 2. Guatemala "<< endl;
    cout << " 3. Honduras "<< endl;
    cout << " 4. Espana " << endl;

    cout << "Opcion: ";
    cin >> opc;

switch (opc){
            
            case 1:
            cout << "Ingresa la cantidad de dinero: ";
                cin >> x;

                x *= ESA;

                  cout << "El impuesto a pagar es de: $"<< x << endl; break; 

              case 2:
            cout << "Ingresa la cantidad de dinero: ";
                cin >> x;

                x *= GT;

                    cout << "El impuesto a pagar es de: $"<< x << endl; break; 

             case 3:
            cout << "Ingresa la cantidad de dinero: ";
                cin >> x;

                x *= HN;

                    cout << "El impuesto a pagar es de: $"<< x << endl; break; 

             case 4:
            cout << "Ingresa la cantidad de dinero: ";
                cin >> x;

                x *= ES;

                    cout << "El impuesto a pagar es de: $"<< x << endl; break; 

        }

    return 0;
}