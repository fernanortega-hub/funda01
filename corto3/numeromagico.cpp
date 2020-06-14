#include <iostream>

using namespace std;

int main (){

    int opcion = 0, win = 77, contador = 0, prueba = 0;
    
    do //Ciclo para realizar intentos
    {
        cout << "1. Intentar." << endl;
        cout << "0. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) //Para realizar los opciones 1 y 0
        {
        case 1:
            contador ++;
            if (contador<=4)
            {
                cout << endl << "Ingresa el numero: ";
                cin >> prueba;
                    if (prueba==win){

                        cout <<endl<< "Felicidades, ganaste" <<endl<<endl; //En caso de ser el numero ingresado al magico, se gana
                        opcion = 0;
                    } else
                    {
                        cout << "Vuelve a intentar." <<endl<<endl;

                            if (prueba<win){
                                //pistas para el usuario
                                cout << "El numero debe ser mayor" <<endl <<endl;
                            } else {
                                cout << "El numero debe ser menor" <<endl;
                            }
                    }
                    
            } else
            {
                cout <<endl << endl<<"Ups... Intentalo nuevamente."<< endl << endl;
                opcion = 0;
            }
            break;

            case 0: 
                    break;
        default: 
            cout << endl << "La opcion no esta disponible..." <<endl<<endl; //En caso de ingresar un numero de opcion no disponible
            break;
        }
    } while (opcion!=0);
    
    return 0;
}

int CalcularNum (int a){

    int prueba=0, NumWin = 77;
    cout << endl << "Ingresa el numero: ";
            cin >> prueba;

        if (prueba==NumWin){

            cout << endl << "Felicidades, ganaste" <<endl<<endl;
            exit (0);
        } else
        {
            cout << "Vuelve a intentar." <<endl<<endl;
        }
        
}