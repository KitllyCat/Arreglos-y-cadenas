//Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h
#include <iostream>
using namespace std;

void mistrcpy(char* str1, const char* str2) {
	
	int i;
	for(i=0; str2[i]!='\0'; i++){
		str1[i]=str2[i];
    }

    str1[i]='\0';
}

int main() {
	
    char str1[100];
    char str2[100];
    
    cout << "Ingrese str1: ";
    cin >> str1;
    cout << "Ingrese str2: ";
    cin >> str2;
    cout << endl;
    
    mistrcpy(str1, str2);
    
    cout << "Ahora str1 paso a ser str2" << endl << endl;
    cout << "str1 es: " << str1 << endl;
    cout << "str2 es: " << str2 << endl;

    return 0;
}
