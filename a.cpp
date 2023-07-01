#include <iostream>
#include <string.h>
using namespace std;
void Generararchivodia();
int main()
{
Generararchivodia();
return 0;
}
void Generararchivopordia()
{string Archivo =to_string(nowLocal.tm_mday)+"-"+to_string(nowLocal.tm_mon+1)+"-"+to_string(nowLocal.tm_year+1900)+".txt"; 
            cout<<Archivo;
            string tipo;
            int Cantidadvehiculo=0;
            ofstream archivo {Archivo};
        archivo<<automovil.idPlaca
        TipodeVehiculo = automovil.idPlaca.length();
        if (TipodeVehiculo == 8)
        {
            tipo="carro";
            archivo<<tipo;
}