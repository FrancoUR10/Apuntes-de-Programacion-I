#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4

void ordenarAlumnos(char nombre[][50], char apellido[][50], int edad[], int nota[], int tamanio);

void mostrarAlumnos(char nombre[][50], char apellido[][50], int edad[], int nota[], int tamanio);

int main()
{
    char nombre[TAM][50]={"Pablo","Alicia","Lucas","Juan"};
    char apellido[TAM][50]={"Rosenberg","Beltran","Salgado","Ignacio"};
    int edad[TAM]={20,25,40,22};
    char mail[TAM][30];
    int nota[TAM]={2,4,6,8};

    ordenarAlumnos(nombre,apellido,edad,nota,TAM);
    mostrarAlumnos(nombre,apellido,edad,nota,TAM);












    return 0;
}

void mostrarAlumnos(char nombre[][50], char apellido[][50], int edad[], int nota[], int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("\nNombre: %s Apellido: %s Edad: %d Nota: %d\n",nombre[i],apellido[i],edad[i],nota[i]);
    }
}

void ordenarAlumnos(char nombre[][50], char apellido[][50], int edad[], int nota[], int tamanio)
{
    int auxEntero;
    char auxCadena[50];
    int i;
    int j;
    for(i=0;i<tamanio-1;i++)
    {
        for(j=i+1;j<tamanio;j++)
        {
            if(strcmp(nombre[i],nombre[j])>0)
            {
                strcpy(auxCadena,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],auxCadena);

                strcpy(auxCadena,apellido[i]);
                strcpy(apellido[i],apellido[j]);
                strcpy(apellido[j],auxCadena);

                auxEntero=edad[i];
                edad[i]=edad[j];
                edad[j]=auxEntero;

                auxEntero=nota[i];
                nota[i]=nota[j];
                nota[j]=auxEntero;
            }
        }
    }
}
