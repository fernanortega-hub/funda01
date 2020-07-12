#include <iostream>
#include <string.h>

using namespace std;

const int longCad = 20; 

struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
}productos[200];

float n;

void leerDatos (int cant[], int x){
    for (int i = 0; i < x; i++)
    {
        fflush(stdin);
        cout << "Ingrese el nombre del producto " <<i+1<<": "<<endl;
        cin.getline(productos[i].nombreArticul,longCad,'\n');
        fflush(stdin);

        cout <<char(168)<<"Cuantos articulos de este tipo desea?: "<<endl;
        cin >> productos[i].cantidad;
        
        cout << "Ingrese el precio unitario del articulo: "<<endl;
        cin >> productos[i].precio;
             
    }
}

void costoArticulo (int x){
    for (int i = 0; i < x; i++){
       productos[i].costoPorArticulo =  productos[i].precio * productos[i].cantidad;
    }
}

void mostrarDatos (int x){

    cout<<endl<<"***DETALLES DE COMPRA***"<<endl;

    for (int i = 0; i < x; i++)
    {
        cout<<endl<<"Nombre de articulo "<<i+1<<": "<<productos[i].nombreArticul<<endl;
        cout<< "Precio: $"<<productos[i].precio <<endl;
        cout<< "Cantidad de articulos: "<<productos[i].cantidad<<endl;
        cout<< "Subtotal: $"<< productos[i].costoPorArticulo<<endl;
    }

}

float sumarDatos (int x){
    float subtotal=0;

        for (int i = 0; i < x; i++)
        {
        subtotal = subtotal + productos[i].costoPorArticulo;
        }
    
    return (subtotal);
    
}

int main (){
    int x;

    cout << "FACTURACION."<<endl<<endl;

    cout << "Ingrese la cantidad de articulos a comprar: "; cin >> x;
    int cant[x];

    leerDatos (cant,x);
    costoArticulo (x);
    mostrarDatos(x);
    cout<<endl<<"\t TOTAL DE COMPRA: $"<<sumarDatos(x);

    return 0;
}