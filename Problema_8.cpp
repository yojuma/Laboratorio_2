#include<iostream>
using namespace std;

int ejercicio8(){
    string cadena;
    cout<<"Ingresa una cadena de caracteres: ";
    cin>>cadena;
    string numero="";
    string texto="";

    for(char c: cadena){
        if(isalpha(c)){ // isalpha() valida que c sea una letra
            texto+=c;
        }
        else{
            numero+=c;
        }
    }
    cout<<"Original: "<<cadena<<endl;
    cout<<"Texto: "<<texto<<endl;
    cout<<"Numero: "<<numero<<endl;
    return 0;
}
