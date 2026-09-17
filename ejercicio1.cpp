#include <iostream>
#include <vector>
#include <algorithm> // para swap

using namespace std;

// Procedimiento BubbleSort
void BubbleSort(vector<int>& lista) {
    int tamano = lista.size(); // tamaño = longitud(lista)
    
    // para i de 0 a tamaño - 1 hacer:
    for (int i = 0; i < tamano - 1; ++i) {
        bool intercambiado = false; // intercambiado = falso
        
        // para j de 0 a tamaño - 1 - i hacer:
        for (int j = 0; j < tamano - 1 - i; ++j) {
            
            // si lista[j] > lista[j + 1] entonces:
            if (lista[j] > lista[j + 1]) {
                // intercambiar lista[j] y lista[j + 1]
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
                
                // Nota: También podrías usar swap(lista[j], lista[j + 1]); de <algorithm>
                
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
    vector<int> miLista = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Lista original: ";
    for (int num : miLista) {
        cout << num << " ";
    }
    cout << endl;
    
    BubbleSort(miLista);
    
    cout << "Lista ordenada: ";
    for (int num : miLista) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
