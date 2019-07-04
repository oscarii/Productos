#include "Perecederos.h"

Perecederos::Perecederos()
{

}

Perecederos::~Perecederos()
{

}
Perecederos::Perecederos(string nombre,double precio,int dias_a_caducar):Producto(nombre,precio)
{
   dias_a_caducar=dias_a_caducar;
}

int Perecederos::GET_Dias_A_Caducar(){
 return dias_a_caducar;
}

double Perecederos::CalcularPrecio(int cantidad){
  double preciofinal=Producto::CalcularPrecio(cantidad);

       switch(dias_a_caducar){
             case 1:
                 preciofinal/=4;
                 break;
             case 2:
                preciofinal/=3;
                 break;
              case 3:
              preciofinal/=2;
                break;
         }
        return preciofinal;

}
