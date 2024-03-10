#include <iostream>
#include <vector>
using namespace std;

// Tamaño de la sala
const int filas = 15;
const int asientos_por_fila = 20;


vector<vector<bool>>asientos(filas,vector<bool>(asientos_por_fila, false)); //iniciamos un vector de vectores, de asientos y filas

void mostrarSala() {
    cout << "Estado de la sala:" << endl;
    cout<<endl;
    for (int fila = 0; fila < filas; ++fila){
        for (int asiento = 0; asiento < asientos_por_fila; ++asiento){
            if(asientos[fila][asiento]==true){
                cout << "[+] "; // Asiento reservado
            }
            else{
                cout << "[-] "; // Asiento disponible
            }
        }
        cout<<endl;
    }
}

void reservarAsiento(int fila, int asiento) {
    if (fila >= 1 && fila <= filas && asiento >= 1 && asiento <= asientos_por_fila) {
        if (asientos[fila - 1][asiento - 1]==false) { //verifica que el asiento esté libre==false
            asientos[fila - 1][asiento - 1] = true;   //lo convierte a reservado==true
            cout << "Asiento reservado exitosamente." <<endl;
        }
        else{
            asientos[fila - 1][asiento - 1]=false;
            cout << "El asiento ha sido cancelado." <<endl;
        }
    }
    else{
        cout << "Fila o numero de asiento invalido." <<endl;
    }
}

int ejercicio11(){
    char fila;
    int numero_asiento;

    mostrarSala();

    while(true){
        cout<<endl;
        cout << "Ingresa la fila (A-O) y el numero del asiento (1-20): ";
        cin >> fila >> numero_asiento;

        if (isalpha(fila)){
            fila = toupper(fila) - 'A' + 1;            //calcula el numero de la fila Ej. C=3
            reservarAsiento(fila, numero_asiento);
            mostrarSala();
        }
        else{
            cout << "Entrada invalida. Debes ingresar una letra de A a O." << endl;
            return 0;
        }
    }
    return 0;
}

