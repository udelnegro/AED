/*Ejemplos de Valores y Operaciones
de Tipos de Datos
Uriel Del Negro
21-05-2020
*/

#include <iostream>
#include <cassert>
#include <math.h>

using namespace std;

int main () 
{
    // Acá ejemplifico en el código ejemplos básicos de tipos de dato y utilizo un 'assert' para hacer las
    // comparaciones y ver que realmente se cumplen

 
    int miEdad = 20;  				// Tiene valores enteros. (El conjunto enteros es infinito pero el del int es finito)
    int edadVecino = 18;
 
    unsigned alturaRectangulo = 4;   // Tiene valores de números naturales, mayormente, para cantidades
    unsigned largoRectangulo = 10;
   	
 
    char primerLetraDeMama = 'M';		// Tiene valor como caracter o símbolo
 
    string miNombre = "Uriel"; 	                // Tiene como valor una suma de chars básicamente, no es un tipo de dato standard 
    string miApellido = "Del Negro";
   	
    bool enLaNocheHayEstrellas = true;          // Se le asigna un valor de verdad. True or False
    bool enLaNocheHaySol = false; 		// Idem

    double pi = 3.1416; 			// Tiene valores reales 
   

    // Operaciones:

    int diferenciaEdadVecino = miEdad - edadVecino;      
    unsigned superficieRectangulo = alturaRectangulo * largoRectangulo;
    string miNombreCompleto = miNombre + " " + miApellido;
 
    assert (diferenciaEdadVecino > 0);          // Se corta el programa si mi vecino es más grande que yo
    assert (superficieRectangulo == 40);       // Se corta si la superficie no es 40
    assert (primerLetraDeMama + 1 == 'N');    // Se corta si la letra siguiente a la tabla ASCII no es N 
    assert (enLaNocheHayEstrellas and enLaNocheHaySol == false);  // Se corta si en la noche hay sol y hay estrellas 
    assert (miNombreCompleto == "Uriel Del Negro");  // Se corta si cambian mi nombre 
    assert ((pi - 2.0) >= 0.5);	 // Se corta si la resta es menor a 1/2

    /*  Justificación de: ¿Son esos realmente todos los tipos que vimos en clase? Justifique.

    No, nos son los únicos de tipos de datos que existen, en sí todo puede ser considerado un tipo de dato
    Pero para dar ejemplos más directos de otros tipos de datos tenemos por ejemplo:

    - Float, es un dato real de precisión simple
    - Date, se utiliza para las fechas
    - Money o Currency, se utiliza para lo financiero
    - Numeros complejos, se utiliza para representar numeros complejos valga la redundancia    
    Entre otros... 
    */

    return 0;

 }