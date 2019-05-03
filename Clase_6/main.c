#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "biblioteca.h"
#include "Proveedor.h"

int main()
{
    //definir array.
    //cargar array.
    //mostrar array.

    int opcion;

    //eProducto unProducto;
    eProducto listadoProductos[T];
    eProveedor listadoProveedores[T];
    construirArray(listadoProductos,T);
    inicializarProductos(listadoProductos,T);
    hardcodearProductos(listadoProductos,T);

    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               insertarProducto(listadoProductos, T);
            break;
            case 2:
                borrarProducto(listadoProductos,T);
                break;
            case 3:
                editarProducto(listadoProductos, T);
                break;

            case 4:
                //mostrarArray(listadoProductos,T);
                //mostrarArrayProveedorConSusProductos(listadoProveedores,T,listadoProductos,T);
                mostrarArrayProductosConProveedor(listadoProductos,T,listadoProveedores,T);
                break;
        }
    }while(opcion!=10);







    return 0;
}
