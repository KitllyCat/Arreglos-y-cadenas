//Contar la ocurrencia de una letra específica en una cadena de entrada...
#include <iostream>
#include <cstring>

using namespace std;

int ContarRepeticiones(const char* palabra, char letra) {
    int contador = 0;
    const char* pos = strchr(palabra, letra);
    while (pos != NULL) {
        contador++;
        pos = strchr(pos + 1, letra);
    }
    return contador;
}

int main() {
    char palabra[100];
    char letra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;
    cout << "Ingrese una letra para contar sus repeticiones: ";
    cin >> letra;

    int Repeticiones = ContarRepeticiones(palabra, letra);
    cout << "La letra '" << letra << "' aparece " << Repeticiones << " veces en la palabra." << endl;

    return 0;
}
