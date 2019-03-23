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
Git hub : "German2017 // CodeutnFra"
*/

int main()
{
    int bandera=1;
    float maximo;
    float minimo;
    int numeroValido;
    int numero;
    int respuesta;
    float numerosPares;
    float numerosPositivos;
    float numerosNegativos;
    float cantidadCeros;
    float sumaNegativos;
    float suma;
    int contador;
    float promedioPositivos;
    int diferencia;
    float numerosEntre;
    respuesta=1;
    do
        {
            numeroValido=0;
            while(numeroValido==0)
                {
                    printf("Ingrese un numero entero: ");
                    scanf("%d",&numero);
                    if(numero < -500 || numero > 500)
                        {
                            printf("El numero no es valido");
                        }
                        else
                            {
                                if(numero >= -500 && numero <= 500)
                                    {
                                        numeroValido=1;
                                        printf("Pulse s si desea ingresar otro numero");
                                        fflush(stdin);
                                        scanf("%d",&respuesta);
                                    }
                                else
                                    {
                                        printf("El numero no es un numero");
                                    }
                            }
                }
                if(numero %2 == 0)
                    {
                        numerosPares++;
                    }
                if(numero > 0)
                    {
                        numerosPositivos++;
                        suma= numero + suma;
                        contador++;
                        promedioPositivos= suma / contador;
                    }
                if(numero < 0)
                    {
                        numerosNegativos++;
                        sumaNegativos=sumaNegativos + numero;
                    }
                if(numero == 0)
                    {
                        cantidadCeros++;
                    }
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
                if(numero >= -239 && numero <= 5)
                    {
                        numerosEntre++;
                    }
        }
        while(respuesta==1);
        diferencia= suma + sumaNegativos;
        printf("Numeros pares %f\n",numerosPares);
        printf("Numeros positivos: %f\n",numerosPositivos);
        printf("Numeros negativos: %f\n",numerosNegativos);
        printf("Cantidad de ceros: %f\n",cantidadCeros);
        printf("Promedio de numeros positivos: %f\n",promedioPositivos);
        printf("Numero maximo: %f\n",maximo);
        printf("Numero minimo: %f\n",minimo);
        printf("Suma de numeros negativos: %f\n",sumaNegativos);
        printf("Diferencia de numeros positivos y negativos: %d\n",diferencia);
        printf("Numeros entre -239 y 5: %f\n",numerosEntre);






    return 0;
}
