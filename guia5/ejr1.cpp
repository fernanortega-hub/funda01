#include <iostream>

using namespace std;

int MCD(int a, int b){


    if (b==0) 
            return a;
    else MCD (b, a%b);

}

int main (){

    int a, b;

    cout << endl <<" Calcular M.C.D "<< endl;

    do{ //Ciclo por si el usuario ingresa un numero negativo o decimal
        cout <<"Ingrese primer numero: "<<endl;
            cin >> a;
        if (a<0){
                cout <<endl<< "DEBE INGRESAR UN NUMERO POSITIVO Y ENTERO"<< endl;}
    } while (a<0);

     do{ //Ciclo por si el usuario ingresa un numero negativo o decimal
        cout <<"Ingrese un segundo numero: "<<endl;
            cin >> b;
        if (b<0){
                cout <<endl<< "DEBE INGRESAR UN NUMERO POSITIVO Y ENTERO"<< endl;}
    } while (b<0);

    if (a>b){ 
        cout << "El MCD de "<< a << "," <<b << " es: "<< MCD (a,b)<<endl<<endl;
    } else if(a<b){
        cout << "El MCD de "<< a << "," <<b << " es: "<< MCD (b,a)<<endl<<endl;
    }

    return 0;
}
