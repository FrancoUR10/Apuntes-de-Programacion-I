#ifndef PROVEEDOR_H_INCLUDED
#define PROVEEDOR_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[50];
    char localidad[50];
    char cuit[50];
    char duenio[50];
    int estado;
} eProveedor;

void mostrarProveedor(eProveedor);

void mostrarArrayProductosConProveedor(eProducto listaProductos[], int tamProducto, eProveedor listaProveedores[], int tamProveedor);

void mostrarArrayProveedorConSusProductos(eProveedor listaProveedores[], int tamProveedor, eProducto listaProductos[], int tamProducto);

#endif // PROVEEDOR_H_INCLUDED
