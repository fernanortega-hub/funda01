//CALCULO DE SALARIOS

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

float SalarioT (float ht, float hx){ // Funcion para salario total 
     float st; 
        ht *= 1.75;
        hx *= 2.50;
    st = ht + hx;
    return st;
}

float SalarioR (float ht, float hx){ //Funcion para salario real
    float srS, srAFP, srRen, st, sr, sR1;

    ht *= 1.75;
    hx *= 2.50;
    st = ht + hx;

        srS = st * 0.04;
        srAFP = st * 0.0625;

         sr = srS + srAFP;

        sR1 = st - sr;

        if (st>=500){ //Para impuesto a la Renta
            sR1 = (st - (st * 0.1)- (st * 0.04)- (st * 0.0625));
        }

    return sR1;
}

int main (){

    int N,i;
    float ST, SR;
    float ht, hx;
    char empleado [60];

    cout << "   EMPRESA    " << endl << endl;

    cout << "Hola, bienvenido al calculo de salarios" << endl;
    cout << "Por favor, ingrese la cantidad de empleados: " << endl;
    cin >> N;

        for (int i = 0; i < N; i++) //Ciclo para ejecutar N empleados ingresados por el usuario
        {
            
        cout << "Ingrese nombre de empleado: " << endl; //Guardar nombre de empleado ingresado
        cin >> empleado;

    cout << "Muy bien, a continuacion, ingrese horas trabajadas y horas extras de " << empleado << endl;

            cout << "Horas trabajadas: " << endl;
            cin >> ht;

            cout << "Horas extras: " << endl;
            cin >> hx;

            cout << "El empleado "<< empleado << " tiene un salario de: "<< endl; 

            cout << "Salario total: " << SalarioT (ht,hx) << endl; // Regresa valor de funcion de salario Total
            cout << "Salario real: " << SalarioR (ht,hx) << endl << endl;  // Regresa valor de funcion de salario Real 
        }
        
    getch ();
    return 0;
} 


