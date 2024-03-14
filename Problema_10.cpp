#include <iostream>
#include <string>
using namespace std;

int letra_romana_a_valor(char c){
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}

int romana_a_arabico(string& romana) {
    int result = 0;
    int valorprev = 0;

    for (char c : romana) {
        int valor = letra_romana_a_valor(c);
        result += valor;

        if (valor > valorprev) {
            result -= 2 * valorprev; // Restar el numero anterior
        }

        valorprev = valor;  //guardar el numero anterior
    }

    return result;
}

int ejercicio10() {
    string numero_romano;
    cout << "Ingresa un numero romano: ";
    cin >> numero_romano;

    int numero_arabico=romana_a_arabico(numero_romano);
    cout<<"El numero ingresado fue: "<<numero_romano<<" Que corresponde a: "<<numero_arabico<<endl;

    return 0;
}
