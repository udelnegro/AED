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


