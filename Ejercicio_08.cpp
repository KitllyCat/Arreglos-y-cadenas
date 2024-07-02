//Comprobar si un número de 10 cifras es capicúa usando un vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
    long long int numero;
    cout << "Introduce un numero de 10 cifras: ";
    cin >> numero;

    while (numero < 1000000000 || numero > 9999999999) {
        cout << "Introduce un numero de 10 cifras: ";
        cin >> numero;
    }

    vector<int> vec; 
    while (numero > 0){ 
        vec.push_back(numero % 10);
        numero /= 10;
    }

    vector<int> vecReverso = vec;
    reverse(vecReverso.begin(), vecReverso.end());
	
	cout << endl;
	cout << " " << endl;
    if (vec == vecReverso) { 
        cout << "Es un numero capicuo" << endl;
    } else {
        cout << "No es un numero capicuo" << endl;
    }
    
    return 0;
}
