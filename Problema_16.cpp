#include <iostream>
using namespace std;


unsigned long long factorial(int n){
    // Función para calcular el factorial de un número
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


unsigned long long combinacion(int n, int k){
    // Función para calcular combinaciones
    return factorial(n) / (factorial(k) * factorial(n - k));   //Combinaciones = 2n!/k!×(n−k)! usamos 2 por la cantidad de movimientos
}


int ejercicio16(){
    int n;
    cout << "Ingrese el tamano de la malla (n): ";
    cin >> n;

    // Calculamos el número de caminos usando la fórmula de combinaciones
    unsigned long long caminos = combinacion(2*n, n);

    cout << "Para una malla de " << n << "x" << n << " puntos hay " << caminos << " caminos." << endl;

    return 0;
}
