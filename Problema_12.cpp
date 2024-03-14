#include <iostream>
#include <vector>

using namespace std;


void imprimirMatriz(const vector<vector<int>>& matriz,int tamano){ //vector de vectores enteros
    // Función para imprimir una matriz
    for(int i=0;i<tamano;i++){
        for(int j=0;j<tamano;j++){
            if(matriz[i][j]<=9){
                cout<<"["<<matriz[i][j]<<" ]"<<" ";
            }
            else{
                cout<<"["<<matriz[i][j]<<"]"<<" ";
            }
        }
        cout<<endl;
    }
}


bool esCuadradoMagico(const vector<vector<int>>& matriz){
    // Función para verificar si una matriz es un cuadrado mágico
    int tamano = matriz.size();
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;

    // Calcula la suma de la diagonal principal y secundaria
    for (int i = 0; i < tamano; i++) {
        sumaDiagonalPrincipal += matriz[i][i];
        sumaDiagonalSecundaria += matriz[i][tamano - i - 1];
    }

    // Verifica si todas las filas y columnas tienen la misma suma
    for (int i = 0; i < tamano; i++) {
        int sumaFila = 0;
        int sumaColumna = 0;
        for (int j = 0; j < tamano; j++) {
            sumaFila += matriz[i][j];
            sumaColumna += matriz[j][i];
        }
        if (sumaFila != sumaDiagonalPrincipal || sumaColumna != sumaDiagonalPrincipal) {
            return false;
        }
    }

    // Verifica si las sumas de las diagonales son iguales
    return sumaDiagonalPrincipal == sumaDiagonalSecundaria;
}

int ejercicio12(){
    int tamano;
    cout << "Ingrese el tamano de la matriz cuadrada: ";
    cin >> tamano;

    vector<vector<int>> matriz(tamano, vector<int>(tamano));

    cout << "Ingrese los elementos de la matriz: " << endl;
    for (int fila = 0; fila < tamano; fila++) {
        for (int columna = 0; columna < tamano; columna++) {
            cin >> matriz[fila][columna];
        }
    }

    cout << "La matriz ingresada fue:" << endl;
    imprimirMatriz(matriz,tamano);

    if(esCuadradoMagico(matriz)==true){
        cout << "La matriz es un cuadrado magico" << endl;
    } else {
        cout << "La matriz no es un cuadrado magico." << endl;
    }

    return 0;
}
