//Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de numeros para contabilizar: ";
    cin >> n;

    while (n <= 0) {
        cout << "Invalido. Intente de nuevo: ";
        cin >> n;
    }
	
	cout << endl;
    int numeros[n];
    cout << "Ingrese los numeros:" << endl << endl;
    for (int i = 0; i < n; ++i) {
    	cout << "- ";
        cin >> numeros[i];
    }

    int mayor = numeros[0], menor = numeros[0];
    int contadorMayor = 1, contadorMenor = 1;;

    for (int i=1; i<n; i++){
    	if(numeros[i] > mayor){ 
    		mayor = numeros[i]; 
    		contadorMayor=1; 
		} else if (numeros[i] == mayor){
			contadorMayor++;
		}
		
		if(numeros[i] < menor){
			menor = numeros[i]; 
			contadorMenor=1;
		} else if (numeros[i] == menor){
			contadorMenor++;
		}
	}
	
	cout << endl;
    cout << "El mayor numero de los ingresados es " << mayor << " , pues se repite "<< contadorMayor << " veces." << endl << endl;
    cout << "El menor numero de los ingresados es " << menor << " , pues se repite "<< contadorMenor << " veces." << endl << endl;

    return 0;
}
