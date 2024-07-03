//Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, false en caso contrario
#include <iostream>
#include <vector>
using namespace std;

bool estaOrdenado(const vector<int>& vec, int longitud) {
	
    for (int i=0; i<longitud-1; i++) { 
        if (vec[i] > vec[i+1]){ 
            return false;
        }
    }
    return true;
}

int main() {
	
    vector<int> miVector;
    int longitud;
    int numero;
    
    cout << "Ingrese la cantidad de elementos del vector a analizar: ";
    cin >> longitud;

    cout << "Ingrese los elementos del vector: " << endl << endl;
    for (int i=0; i<longitud; i++) {
    	cout << "Elemento " << i+1 << ": ";
        cin >> numero;
        miVector.push_back(numero);
    }

    if (estaOrdenado(miVector, longitud)) {
        cout << "El vector esta correctamente ordenado" << endl;
    } else {
        cout << "El vector no esta ordenado" << endl;
    }

    return 0;
}

