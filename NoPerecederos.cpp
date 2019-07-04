#include "NoPerecederos.h"


NoPerecederos::NoPerecederos(string nombre,double precio,string tipo):Producto(nombre,precio)
{
    tipo=tipo;
}

string NoPerecederos::GET_Tipo(){
 return tipo;
}
