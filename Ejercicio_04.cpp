//Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> nombres;
    string nombre;

    cout << "Ingresa un nombre (finaliza con la palabra 'fin'): ";
    while (cin >> nombre && nombre != "fin") {
        nombres.push_back(nombre);
        cout << "Ingresa otro nombre (o 'fin' para terminar): ";
    }

    sort(nombres.begin(), nombres.end());

    cout << "\nLos nombres ordenados alfabeticamente:" << endl;
    for (size_t i = 0; i < nombres.size(); ++i) {
        cout << nombres[i] << endl;
    }

    return 0;
}
