//Leer una l�nea de entrada. Descartar todos los s�mbolos excepto los d�gitos. Convertir la cadena de d�gitos en un entero y fijar
//el valor del entero a la variable n y finalmente sumarle 2 (las funciones atoi y isdigit te pueden ayudar para este prop�sito)
//Ejemplo: �En aproximadamente 120 d�as llegaremos al a�o 2022 y festejaremos� 1202022 -> 1202024
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string input;
    cout << "Ingresa cualquier linea de texto: ";
    getline(cin, input);

    string digits_only = "";
    for (size_t i = 0; i < input.size(); ++i) {
        if (isdigit(input[i])) {
            digits_only += input[i];
        }
    }

    int n = 0;
    if (!digits_only.empty()) {
        n = atoi(digits_only.c_str());
        n += 2;
    }

    cout << "El valor original de digitos: " << digits_only << endl;
    cout << "El valor de n + 2: " << n << endl;

    return 0;
}

