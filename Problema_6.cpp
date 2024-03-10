#include<iostream>
#include <ctype.h>
using namespace std;

int ejercicio6(){
    string cadena;

    cout<<"Ingrese una cadena de caracteres: ";
    cin>>cadena;

    cout<<"Original: "<<cadena<<endl;
    for(int i=0;i<cadena.length();i++){
        cadena[i] = toupper(cadena[i]);
    }
    cout<<"En mayuscula: "<<cadena<<endl;
    return 0;
}
