//Calcular la suma de elementos positivos y negativos en un arreglo}
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Indique la cantidad de elementos que desea ingresar: ";
	cin >> n;
	int arreglo[n];
	cout << endl;
	
	int sumanegativos=0, sumapositivos=0;
	for(int i=0; i<n; i++){
		cout << "Elemento " << i+1 << ": ";
		cin >> arreglo[i];
		if(arreglo[i]>0){
			sumapositivos+=arreglo[i];
		} else{
			sumanegativos+=arreglo[i];
		}
	}
	
	cout << endl;
	cout << "La suma de los elementos positivos es de " << sumapositivos << " y de los elementos negativos es de "<< sumanegativos<<endl;
	return 0;
}

