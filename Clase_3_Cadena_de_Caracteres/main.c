#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Tengo tres variables: nombre, apellido, apellidoNombre
// Lo que quiero guardar en apellidoNombre es: apellido Acquisto (primer letra en mayuscula) Franco Patricio

int main()
{
    char nombre[6];
    char otroNombre[50]="Jose Perez";
    int largo;
    int compara;

    // strupr(otroNombre); //Convierte todo a mayusculas.
    strlwr(otroNombre); //Convierte todo a minusculas.

    strcat(nombre,otroNombre); //Une todo el nombre completo en los dos arrays.

    // strcpy(nombre,otroNombre); //Recibe un char* y una constante char*
    // strncpy(nombre,otroNombre,5); //Copia de manera segura los caracteres del array.

    printf("Su nombre es: %s",nombre);

    /*
    printf("Ingrese su nombre: ");

    // fgets(nombre, 48, stdin); //Funciona para windows y Linux
    scanf("%[^\n]",nombre); //Modifica la mascara para que no incluya \n
    // gets(nombre); // Funciona para windows

    largo=strlen(nombre); // Muestra la cantidad de caracteres ingresados en el array.





    printf("Su nombre es: %d",largo);




    compara=stricmp(nombre,"pepe");  //strcmp //stricmp Si se le agrega una i, es otra funcion que ignora las mayusculas.
    printf("%d",compara);
    */














    return 0;
}
