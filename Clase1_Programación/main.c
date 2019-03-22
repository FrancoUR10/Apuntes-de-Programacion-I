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
