#include <iostream> 
#include <string> 
#include <algorithm>
  
using namespace std; 
  
int main() 
{ 
    string palabra;

    cout << "Ingrese la palabra: ";
    cin >> palabra;

    transform  (palabra.begin(), palabra.end(), palabra.begin(), ::tolower );

    int l = palabra.length();

    if ((palabra[0])==palabra [l-1]) {

        cout << "La palabra escrita inicia y termina con la misma letra.";
    } else {

         cout << "La primera y ultima letra son diferentes.";
    }
  
    return 0; 
} 