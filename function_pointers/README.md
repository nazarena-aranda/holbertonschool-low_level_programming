# Function Pointers in C 🧠✨

## Descripción 📖

Este proyecto explora el concepto de **punteros a funciones** en C, una herramienta poderosa que permite ejecutar funciones dinámicamente según nuestras necesidades.

![Punteros en C](https://inpyjama.com/content/images/2023/11/IMG_0930.jpg)
---

## Estructura del Proyecto 🛠️

### **0. `print_name.c`** 🎨
- **¿Qué hace?**:
  Imprime un nombre de diferentes maneras dependiendo de la función que le pases. 
  Por ejemplo, puedes imprimir el nombre tal cual o en mayúsculas.

![Ejemplo de impresión](https://media.geeksforgeeks.org/wp-content/uploads/20190723103148/NamePointer.png)

---

### **1. `array_iterator.c`** 🔄
- **¿Qué hace?**:
  Aplica una función a cada elemento de un arreglo. Puedes hacer que se impriman como están, en hexadecimal, o cualquier otra operación que definas.

![Arreglos iterados](https://media.geeksforgeeks.org/wp-content/uploads/20190918192327/Pointer.png)

---

### **2. `int_index.c`** 🔍
- **¿Qué hace?**:
  Busca un entero en un arreglo utilizando una función para definir la condición de búsqueda. Por ejemplo, buscar el primer número positivo o un número específico.

![Búsqueda de índices](https://media.geeksforgeeks.org/wp-content/uploads/20221201192427/SearchAlgorithm.png)

---

### **3. Calculadora modular (`3-calc`)** 🧮

Este proyecto incluye varios archivos que juntos crean una calculadora capaz de realizar operaciones matemáticas básicas (`+`, `-`, `*`, `/`, `%`) usando punteros a funciones.

#### **3.1 `3-calc.h`** 🗺️
- **¿Qué hace?**:
  Define las estructuras y prototipos necesarios para que el programa funcione. Es el "mapa" que conecta los operadores (`+`, `-`, `*`, `/`, `%`) con sus funciones.

![Prototipos](https://media.geeksforgeeks.org/wp-content/uploads/20221208182602/FunctionPointers.png)

---

#### **3.2 `3-op_functions.c`** ➕➖✖️➗
- **¿Qué hace?**:
  Implementa las funciones matemáticas que realizan operaciones como suma, resta, multiplicación, división y módulo. También maneja errores como la división por cero.

![Operaciones matemáticas](https://media.geeksforgeeks.org/wp-content/uploads/20190813122200/Operators.png)

---

#### **3.3 `3-get_op_func.c`** 🤖
- **¿Qué hace?**:
  Selecciona qué función ejecutar dependiendo del operador (`+`, `-`, etc.). Es como un cerebro que conecta el operador ingresado con la función correspondiente.

![Selector de funciones](https://media.geeksforgeeks.org/wp-content/uploads/20200317170255/PointersC.png)

---

#### **3.4 `3-main.c`** 🚀
- **¿Qué hace?**:
  Es el punto de entrada del programa. Aquí se reciben los argumentos, se selecciona la operación correcta y se muestra el resultado. También maneja errores como argumentos incorrectos o intentos de dividir por cero.

![Inicio del programa](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fa/HelloWorld_in_C.svg/512px-HelloWorld_in_C.svg.png)

---

## Resumen de las Tareas 🌟

1. **Impresión de nombres (`0-print_name.c`)** 🎨:
   - Imprime un nombre utilizando diferentes funciones para personalizar la salida.

2. **Iteración sobre arreglos (`1-array_iterator.c`)** 🔄:
   - Aplica una función dinámica a los elementos de un arreglo, como imprimirlos de distintas formas.

3. **Búsqueda dinámica (`2-int_index.c`)** 🔍:
   - Encuentra elementos en un arreglo basándose en una condición que decides al ejecutar.

4. **Calculadora modular (`3-calc`)** 🧮:
   - Realiza operaciones matemáticas utilizando operadores (`+`, `-`, `*`, `/`, `%`) y funciones asociadas.

---

## Recursos Adicionales 📚

Si quieres aprender más sobre punteros a funciones, consulta estos recursos:
- [Function Pointers in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to Functions](https://www.tutorialspoint.com/cprogramming/c_function_pointer.htm)
- [Why Pointers to Functions](https://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work)

---

## ¡Gracias por leer! 💻✨
