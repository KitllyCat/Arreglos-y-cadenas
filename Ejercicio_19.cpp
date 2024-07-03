//Escribir un programa que dada una frase, determine si es un pal�ndromo o no. Un pal�ndromo es una frase que,
//atendiendo s�lo a sus letras e ignorando los espacios, acentos, signos de puntuaci�n y tipo de letra (may�scula o min�scula)
//expresa lo mismo le�da de izquierda a derecha que de derecha a izquierda. �d�bale arroz a la zorra el abad�.
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string limpiarFrase(const string& frase) {
    string limpia;
    for (size_t i = 0; i < frase.length(); ++i) {
        char c = frase[i];
        if (isalpha(c)) {
            limpia += tolower(c);
        }
    }
    return limpia;
}

bool esPalindromo(const string& frase) {
    string limpia = limpiarFrase(frase);
    int izquierda = 0;
    int derecha = limpia.length() - 1;
    
    while (izquierda < derecha) {
        if (limpia[izquierda] != limpia[derecha]) {
            return false;
        }
        izquierda++;
        derecha--;
    }
    return true;
}

int main() {
    string frase;
    cout << "Ingrese cualquier frase para verificar si es un palindromo: ";
    getline(cin, frase);
    
    if (esPalindromo(frase)) {
        cout << "La frase si es un palindromo" << endl;
    } else {
        cout << "La frase no es un palindromo" << endl;
    }
    
    return 0;
}

