#include <iostream>

using namespace std;
 
int main()
{
    int Bl = 10, Ro = 50, Ve = 60, Am = 500, Mo = 0; 
    int opc;

    cout << "Selecciona el color que desees y gana dinero al instante" << endl;

    cout << "1. Blanco " << endl;
    cout << "2. Rojo " << endl;
    cout << "3. Verde " << endl;
    cout << "4. Amarillo " << endl;
    cout << "5. Morado " << endl;

    cout << "Opcion: "; 
    cin >> opc;

    switch (opc){
        case 1:    
            cout << "Ganaste $" << Bl << ". Felicidades!"; break;

        case 2: 
            cout << "Ganaste $" << Ro << ". Felicidades!"; break; 

        case 3: 
            cout << "Ganaste $" << Ve << ". Felicidades!" ; break; 

        case 4:
            cout << "Ganaste $" << Am << ". Felicidades!" ; break; 

        case 5: 
            cout << "Ohh ganaste $" << Mo << ". Suerte a la proxima." ; break;  
    }
 
    return 0;
}


