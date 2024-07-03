//Dada una frase comprobar si el balanceo de los paréntesis es correcto. Es decir, “(ccc(ccc)cc((ccc(c))))” es correcto,
//pero “)ccc(ccc)cc((ccc(c)))(“ no lo es, aunque tenga el mismo número de paréntesis abiertos que cerrados.
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool verificarBalanceoParentesis(const string& expresion) {
    stack<char> pila;

    for (size_t i = 0; i < expresion.length(); ++i) {
        char caracter = expresion[i];
        if (caracter == '(') {
            pila.push(caracter);
        } else if (caracter == ')') {
            if (pila.empty() || pila.top() != '(') {
                return false;
            }
            pila.pop();
        }
    }
    return pila.empty();
}

int main() {
    string expresion;

    cout << "Introduce una expresion con parentesis para verificar su balanceo en ello: ";
    getline(cin, expresion);

    if (verificarBalanceoParentesis(expresion)) {
        cout << "La expresion si esta balanceada" << endl;
    } else {
        cout << "La expresion no esta balanceada" << endl;
    }
    return 0;
}

