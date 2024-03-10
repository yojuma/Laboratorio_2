#include <iostream>
#include <string>
using namespace std;

int ejercicio7() {
    string cadena;
    cout<<"Ingresa una cadena de caracteres: ";
    cin>>cadena;

    string resultado="";  //almacenar caracteres no repetidos
    for(char c : cadena) {                      // string::npos retorna true o false si el caracter está en la variable
        if(resultado.find(c) == string::npos) { // resultado.find(c) busca el caracter c en la variable resultado
            resultado += c;
        }
    }
    cout<<"Original: "<<cadena<< endl;
    cout<<"Sin repetidos: "<<resultado<< endl;

    return 0;
}
