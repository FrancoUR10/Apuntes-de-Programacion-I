#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "Producto.h"
#include "Proveedor.h"
/*
1. Todos los productos con su proveedor.
2. Por cada proveedor sus productos.
3. Por cada proveedor la cantidad de productos.
4. El precio promedio de los productos de cada proveedor.
5. El/los proveedor/es que provee mas productos.
*/
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
