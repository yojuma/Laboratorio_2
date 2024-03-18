#include <iostream>
using namespace std;

// Estructura para representar un rectángulo
struct Rectangle {
    int x, y;
    int ancho, alto;
};


Rectangle encontrar_interseccion( Rectangle& A,  Rectangle& B){
    // Función para encontrar la intersección de dos rectángulos
    int x1 = max(A.x, B.x);
    int y1 = max(A.y, B.y);
    int x2 = min(A.x + A.ancho, B.x + B.ancho);
    int y2 = min(A.y + A.alto, B.y + B.alto);

    if (x1 >= x2 || y1 >= y2) {
        // No hay intersección
        return {0, 0, 0, 0};
    }

    return {x1, y1, x2 - x1, y2 - y1};

}

int ejercicio15() {
    Rectangle A, B;

    cout << "Ingrese las coordenadas x e y del rectangulo A: ";
    cin >> A.x >> A.y;
    cout << "Ingrese el ancho y la altura del rectangulo A: ";
    cin >> A.ancho >> A.alto;

    cout << "Ingrese las coordenadas x e y del rectangulo B: ";
    cin >> B.x >> B.y;
    cout << "Ingrese el ancho y la altura del rectangulo B: ";
    cin >> B.ancho >> B.alto;

    Rectangle C = encontrar_interseccion(A, B);
    cout << "___________________________________________________"<<endl;
    cout << "Rectangulo de interseccion (x, y, ancho, altura): "
         << "["<<C.x << ", " << C.y << ", " << C.ancho << ", " << C.alto<<"]"<< endl;
    cout<<endl;

    return 0;
}
