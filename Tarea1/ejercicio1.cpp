#include <iostream>

using namespace std;

int main (){

    int dolares;
    float euros = 1.33;

    float conversion;

    cout<<"Ingrese la cantidad de dolares a convertir";
    cin>>dolares;

    conversion = dolares*euros;

    cout<<conversion;
    
    return 0;
}
