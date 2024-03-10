#include<iostream>
#include<string> //para stoi(), sirve para convertir char a int
using namespace std;

int convertir_int_a_char(string& cadena){
    //funcion para convertir un char a int
    int numero = stoi(cadena);
    return numero;
}

int ejercicio4(){
    string cadena;
    int resultado;

    cout<<"Ingrese un numero: ";
    cin>>cadena;
    resultado=convertir_int_a_char(cadena);
    cout << "El numero entero resultante es: " << resultado << endl;
    return 0;
}



