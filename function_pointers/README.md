# Function Pointers in C

## Descripción 📖

Este proyecto trata sobre **punteros a funciones** en C. Con los punteros a funciones podemos decidir qué función ejecutar en tiempo de ejecución, simplemente pasando su dirección como argumento.

El objetivo principal de esto es aprender a:
- Usar punteros a funciones para resolver problemas de manera modular.
- Entender qué almacenan los punteros a funciones y cómo los usa el programa.
- Ver dónde se almacenan los punteros a funciones en la memoria.

---

## Estructura del Proyecto 🛠️

Este proyecto está dividido en varias tareas, y cada una está implementada en un archivo específico:

### **1 Ejercicio `0-print_name.c`**
- **¿Qué hace?**:
  Esta función imprime un nombre, pero permite elegir cómo se imprime. Recibe un nombre como cadena y un puntero a función que decide el formato de impresión (por ejemplo, tal cual o en mayúsculas).

---

### **2 Ejercicio `1-array_iterator.c`**
- **¿Qué hace?**:
  Este archivo contiene una función que aplica una acción a cada elemento de un arreglo. Puedes pasar cualquier función que actúe sobre un entero (por ejemplo, imprimirlo como está o en hexadecimal).

---

### **3 Ejercicio `2-int_index.c`**
- **¿Qué hace?**:
  Se implementa una función que busca un entero en un arreglo usando un puntero a función para decidir la condición de búsqueda. Por ejemplo, puedes buscar un número específico o el primer número positivo.

---

### **4. Calculadora (`3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`, `3-main.c`)**
En este ejercicio combinamos varios archivos para crear una calculadora básica que usa punteros a funciones para realizar operaciones matemáticas.

#### **4.1 `3-calc.h`**
- **¿Qué hace?**:
  Define la estructura y los prototipos necesarios para que todo el programa funcione. Es como un mapa que conecta los operadores (`+`, `-`, `*`, `/`, `%`) con las funciones que los ejecutan.

#### **4.2 `3-op_functions.c`**
- **¿Qué hace?**:
  Contiene las funciones que realizan las operaciones matemáticas básicas: suma, resta, multiplicación, división y módulo. También maneja errores como la división por cero.

#### **4.3 `3-get_op_func.c`**
- **¿Qué hace?**:
  Este archivo decide qué función ejecutar basándose en el operador que el usuario proporciona (`+`, `-`, etc.). Básicamente, conecta el operador con la función correspondiente.

#### **4.4 Archivo `3-main.c`**
- **¿Qué hace?**:
  Es el punto de entrada del programa. Aquí se reciben los argumentos, se selecciona la operación correcta, y se muestra el resultado. También maneja errores como argumentos incorrecto.

---

## Resumen de todos los ejercicios 🤔

1. **Impresión de nombres (`0-print_name.c`):**
   - Imprimimos un nombre pasando diferentes funciones de impresión.
2. **Iteración sobre arreglos (`1-array_iterator.c`):**
   - Aplicamos diferentes acciones sobre los elementos de un arreglo, como imprimirlos de distintas formas.
3. **Búsqueda dinámica (`2-int_index.c`):**
   - Buscamos elementos en un arreglo usando condiciones que decides al momento de ejecutar.
4. **Calculadora modular (`3-calc`):**
   - Realizamos  operaciones matemáticas pasando operadores y ejecutando las funciones correspondientes.

---


## Recursos Adicionales 📚

Si quieres profundizar más en el tema, aquí hay algunos recursos útiles:
- [Function Pointers in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to Functions](https://www.tutorialspoint.com/cprogramming/c_function_pointer.htm)
- [Why Pointers to Functions](https://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work)
