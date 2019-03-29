#include <stdio.h>
#include <stdlib.h>

int sacarFactoreo(int numero);
float sacarDivision(int numeroUno, int numeroDos);
int sacarProducto(int numeroUno, int numeroDos);
int sacarResta(int numeroUno, int numeroDos);
int sacarSuma(int numeroUno, int numeroDos);
int pedirMenu(char texto[]);
int main()
{
    int factor;
    int primerOperando;
    int segundoOperando;
    int opcionIngresada;
    char continuar='s';
    do
    {
        opcionIngresada=pedirMenu("1. Ingresar 1er operando(A=X)\n2. Ingresar 2do operando(B=Y)\n3. Calcular las operaciones\n4. Informar los resultados\n5. Salir del menu\nSeleccione una opcion: ");
        switch(opcionIngresada)
        {
        case 1:
            printf("Ingrese el 1er operando (X): ");
            scanf("%d",&primerOperando);
            break;
        case 2:
            printf("Ingrese el 2do operando (Y): ");
            scanf("%d",&segundoOperando);
            break;
        case 3:
            factor=sacarFactoreo(primerOperando);
            printf("%d",factor);
            break;
        case 4:
            break;
        case 5:
            continuar='n';
            break;
        default:
            printf("La opcion ingresada no es valida");
            break;
        }
        system("pause");
        system("cls");
    }
    while(continuar=='s');






    return 0;
}

int pedirMenu(char texto[])
{
    int miOpcion;
    printf("%s",texto);
    scanf("%d",&miOpcion);

    return miOpcion;
}

int sacarSuma(int numeroUno, int numeroDos)
{
    int miSuma;
    miSuma=numeroUno + numeroDos;
    return miSuma;
}

int sacarFactoreo(int numero)
{
    int resultado;
    int acumulador=1;
    if(numero==0 || numero==1)
    {
        resultado=1;
    }
    else
    {
        acumulador=numero*sacarFactoreo(numero-1);
        resultado=acumulador;
    }
    return resultado;
}
