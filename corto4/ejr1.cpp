#include <iostream>

using namespace std;

void batman (string frase){ 
    char murcielago[100]={};

    cout << "Ingrese texto a codificar: ";
    cin.getline(murcielago,100);

    for (int i=0; i<100; i++){

        switch (murcielago[i])
        {
        case 'm':       
            cout <<0;
            break;
        
        case 'u':
            cout <<1;
            break;

        case 'r':
            cout <<2;
            break;
        
        case 'c':
            cout <<3;
            break;
        
        case 'i':
            cout <<4;
            break;

        case 'e':
            cout <<5;
            break;
        
        case 'l':
            cout <<6;
            break;
        
        case 'a':
            cout <<7;
            break;
        
        case 'g':
            cout <<8;
            break;

        case 'o':
            cout <<9;
            break;
                case 'M':       
            cout <<0;
            break;
        
        case 'U':
            cout <<1;
            break;

        case 'R':
            cout <<2;
            break;
        
        case 'C':
            cout <<3;
            break;
        
        case 'I':
            cout <<4;
            break;

        case 'E':
            cout <<5;
            break;
        
        case 'L':
            cout <<6;
            break;
        
        case 'A':
            cout <<7;
            break;
        
        case 'G':
            cout <<8;
            break;

        case 'O':
            cout <<9;
            break;

        default: cout <<murcielago[i];
            break;
    }

}
}
int main (){
    string frase;

    batman(frase);

    return 0;
}

