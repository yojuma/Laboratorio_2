#include<iostream>
#include<stdlib.h> //para atoi(), sirve para convertir char a int
using namespace std;

int convertir_int_a_char(char* cadena){
    //funcion para convertir un char a int
    int numero = atoi(cadena);
    return numero;
}

int ejercicio4(){
    char* cadena="123";
    int numero;
    numero=convertir_int_a_char(cadena);
    cout<<"Numero entero: "<<numero<<endl;
    return 0;
}
