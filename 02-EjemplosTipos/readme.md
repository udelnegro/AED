# Ejemplos de Valores y Operaciones de Tipos de Datos

---

## Analisis del problema

### Enunciado del problema

Realizar un trabajo no estructurado, que consiste en escribir un programa que
ejemplifique el uso de los tipos de datos básicos de C++ vistos en clase:

- bool
- char
- unsigned
- int
- double 
- string

**Limitaciones Extras**

- No utilice **cout** y sí utilice **assert** para las pruebas.

### Hipótesis 

Hay que ejemplificar cada tipo de datos básicos como mínimo y además demostrar alguna operación con ellos.
Cada tipo de dato tiene un tipo de valor, en caso del int sería entero, o el double un valor real, etc.
No será posible imprimir por pantalla por la restrincción de la utilización del **std::cout**, mismo motivo por el cual no usamos el **printf** del lenguaje C. 
Teniendo en claro que no habrá salida el objetivo principal, además de ejemplificar, se torna a que no haya salida por parte del **assert**, si esto sucede es que hay un error. 

---

## Diseño de la solución

### Léxico del Algoritmo

El léxico de nuestro algoritmo va a incluir los dominions de los tipos de datos:

- Números reales (Incluidos en el , naturales , enteros, racionales, y demás)
- El Código ASCII

### Representación textual del algoritmo 

1. Defino una variable y le asigno un valor 
2. Defino otra variable que el (1) y le asigno otro valor (AMBAS SON DEL MISMO TIPO)
3. Utilizo las operaciones para crear otra variable o para verificarla dentro del **assert**
// EN CASO DE NO HABER UTILIZADO OPERACIONES PARA CREAR UNA TERCER VARIABLE SALTAR PASO 3
4. Utilizo el **assert** y le defino una condición **//Si está no se cumple al ejecutar el programa abortara y imprime por pantalla el error y su ubicación. Caso contrario el programa ejectutará correctamente y no imprime nada.**
5. Repito el proceso **//Repetimos el proceso para algunos tipos de datos, o para todos, eso queda a elección propia. En algunas con una variable puedo ejemplificar. 

### Solución Explicada 

1. Definimos los include que utilizaremos en este caso utilizamos el #Include <iostream> y el #Include <cassert>
  //Estas nos permiten utilizar mas adelante algunas funciones como el assert <cassert>
  //O imprimir en pantalla si quisieramos, y utilizar el using namespace std <iostream> 
2. Llamamos a la biblioteca "using namespace std"
  //Lo que hara que a la hora de utilizar los strings no tenga que poner `std::string`
3. Abrimos la función int main(){ y escribimos el bloque de código
4. Creamos variables y le asignamos valores
5. Con todas las variables definidas pasamos a realizar algunas operaciones fuera del "assert"
6. Llamamos a la función assert y le ponemos la condición para que ejecute el programa correctamente, con la operación que queramos
7. Ponemos un **return 0**

---

## CREDITO EXTRA 

¿Son esos realmente todos los tipos que vimos en clase? Justifique.

No, nos son los únicos de tipos de datos que existen, en sí todo puede ser considerado un tipo de dato
    Pero para dar ejemplos más directos de otros tipos de datos tenemos por ejemplo:

    - Float, es un dato real de precisión simple
    - Date, se utiliza para las fechas
    - Money o Currency, se utiliza para lo financiero
    - Numeros complejos, se utiliza para representar numeros complejos, valga la redundancia
    Entre otros... 
