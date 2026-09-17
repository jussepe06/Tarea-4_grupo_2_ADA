#include <iostream>
#include <vector>
#include <algorithm> // para std::swap

// Procedimiento BubbleSort
void BubbleSort(std::vector<int>& lista) {
    int tamano = lista.size(); // tamaño = longitud(lista)
    
    // para i de 0 a tamaño - 1 hacer:
    for (int i = 0; i < tamano; ++i) {
        bool intercambiado = false; // intercambiado = falso
        
        // para j de 0 a tamaño - 1 - i hacer:
        for (int j = 0; j < tamano - 1 - i; ++j) {
            // si lista[j] > lista[j + 1] entonces:
            if (lista[j] > lista[j + 1]) {
                // intercambiar lista[j] y lista[j + 1]
                std::swap(lista[j], lista[j + 1]);
                intercambiado = true; // intercambiado = verdadero
            }
        }
        
        // si no se ha realizado ningún intercambio en esta iteración, salir del bucle
        if (!intercambiado) {
            break; 
        }
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
    
    BubbleSort(miLista);
    
    std::cout << "Lista ordenada: ";
    for (int num : miLista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
