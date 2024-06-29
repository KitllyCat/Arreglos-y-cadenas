#include <iostream>
using namespace std;

int main() {
    string entrada;
    cout << "Ingresa una frase: ";
    getline(cin, entrada);

    int inicio = 0;
    for (int i = 0; i <= entrada.length(); i++) {
        if (entrada[i] == ' ' || entrada[i] == '\0') {
            for (int j = inicio; j < i; j++) {
                cout << entrada[j];
            }
            cout << endl;
            inicio = i + 1;
        }
    }

    return 0;
}
