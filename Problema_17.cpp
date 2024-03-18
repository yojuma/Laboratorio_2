#include <iostream>
using namespace std;

int divisores(int n){
    // Función para obtener la suma de los divisores propios de un número
    int sumaDivisores = 1;  // Inicializamos con 1 (ya que 1 siempre es divisor)
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores;
}

int suma_amigables(int limite){
    // Función para encontrar la suma de los números amigables menores al límite dado
    int sumaNumerosAmigables = 0;
    for (int a = 2; a < limite; ++a) {
        int b = divisores(a);
        if (a != b && divisores(b) == a) {
            sumaNumerosAmigables += a;
        }
    }
    return sumaNumerosAmigables;
}

int ejercicio17() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int resultado = suma_amigables(numero);
    cout << "El resultado de la suma es: " << resultado << endl;
    return 0;
}

