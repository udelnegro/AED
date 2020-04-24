El primer paso se basa en la selección, instalación y del editor de código que utilizaremos
Seleccionamos, instalamos y configuramos el compilador de C++ en mi caso estoy utilizando el MinGW
Una vez configurado y funcionando  todas las herramientas necesarias procedemos a escribir el código
El código lo iniciamos con una breve descripción  del título , mi nombre y apellido y la última fecha de edición
Lo del paso anterior lo realizamos  entre los siguiente caracteres /* descripción breve */ lo que permiten que el compilador no lo lea pero que sin embargo forme parte del código
Empezamos el código con un #Include que va a inlcuir en el proceso de pre-compilación las instrucciones que esten dentro de nuestro código
Luego indicamos la función main () y abrimos las llaves que incluyen el bloque de código el cual va a indicar que hacer
Una vez que terminamos el código pasamos a compilar para eso en mi caso lo hago desde la consola o cmd (tengo Windows)
Lo primero que hacemos es seleccionar el directorio el cual esta nuestra carpeta "00-HelloWorld" para eso utilizamos el comando cd (change directory) y pegamos la dirección donde esta la carpeta
Aplicamos el comando para compilar en mi caso es g++ -o hello hello.cpp , el cual nos va a generar la aplicación hello.exe (el ejecutable)
Citamos "hello.exe" y le damos a enter 
Si todo esta bien, que si se hizo el hello.exe no debería existir una gran problemática el programa nos mostrará la frase que le hayamos indicado
Cuando tengamos funcionando el programa el paso que sigue es generar el output.txt
El output.txt lo generamos con el ejecutable de la siguiente manera "hello.exe > output.txt" y ENTER
Automáticamente se genero el archivo de texto en el directorio que seleccionamos anteriormente 
Para ver el archivo de texto generado podemos abrirlo en el directorio o en la misma consola podemos poner "type output.txt" y va a generar ese texto
Ya logrado el objetivo principal del trabajo queda subir la carpeta a nuestro repositorio

Bibliografía utilizada:

Git101.pdf
Aed Assigments.pdf 
https://josemariasola.wordpress.com/papers/ -> Compiladores, Editores y Entornos de Desarrollo: Instalación , Configuración y Prueba


a
