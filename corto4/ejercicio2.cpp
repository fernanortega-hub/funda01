#include <iostream>

using namespace std;

float estaturaPromedio(int n, float suma, float altura[]){//Función para la estatura promedio de los estudiantes.
    float promedio;
    int arriba=0, abajo=0;
    cout << "Cu"<<char(160)<<"ntas alturas desea promediar: " <<endl;//Opcion para que el usuario ocupe menos variables de las que necesita
    cin >> n;

    if(n>25){//Condicional para que el usuario no sobre pase el limite de estudiantes
        cout << "No puede sobrepasar el limite del arreglo."<<endl;
    }
    else{
        cout << "Digite las " <<n<< " alturas"<<endl;
        for (int i = 0; i < n; i++)
            cin >>altura[i];

        suma=0;
        for (int i = 0; i < n; i++){

            suma += altura[i];
        }     
    }
    promedio = suma/n;  

    cout << "El promedio de las alturas es: " << promedio <<" metros."<<endl; 

    for (int i=0; i<n; i++){ //Ciclo que realizara el conteo de que estaturas estan por debajo o encima del promedio
        if (promedio<altura[i]){
            arriba++;
    } else if (promedio>altura[i]) {
            abajo++;
    }
    } 
    cout << "Hay " << arriba <<" alturas por encima del promedio. "<<endl; 
    cout << "Hay " << abajo <<" alturas por debajo del promedio. "<<endl;
  
}

int main(){
    float altura[]={}, suma;
    int n;

    cout << "Programa para calcular el promedio de altura de los estudiantes"<<endl;
    
   estaturaPromedio(n, suma, altura);//Llamando a la funcion

   system("PAUSE");
   return 0;
}