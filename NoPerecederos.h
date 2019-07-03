#include <string>
using namespace std;
#include "Producto.h"
class NoPerecederos:public Producto
{
    private:
       string tipo;
    public:

     NoPerecederos(string,double,string);
     string GET_Tipo();
};
