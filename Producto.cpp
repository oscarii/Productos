#include "Producto.h"
#include <string>
#include <iostream>

Producto::Producto()
{

}

Producto::~Producto()
{

}

Producto::Producto(string nombre,double precio)
{
    nombre = nombre;
    precio = precio;
}

string Producto::GET_Nombre(){
 return nombre;
}

double Producto::GET_Precio(){
 return precio;
}

 double Producto::CalcularPrecio(int cantidad){
     return precio * cantidad;
}
