#include <iostream>
#include <vector>

using namespace std;

// Procedimiento InsertionSort
void InsertionSort(vector<int>& lista) {
    int tamano = lista.size(); // tamaño = longitud(lista)
    
    // para i de 1 a tamaño - 1 hacer:
    // Nota: ir hasta tamaño - 1 inclusive es igual a iterar mientras i < tamano
    for (int i = 1; i < tamano; ++i) {
        int valor_actual = lista[i]; // valor_actual = lista[i]
        int j = i - 1; // j = i - 1
        
        // mientras j >= 0 y lista[j] > valor_actual hacer:
        while (j >= 0 && lista[j] > valor_actual) {
            lista[j + 1] = lista[j]; // lista[j + 1] = lista[j]
            j = j - 1; // j = j - 1
        }
        
        // lista[j + 1] = valor_actual
        lista[j + 1] = valor_actual;
    }
}

int main() {
    // Ejemplo de uso
    vector<int> miLista = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Lista original: ";
    for (int num : miLista) {
        cout << num << " ";
    }
    cout << endl;
    
    InsertionSort(miLista);
    
    cout << "Lista ordenada: ";
    for (int num : miLista) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
