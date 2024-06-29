/*Convertir palabras a mayusculas iniciales: "caceres patrimonio de la humanidad" Å® "Caceres Patrimonio De La Humanidad"*/
#include <iostream>
#include <string.h>

using namespace std;

void convertirMayusculasIniciales(char* frase) {
    bool nuevaPalabra = true;

    for (int i = 0; frase[i] != '\0'; ++i) {
        if (isalpha(frase[i])) {
            if (nuevaPalabra) {
                frase[i] = toupper(frase[i]);
                nuevaPalabra = false;
            } else {
                frase[i] = tolower(frase[i]);
            }
        } else {
            nuevaPalabra = true;
        }
    }
}

int main() {
	
    char fraseOriginal[] = "caceres patrimonio de la humanidad";
    
    convertirMayusculasIniciales(fraseOriginal);

    cout << "Frase convertida: " << fraseOriginal << endl;
    
    return 0;
}
