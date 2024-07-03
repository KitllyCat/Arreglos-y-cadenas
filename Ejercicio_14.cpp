//Generar la función mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de String.h
#include <iostream>
using namespace std;

void mistrcat(char* str1, const char* str2) {

    int tamano_str1 = 0;
    while (str1[tamano_str1] != '\0') { 
        tamano_str1++;
    }
	
    int i = 0;
    int j = tamano_str1;

    while (str2[i] != '\0') {
        str1[j] = str2[i];
        i++;
        j++;
    }
    
    str1[j] = '\0';
}

int main() {
	
    char str1[100];
    char str2[100];

    cout << "Ingrese str1: ";
    cin >> str1;
    cout << "Ingrese str2: ";
    cin >> str2;
    cout << endl;


    mistrcat(str1, str2);  
    cout << "La union de ambos str1 en un solo es " << str1 << endl;

    return 0;
}
