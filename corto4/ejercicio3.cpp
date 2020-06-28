#include <iostream>

using namespace std;

float Notas[100][5], porcentaje; //Se declaran las variables.
int n;

void matriz(float vectordoble[][5], int n); //Prototipo de función

void notaFinal (float matriz[][5], int n);//Prototipo de función.

int main (){

    cout << "Ingrese la cantidad de estudiantes a evaluar: "; cin>>n;
    Notas[n][5];

    matriz(Notas,n);
    cout<<endl;
    notaFinal(Notas,n);

    return 0;
}

 //Llenar matriz.
void matriz(float vectordoble[][5], int n){

    for (int i = 0; i < n; i++){
        cout <<endl<<"  Notas del estudiante "<<i+1<< "         "<<endl;
        for (int j = 0; j < 5; j++){
            cout <<"Ingrese la calificacion "<<j+1<<": "; 
                cin >> vectordoble [i][j];
        }
    }
    
}

//Nota final y Aprobacion de la materia.

void notaFinal (float matriz[][5], int n){

    for (int a = 0; a < n; a++){
        float promedio=0;
            for (int b = 0; b < 5; b++){
                porcentaje= (matriz[a][b]*0.2);
                promedio += porcentaje;
            }
        cout << endl << "El promedio del estudiante "<<a+1<< " es: "<< promedio << endl;
        if (promedio<6){
            cout << "El estudiante reprobo la materia.";
        } else {
            cout << "El estudiante ha aprobado el curso.";
        }
    }
}

