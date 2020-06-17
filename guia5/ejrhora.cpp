#include <iostream>

using namespace std;

int main (){

    int hh, mm, ss;

    cout << endl << endl <<"CALCULO DE HORA. FORMATO DE 24 HORAS." <<endl <<endl;

    do { //Ciclo para evitar que el usuario ingrese una hora superior a 24
        cout << "Ingrese la hora: "; cin >>hh;
            if (hh>=24){
                cout<<"Ingresa una hora valida, entre 00 a 23 horas. "<<endl;}
    } while (hh>=24);
    
    do { //Ciclo para evitar que el usuario ingrese minutos superiores a 59
        cout << "Ingrese los minutos: "; cin >> mm;
            if (mm>59){
                cout<<"Ingresa minutos validos, entre 00 a 59 minutos. "<<endl;}
    } while (mm>59);

    do { //Ciclo para evitar que el usuario ingrese segundos superiores a 59
        cout << "Ingrese los segundos: "; cin >> ss;
            if (ss>59){
                cout<<"Ingresa una hora valida, entre 00 a 59 segundos. "<<endl;} 
    } while (ss>59);   


        ss++;
        if (ss>=60){ //cambio de minuto
            ss = 0;
            mm++;

            if(mm>=60){ //cambio de hora
                mm = 0;
                hh++;

                if (hh>=24){ //en caso de 23:59:59
                    hh=0;
                }
            }
        }
    
    cout << "La hora es: "; 
    if (hh<10){cout<<0;}
    cout<< hh; 
    cout << ":";
    if (mm<10){cout<<0;} 
    cout << mm; 
    cout <<":"; 
    if (ss<10){cout<<0;}
    cout << ss;

    return 0;
}