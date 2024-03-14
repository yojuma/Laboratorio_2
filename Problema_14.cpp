#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> matriz(5, vector<int>(5));

void imprimir_matriz(const vector<vector<int>>& matriz){
    // Función para imprimir una matriz
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
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

void imprimir_original(){
    int contador=1;
    cout<<"Matriz original: "<<endl;
    for (int fila = 0; fila < 5; fila++) {
        for (int columna = 0; columna < 5; columna++) {
                matriz[columna][fila]+=contador;
                contador++;
        }

    }
    imprimir_matriz(matriz);
}

void imprimir_90(){
    int contador=1;
    cout<<"Matriz 90: "<<endl;
    for(int fila = 4; fila >= 0; fila--){
        for(int columna = 0; columna < 5; columna++){
                matriz[columna][fila]=contador;
                contador++;
        }

    }
    imprimir_matriz(matriz);
}

void imprimir_180(){
    int contador=1;
    cout<<"Matriz 180: "<<endl;
    for(int fila = 4; fila >= 0; fila--){
        for(int columna = 4; columna >= 0; columna--){
                matriz[fila][columna]=contador;
                contador++;
        }

    }
    imprimir_matriz(matriz);
}

void imprimir_270(){
    cout<<endl;

    int contador=1;
    cout<<"Matriz 270: "<<endl;
    for(int fila = 0; fila < 5; fila++){
        for(int columna = 4; columna >= 0; columna--){
                matriz[columna][fila]=contador;
                contador++;
        }

    }
    imprimir_matriz(matriz);
}

int ejercicio14(){

    imprimir_original();
    cout<<endl;
    imprimir_90();
    cout<<endl;
    imprimir_180();
    cout<<endl;
    imprimir_270();
    cout<<endl;

    return 0;
}
