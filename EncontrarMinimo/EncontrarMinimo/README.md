# Encontrar el Número Más Pequeño en una Matriz en C++

Este programa en C++ permite encontrar el número más pequeño dentro de una matriz bidimensional. Es un ejemplo que muestra cómo trabajar con matrices, bucles anidados y comparaciones para resolver problemas básicos de manipulación de datos.

## Propósito del Código

El propósito del programa es buscar el número más pequeño dentro de una matriz de enteros de tamaño fijo. Esto se logra utilizando una función que recorre todos los elementos de la matriz y determina el valor mínimo.

## ¿Qué incluye el código?

1. **Declaración de la Matriz**
   - Se define una matriz de tamaño fijo (`FILAS` x `COLUMNAS`) e inicializada con valores predefinidos:
     ```cpp
     int matriz[FILAS][COLUMNAS] = {{5, 3, 8}, {2, 7, 4}, {6, 1, 9}};
     ```

2. **Función para Encontrar el Mínimo**
   - La función `encontrarMinimo(int matriz[][COLUMNAS])` toma como entrada una matriz bidimensional.
   - Inicializa el valor mínimo con el primer elemento de la matriz y utiliza bucles anidados para recorrer cada posición, actualizando el valor mínimo cuando encuentra un número más pequeño:
     ```cpp
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
     ```

3. **Llamada a la Función**
   - El programa llama a la función `encontrarMinimo` pasando la matriz como argumento para obtener el número más pequeño:
     ```cpp
     int minimo = encontrarMinimo(matriz);
     ```

4. **Salida del Resultado**
   - El programa imprime en la consola el valor mínimo encontrado en la matriz:
     ```plaintext
     El elemento mas pequeño en la matriz es: 1
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el archivo fuente:
     ```bash
     g++ EncontrarMinimo.cpp -o EncontrarMinimo
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./EncontrarMinimo
     ```

3. **Salida Esperada**
   - Para la matriz predefinida en el programa, el resultado será:
     ```plaintext
     El elemento mas pequeño en la matriz es: 1
     ```

## Características Técnicas

- **Matriz Bidimensional:** Trabaja con matrices de tamaño fijo (`FILAS` x `COLUMNAS`).
- **Búsqueda Iterativa:** Usa bucles anidados para recorrer cada posición de la matriz.
- **Función Modular:** Encapsula la lógica de búsqueda en una función reutilizable.
- **Interfaz Clara:** Imprime el número más pequeño en la consola de forma clara y directa.

## Ejemplo de Personalización

Puedes modificar los valores de la matriz para adaptarla a otros casos de prueba. Por ejemplo:
```cpp
int matriz[FILAS][COLUMNAS] = {{12, 15, 8}, {5, 20, 10}, {14, 9, 7}};
