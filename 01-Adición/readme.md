# 01- Adición
---

## **Etapa #1 Análisis del problema**

### **Transcripción del problema**

- Mostrar la suma de dos números enteros, ingresados por el usuario

### **Refinamiento e Hipótesis de trabajo**

-Refinamiento del problema: Programa que sea capaz de realizar la adición de dos números enteros ingresados por él usuario.

-Hipótesis: Se le pedirá al usuario que ingrese los valores por consola. Una vez ingresados comenzara a realizar la adición de los valores y mostrará el resultado en la consola. 
*NOTA: Para que los valores sean válidos tienen que pertenecer al grupo de los enteros*

***Acotación***: *Esta fase nos permite definir la idea clara de que es lo necesitamos y proyectar la forma que va a trabajar el programa*

### **Modelo IPO**

Este lo utilizamos para darle dominio a nuestro problema como los pasos anteriores pero esta vez de una manera mas visual

![MODELO IPO](https://github.com/udelnegro/Imagenes/blob/master/01-Adici%C3%B3n/Modelo%20IPO/MODELO%20IPO.jpg) 

---

# **Etapa #2: Diseño de la solución del problema**

## **Léxico**

Llamamos léxico a la definición de elementos utilizados en el algoritmo, es decir, le damos un dominio a la solución pensandola como una función matemática podriamos decir que para nuestra función que:

***a,b e Z*** 

***NOTA: TOMAMOS A "e" como el símbolo pertenece*** 

## **Representación del Algoritmo**

### **Representación Visual** 

Hay varias formas de representarlas visualmente pero yo elegí dos, demostradas a continuación:

Pseudocódigo:

![PseudoCódigo](https://github.com/udelnegro/Imagenes/blob/master/01-Adici%C3%B3n/Representaci%C3%B3n%20Visual%20del%20Algoritmo/Pseudoc%C3%B3digo.png)

Diagrama de Flujo:

![Diagrama de Flujo](https://github.com/udelnegro/Imagenes/blob/master/01-Adici%C3%B3n/Representaci%C3%B3n%20Visual%20del%20Algoritmo/Diagrama%20de%20Flujo/Diagrama%20de%20flujo.jpg)

### **Representación Textual**

La podemos representar enumerando los pasos y escribiendolo de manera sencilla

1. Leer un entero y almacenarlo en A
2. Leer un entero y almacenarlo en B
3. Escribir A+B

O también lo podemos representar de la forma Textual C++

~~~
int main () {

    int ValorA ; 
    int ValorB ;
    
    std::cout << "Ingrese el primer valor entero a sumar \n" ; 
    std::cin >> ValorA ;    
    std::cout << "Ingrese el segundo valor entero a sumar \n" ;
    std::cin >> ValorB ;
    std::cout << "Su Respuesta = " ; 
    std::cout << ValorA + ValorB ;        

 } 
 ~~~
 
 # **BREVE RESUMEN DEL CÓDIGO**
 
 1. Llamamos a la biblioteca en la cual van a estar incluidas nuestras funciones ***#Include <iostream>***
 2. Utilizaremos la función int main , la anotamos y procedemos a comenzar a escribir en el bloque de código
 3. En mi caso aunque el ejercicio como tal no lo pedía. Procedí a agregar un par de lineas de código de más para darle una breve instrucción a nuestro usuario
4. Pongo la función ~~~std::cin >> "NombreDeValor"~~~ que no lo vimos en trabajos anteriores, lo que indica es que la proxima información de entrada que se le de al programa va a tomar el valor de A en este caso sería un número entero
***NOTA: Notese los signos mayor que indican la extracción de información y tomarlo como valor del int***
5. Una vez ingresado el valor A ya tiene el valor, lo lee y lo guarda en A
6. Repito procedimiento con valor B
7. Y ahora le indico al programa que una vez que tenemos los dos valores enteros pase a escribirnos y mostrarnos en pantalla el valor de A+B 
8. Lo nombrado en el paso Nº 7 lo realizaremos con la función ~~~std::cout<<"NombreDeValor1+NombreDeValor2";~~~

***NOTA: LOS SIGNOS ; DEBEN IR SIEMPRE LUEGO DE UNA FUNCIÓN DADO QUE SINO GENERARA UN ERROR

***DEL NEGRO, URIEL - K1051 - AED - 01-Adición***


