#include <iostream>
using namespace std;
const int FILAS = 3;
const int COLUMNAS = 3;
// Funcion para encontrar el elemento mas pequeño en una matriz
int encontrarMinimo(int matriz[][COLUMNAS]) {
int minimo = matriz[0][0];
for (int i = 0; i < FILAS; ++i) {
for (int j = 0; j < COLUMNAS; ++j) {
if (matriz[i][j] < minimo) {
minimo = matriz[i][j];
}
}
}
return minimo;
}
int main() {
int matriz[FILAS][COLUMNAS] = {{5, 3, 8}, {2, 7, 4}, {6, 1, 9}};
// Llamada a la funcion para encontrar el elemento mas pequeÃ±o
int minimo = encontrarMinimo(matriz);
// Imprimir el resultado
cout << "El elemento mas pequeño en la matriz es: " << minimo << endl;
return 0;
}

