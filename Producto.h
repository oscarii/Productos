#include <string>
#include <iostream>

using namespace std;

class Producto
{
    private:
     string nombre;
     double precio;

    public:
        Producto();
        virtual ~Producto();
        Producto(string,double);
        string GET_Nombre();
        double GET_Precio();
        virtual double CalcularPrecio(int cantidad);

};
