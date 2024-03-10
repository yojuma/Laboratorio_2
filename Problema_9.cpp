#include<iostream>
using namespace std;

int ejercicio9() {
    int n;
    cout << "Ingresa el valor de n: ";
    cin >> n;

    string cadena;
    cout << "Ingresa una cadena de caracteres numericos: ";
    cin >> cadena;
    cout<<"Original: " <<cadena<<endl;

    // Asegurarnos de que la cadena tenga una longitud múltiplo de n
    while (cadena.length() % n != 0) {
        cadena = "0" + cadena; // Agregar ceros a la izquierda
    }

    int suma = 0;
    for (int i = 0; i < cadena.length(); i += n) {
        string numero_str = cadena.substr(i, n);
        int numero = stoi(numero_str); // Convertir a entero
        suma += numero;
    }


    cout<<"Suma: "<<suma<<endl;

    return 0;
}
