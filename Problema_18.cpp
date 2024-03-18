#include <iostream>
#include <algorithm>     //usamos next_permutation() para arrojar la proxima permutacion disponible en el rango inicial y final (n)
using namespace std;     //por ello usamos .begin() y .end(), porque arrojan el principio y el final del numero

/*int ejercicio18() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    string digits = "0123456789";


    for (int i = 1; i < n; ++i) {
        if (!next_permutation(digits.begin(), digits.end())) {
            cout << "Error: El valor de n es demasiado grande." << endl;
            return 1;
        }
    }

    cout << "La permutacion numero " << n << " es: " << digits << endl;
    return 0;
}*/



