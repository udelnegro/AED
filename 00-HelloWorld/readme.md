1. Nos encargamos de la selección, instalación y editor de código (IDE) que utilizaremos.

2. Seleccionamos, instalamos y configuramos el compilador de **C ++**, en mi caso estoy usando el **MinGW**.

3. Una vez configurado y funcionando nuestras herramientas procedemos a escribir el código.

4. El código lo iniciaremos con una breve descripción del título, mi nombre, apellido y la última fecha de edición.

5. **Lo mencionado en el paso Nº 4 lo realizamos entre los siguientes caracteres / * caracteres * /, lo anotamos de esta manera para que el compilador no lo lea, pero, sin embargo forme parte del código**.

6. Se empieza el código con un **"#Include <iostream>"** este se encarga de incluir en el proceso de pre-compilación las instrucciones que estén dentro de nuestro código.

7. Acto seguido indicamos la función principal **"int main ()"** y abrimos las llaves **{ }** que incluyen el bloque de código el cual va a indicar que hacer.

8. Una vez que terminado el código pasamos a compilar, para ello utilizare la consola o cmd (en Windows), no es el único modo de compilar. 

9. Seleccionamos el directorio en el cual este la carpeta **"00-HelloWorld"** para eso utilizamos el comando cd (cambiar directorio o change directory) y haremos el paste de la dirección donde se encuentra la carpeta.

10. Se aplica el comando para compilar en mi caso es **g ++ -o hello.cpp hello.exe** (hay más formas en cuanto a la notación), el cual nos va a generar la aplicación **hello.exe (archivo ejecutable)**.

11. Citamos "hello.exe" y le damos a enter.

12. Si todo está bien, que si se creó el archivo ejecutable hello.exe no debería existir una gran problema, el programa nos mostrara la frase que hayamos indicado.

13. Cuando se chequeo el funcionamiento del programa se generará el **output.txt**.

14. El output.txt se genera con el ejecutable de la siguiente manera **"hello.exe > output.txt"** y ENTER , el símbolo mayor indica redireccionamiento de datos al formato indicado en este caso es el **.txt**.

15. Automáticamente se genera el archivo de texto en el directorio que seleccionamos anteriormente. 

16. Para ver el archivo de texto generador podemos abrirlo en el directorio o en la misma consola podemos poner **"type output.txt"** y va a mostrarnos el contenido del archivo de texto.

17. Ya logrado el objetivo principal del trabajo queda subir la carpeta a nuestro repositorio personal en **Github**.


Bibliografía utilizada:

Git101.pdf 

Aed Assigments.pdf https://josemariasola.wordpress.com/papers/ -> Compiladores, Editores y Entornos de Desarrollo: Instalación, Configuración y Prueba
