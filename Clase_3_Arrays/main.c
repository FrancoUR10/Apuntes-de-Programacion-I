#include <stdio.h>
#include <stdlib.h>
#define TAM 5


void mostrarArray(int array[], int tam);
void cargarArray(int array[], int tam);

/** \brief Busca un valor en el array
 *
 * \param array[] int El array
 * \param tam int El tamaño
 * \param valor int El valor a buscar
 * \return int El indice del valor buscado o
 -1, si no lo encuentra
 *
 */
int buscarValor(int array[],int tam, int valor);
// int const LARGO=5;

int main()
{
    int miArray[TAM]={};
    int indice;

    cargarArray(miArray,TAM);
    mostrarArray(miArray,TAM);
    indice=buscarValor(miArray,TAM,5);
    if(indice!=-1)
    {
        printf("El indice es: %d",indice);
    }
    else
    {
        printf("Valor inexistente!!");
    }















    return 0;
}

void mostrarArray(int array[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\n",array[i]);
    }
}

void cargarArray(int array[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&array[i]);
    }
}

int buscarValor(int array[],int tam, int valor)
{
    int indice = -1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(array[i]==valor)
        {
            indice=i;
            break;
        }
    }
    return indice;
}
