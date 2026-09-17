#include <iostream>
#include <vector>

// Procedimiento InsertionSort
void InsertionSort(std::vector<int>& lista) {
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
    std::vector<int> miLista = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "Lista original: ";
    for (int num : miLista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    InsertionSort(miLista);
    
    std::cout << "Lista ordenada: ";
    for (int num : miLista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
