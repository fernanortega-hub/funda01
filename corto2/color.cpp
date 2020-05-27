#include <iostream>

using namespace std;
 
int main()
{
    int Bl = 10, Ro = 50, Ve = 60, Am = 500, Mo = 0, opc; 

    cout << "Selecciona el color que desees y gana dinero al instante" << endl;

     cout << "1. Blanco " << endl;
    cout << "2. Rojo " << endl;
    cout << "3. Verde " << endl;
    cout << "4. Amarillo " << endl;
    cout << "5. Morado " << endl;

    cout << "Opcion: "; 
    cin >> opc;

    if (opc==1){
          cout << "Ganaste $" << Bl << ". Felicidades!";
    } else if (opc==2) {
        cout << "Ganaste $" << Ro << ". Felicidades!";
    } else if (opc==3) {
        cout << "Ganaste $" << Ve << ". Felicidades!";
    } else if (opc==4) {
        cout << "Ganaste $" << Am << ". Felicidades!";   
    } else if (opc==5) {
          cout << "Ohh ganaste $" << Mo << ". Suerte a la proxima.";
    }
    return 0;
}