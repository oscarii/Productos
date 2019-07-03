#include "Producto.h"
#include <string>
#include <iostream>

class Perecederos:public Producto
{
    private:
      int dias_a_caducar;

     public:
        Perecederos();
        virtual ~Perecederos();
        Perecederos(string,double,int);
        int GET_Dias_A_Caducar();
        double CalcularPrecio(int cantidad);

};


