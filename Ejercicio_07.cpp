//Invertir un vector e imprimirlo.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
    int arr[] = {1, 2, 3, 4, 5};
    int arr_tamano = sizeof(arr) / sizeof(int); 
	
    vector<int> vec(arr, arr + arr_tamano);
    reverse(vec.begin(), vec.end());

    cout << "Vector normal: 1 2 3 4 5" << endl << endl;
	cout << "Vector invertido: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

