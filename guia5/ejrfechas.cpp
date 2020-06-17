#include <iostream>

using namespace std;

bool anioBisiesto (int anio){

    return ((anio % 4) == 0 && (anio % 100) != 0) || ((anio % 400) == 0);
}

int DiaMes(int mm, int aa){

    int dias = 31;

     if (mm == 4 || mm == 6  || mm == 9  || mm == 11){

         dias = 30;

     }else if (mm == 2){

         if(anioBisiesto(aa)){

             dias = 28 ;

         }else {
           dias = 29;
         }
     }

     return dias;

}
int main(){
    int dd, mm, aa;

    cout << "Ingrese el dia: "<<endl; cin >> dd;
    cout<< "Ingrese el mes: "<<endl; cin>> mm;
    cout<< "Ingrese el a"<<(char)164<<"o: " << endl;cin>> aa;

    dd ++;
     if (dd > DiaMes(mm,aa) ){
         dd = 1;
         mm ++;
         if (mm > 12){
             mm = 1;
             aa ++;

         }
     }

     cout << "La fecha es: "<< dd << '/' << mm << '/' << aa << endl;
}