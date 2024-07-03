//Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido pertenece a esa persona.
#include <iostream>
#include <string>
using namespace std;

bool verificaApellido(const string& nombreCompleto, const string& apellido) {
	
    size_t pos = nombreCompleto.find(apellido);

    if (pos != string::npos) {
        if (pos + apellido.length() == nombreCompleto.length() || nombreCompleto[pos + apellido.length()] == ' ') {
            return true;
        }
    }

    return false;
}

int main() {
    string nombreCompleto;
    string apellido;

    cout << "Introduce el nombre completo ";
    getline(cin, nombreCompleto);
    cout << "Introduce el apellido para verificar ";
    getline(cin, apellido);
	
	cout << endl;
	
    if (verificaApellido(nombreCompleto, apellido)) {
        cout << "El apellido si pertenece a la persona" << endl;
    } else {
        cout << "El apellido no pertenece a la persona" << endl;
    }

    return 0;
}

