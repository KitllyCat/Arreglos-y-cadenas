//Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y
//calcular estadísticas de tendencia central media, mediana y moda.
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(NULL)));

    vector<int> numeros;
    for (int i = 0; i < 30; ++i) {
        int num = rand() % 901 + 100;
        numeros.push_back(num);
    }

    cout << "Numeros aleatorios:" << endl;
    for (size_t i = 0; i < numeros.size(); ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (size_t i = 0; i < numeros.size(); ++i) {
        sum += numeros[i];
    }
    double media = static_cast<double>(sum) / numeros.size();

    sort(numeros.begin(), numeros.end());
    double mediana;
    if (numeros.size() % 2 == 0) {
        mediana = (numeros[numeros.size() / 2 - 1] + numeros[numeros.size() / 2]) / 2.0;
    } else {
        mediana = numeros[numeros.size() / 2];
    }

    vector<int> frecuencia(901, 0);
    for (size_t i = 0; i < numeros.size(); ++i) {
        frecuencia[numeros[i] - 100]++;
    }
    int moda = 100, maxFrecuencia = frecuencia[0];
    for (size_t i = 1; i < frecuencia.size(); ++i) {
        if (frecuencia[i] > maxFrecuencia) {
            maxFrecuencia = frecuencia[i];
            moda = i + 100;
        }
    }
	cout << " "<<endl;
    cout << "La media es " << media << " , la mediana es "<< mediana << " y la moda es "<< moda <<endl;
    return 0;
}
