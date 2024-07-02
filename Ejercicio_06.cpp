//Calcular la suma de componentes de índice par e impar en un vector
#include <iostream>
#include <vector>
using namespace std;

int main() {

	int sum_pares = 0;
    int sum_impares = 0;
    
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);
    
    for (size_t i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            sum_pares += vec[i];
        } else {
            sum_impares += vec[i];
        }
    }
    
    cout << "Suma de componentes en indices pares: " << sum_pares << endl;
    cout << "Suma de componentes en indices impares: " << sum_impares << endl;

    return 0;
}

