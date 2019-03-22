#include <stdio.h>
#include <stdlib.h>
/*
%d:"Enteros"
%f:"Flotantes"
%c:"Caracteres"
&:"Representa la direccion de memoria de la variable,
representa el primer bit donde esta asignada esa variable."
system("pause"); "detiene la operacion para contemplar la informacion."
fflush(stdin); "Limpia el buffer del cmd."
setbuf(stdin,NULL); "si se usa linux, hay que usar esta funcion,
si se usa windows se puede elejir entre las funciones: setbuf(stdin,NULL); o fflush(stdin);"
system("cls"); "Limpia la informacion mostrada en el cmd."
*/

int main()
{
    int numero;
    char letra;
    char palabra[10];
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    printf("Ingrese una letra: ");
    setbuf(stdin,NULL);
    scanf("%c",&letra);
    printf("Ingrese una palabra: ");
    setbuf(stdin,NULL);
    scanf("%s",&palabra);
    printf("El numero es: %d\nLa letra es: %c\nLa palabra es: %s\n",numero,letra,palabra);

    system("pause");
    return 0;
}


/*
Ejercicio: "La base es ingresar numeros, y resolverlo con while."
Se ingresan numeros enteros (no se sabe cuantos). Los numeros tienen que estar comprendidos entre -500 y 500.
Determinar:
a) Cuantos numeros pares
b) Cuantos positivos
c) Cuantos negativos
d) Cuantos ceros
e) Promedio de numeros positivos
f) Maximo y minimo (en que orden se ingreso) (utilizar banderas) El booleano se representa con un entero (0 o 1).
g) La suma de los negativos
h) La diferencia entre negativos y positivos
i) Cuantos numeros estan entre -239 y 5
Practicar toda la parte de estructuras repetitivas.
Git hub : "German2017 // CodeutnFra"
*/
