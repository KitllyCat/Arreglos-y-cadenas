//Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las cadenas son iguales,
//1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de String.h
#include <iostream>
using namespace std;

int mistrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }

    if (*str1 > *str2) {
        return 1;
    } else if (*str1 < *str2) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    const char* str1 = "Hola";
    const char* str2 = "Mundo";
    const char* str3 = "Hola";
    const char* str4 = "Cualquier cosa";

    cout << "Comparamos " << str1 << " y " << str2 << " = " << mistrcmp(str1, str2) << endl;
    cout << "Comparamos " << str1 << " y " << str3 << " = " << mistrcmp(str1, str3) << endl;
    cout << "Comparamos " << str3 << " y " << str1 << " = " << mistrcmp(str3, str1) << endl;
    cout << "Comparamos " << str1 << " y " << str4 << " = " << mistrcmp(str1, str4) << endl;

    return 0;
}

