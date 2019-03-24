#include <stdio.h>
#include <stdlib.h>
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
*/


int sacarNumerosEntreTalCantidad(int numeroEntre);
// int sacarMaximoYMinimo(int numero);
float sacarPromedio(int suma, int cantidad);
int sacarCeros(int cero);
int sacarNegativos(int negativo);
int sacarPositivos(int positivo);
int sacarPares(int numero);
int sacarNumero(void);

int main()
{
    int bandera=1;
    int maximo;
    int minimo;
    int cantidadNumerosEntre=0;
    int diferencia;
    int numerosEnCero=0;
    int numerosNegativos=0;
    int numerosPositivos=0;
    int numerosPares=0;
    int numeroIngresado;
    int sumaTotal=0;
    int sumaNegativo=0;
    float promedioPositivos=0;
    int respuesta=1;
    do
        {
            numeroIngresado=sacarNumero();
            if(sacarPares(numeroIngresado))
                {
                    numerosPares++;
                }
            if(sacarPositivos(numeroIngresado))
                {
                    numerosPositivos++;
                }
            if(sacarNegativos(numeroIngresado))
                {
                    numerosNegativos++;
                }
            if(sacarCeros(numeroIngresado))
                {
                    numerosEnCero++;
                }
            if(numeroIngresado > 0)
                {
                    sumaTotal=sumaTotal+numeroIngresado;
                    promedioPositivos=sacarPromedio(sumaTotal,numerosPositivos);
                }
            if(numeroIngresado < 0)
                {
                    sumaNegativo=sumaNegativo+numeroIngresado;
                }
            if(sacarNumerosEntreTalCantidad(numeroIngresado))
                {
                    cantidadNumerosEntre++;
                }
            if (bandera==1)
                {
                    maximo=numeroIngresado;
                    minimo=numeroIngresado;
                    bandera=0;
                }
            if(numeroIngresado > maximo)
                {
                    maximo=numeroIngresado;
                }
            if(numeroIngresado < minimo)
                {
                    minimo=numeroIngresado;
                }
            printf("Ingrese 1 para pedir otro numero: ");
            scanf("%d",&respuesta);
        }
        while(respuesta==1);
        diferencia=sumaTotal+sumaNegativo;
        printf("Cantidad numeros pares: %d\nCantidad de numeros positivos: %d\nCantidad de numeros negativos: %d\nCantidad de ceros: %d\nPromedio de positivos: %f\nSuma de los negativos: %d\nDiferencia entre positivos y negativos: %d\nCantidad de numeros entre -239 y 5: %d\nEl numero maximo: %d\nEl numero minimo: %d\n",numerosPares,numerosPositivos,numerosNegativos,numerosEnCero,promedioPositivos,sumaNegativo,diferencia,cantidadNumerosEntre,maximo,minimo);




    return 0;
}

int sacarNumero()
{
    int miNumero;
    do
        {
            printf("Ingrese un numero: ");
            scanf("%d",&miNumero);
        }
        while(miNumero < -500 || miNumero > 500);

        return miNumero;
}

int sacarPares(int numero)
{
    int cantidadPares=0;
    if(numero %2==0)
        {
            cantidadPares++;
        }

    return cantidadPares;
}

int sacarPositivos(int positivo)
{
    int cantidadPositivos=0;
    if(positivo > 0)
        {
            cantidadPositivos++;
        }
    return cantidadPositivos;
}

int sacarNegativos(int negativo)
{
    int cantidadNegativos=0;
    if(negativo < 0)
        {
            cantidadNegativos++;
        }
    return cantidadNegativos;
}

int sacarCeros(int cero)
{
    int cantidadCeros=0;
    if(cero == 0)
        {
            cantidadCeros++;
        }
    return cantidadCeros;
}

float sacarPromedio(int suma, int cantidad)
{
    float promedio=0;
    promedio= (float)suma/cantidad;
    return promedio;
}

//Aprender a usar maximo y minimo en funciones para despues.
/*
int sacarMaximoYMinimo(int numero)
{
    int bandera=1;
    int maximo;
    int minimo;
    if(bandera==1)
        {
            maximo=numero;
            minimo=numero;
            bandera=0;
        }
    if(numero > maximo)
        {
            maximo=numero;
        }
    if(numero < minimo)
        {
            minimo=numero;
        }
    return numero;
}
*/

int sacarNumerosEntreTalCantidad(int numeroEntre)
{
    int cantidadEntre=0;
    if(numeroEntre >= -239 && numeroEntre <= 5)
        {
            cantidadEntre++;
        }
    return cantidadEntre;
}
