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


#endif // PROVEEDOR_H_INCLUDED
