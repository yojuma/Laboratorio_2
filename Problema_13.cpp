#include <iostream>
#include <vector>
using namespace std;

// Función para verificar si un elemento representa una estrella
bool esEstrella(int a, int b, int c, int d, int e){
    return (a + b + c + d + e) / 5 > 6;
}

// Función para contar estrellas en la matriz
int contarEstrellas(int* matriz, int filas, int columnas){
    int contadorEstrellas = 0;

    for (int fila = 1; fila < filas - 1; fila++) {
        for (int columna = 1; columna < columnas - 1; columna++) {
            int valorActual = matriz[fila * columnas + columna];
            int valorIzquierda = matriz[fila * columnas + (columna - 1)];
            int valorDerecha = matriz[fila * columnas + (columna + 1)];
            int valorArriba = matriz[(fila - 1) * columnas + columna];
            int valorAbajo = matriz[(fila + 1) * columnas + columna];

            if (esEstrella(valorActual, valorIzquierda, valorDerecha, valorArriba, valorAbajo)) {
                contadorEstrellas++;
            }
        }
    }

    return contadorEstrellas;
}

int ejercicio13() {
    // Ejemplo de matriz (debes proporcionar la matriz real)
    int matriz[] = {
        0, 3, 4, 0, 0, 0, 6, 8,
        5, 1, 3, 6, 0, 0, 0, 2,
        2, 6, 2, 7, 3, 0, 1, 0,
        0, 0, 4, 15, 4, 1, 6, 0,
        0, 0, 7, 12, 6, 9, 10, 4,
        5, 0, 6, 10, 6, 4, 8, 0
    };

    int filas = 6;
    int columnas = 8;

    int estrellasEncontradas = contarEstrellas(matriz, filas, columnas);
    cout << "Número de estrellas encontradas: " << estrellasEncontradas << endl;

    return 0;
}
