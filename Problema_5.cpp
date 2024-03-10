#include <iostream>
using namespace std;

string convertir_int_a_char(int numero){
    string texto = to_string(numero);
    const char* numero_en_char = texto.c_str(); //c_str() devuelve un const char para poderlo guardar en un puntero
    return numero_en_char;
}

int ejercicio5() {
    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;
    string cadena=convertir_int_a_char(numero);
    cout << "El numero como cadena es: " <<cadena<<endl;
    return 0;
}
