#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"
#include "Proveedor.h"
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

void mostrarProveedor(eProveedor unProveedor)
{
    printf("%s--%s--%s--%s--%d--%d",unProveedor.descripcion,unProveedor.localidad,unProveedor.cuit,unProveedor.duenio,unProveedor.id,unProveedor.estado);
}

void mostrarArrayProductosConProveedor(eProducto listaProductos[], int tamProducto, eProveedor listaProveedores[], int tamProveedor)
{
    int i;
    int j;
    for(i=0;i<tamProducto;i++)
    {
        mostrarProducto(listaProductos[i]);
        for(j=0;j<tamProveedor;j++)
        {
            //Esto se llama producto cartesiano
            if(listaProductos[j].idProveedor==listaProveedores[j].id)
            {
                mostrarProveedor(listaProveedores[j]);
            }
        }
    }
}

void mostrarArrayProveedorConSusProductos(eProveedor listaProveedores[], int tamProveedor, eProducto listaProductos[], int tamProducto)
{
    int i;
    int j;
    for(i=0;i<tamProveedor;i++)
    {
        mostrarProveedor(listaProveedores[i]);
        for(j=0;j<tamProducto;j++)
        {
            if(listaProveedores[j].id==listaProductos[j].idProveedor)
            {
                mostrarProducto(listaProductos[j]);
            }
        }
    }
}
