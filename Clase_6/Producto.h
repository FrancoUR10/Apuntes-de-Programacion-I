#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    int estado;
    float precio;
    char nombre[50];
    char proveedor[50];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];
    int idProveedor;
}eProducto;

eProducto pedirProducto();

void inicializarProductos(eProducto[],int);//OK

void mostrarProducto(eProducto);

void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);

int insertarProducto(eProducto [], int );

int dameLugarLibre(eProducto[],int);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto [], int );

void hardcodearProductos(eProducto lista[], int tam);


#endif // PRODUCTO_H_INCLUDED
