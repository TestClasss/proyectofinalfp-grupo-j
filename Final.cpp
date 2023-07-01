#include <iostream>
#include <string.h>

using namespace std;

// estructura-----------------------------------------------------------------------------------------
struct Automovil
{
     string idPlaca;
     int horaIngreso;
} automovil;

struct Estacionamiento
{
     Automovil automovil;
     bool Disponibilidad = true;
} estacionamiento[51];

// Funciones
void Ingresoautomovil();
void MostrarParqueos();

int main()
{
     Ingresoautomovil();
     MostrarParqueos();
     return 0;
}

void Ingresoautomovil()
{
     int opcion;
     int i, tipodeVehiculo, carro = 0, moto = 0, discapacitado = 0;
     do
     {
// Se solicita al usuario que ingrese la posición deseada para estacionar el automóvil
          cout << "Por favor ingrese la posicion que desea: " << endl;
          cin >> i;
          if (estacionamiento[i].Disponibilidad == true)
          {// Se solicita al usuario que ingrese los dígitos de la placa del automóvil
               cout << "Por favor ingrese los digitos de su placa: " << endl;
               cin >> automovil.idPlaca;
               estacionamiento[i].Disponibilidad = false;
               tipodeVehiculo = automovil.idPlaca.length();
               if (tipodeVehiculo == 8)
               {
                    carro++;
                    cout << carro << endl;
                    if (carro > 30)
                    {
                         cout << "Lo sentimos ya no hay parqueos dispoibles";
                    }
               }
               else if (tipodeVehiculo == 6)
               {
                    moto++;
                    cout << moto << endl;
                    if (moto > 15)
                    {
                         cout << "Lo sentimos ya no hay parqueos dispoibles";
                    }
               }
               else if (tipodeVehiculo == 4)
               {
                    discapacitado++;
                    cout << discapacitado << endl;
                    if (discapacitado > 5)
                    {
                         cout << "Lo sentimos ya no hay parqueos dispoibles" << endl;
                    }
               }
               else if (tipodeVehiculo != 4 & tipodeVehiculo != 6 & tipodeVehiculo != 8)
               {
                    cout << "numero de placa invalido" << endl;
               }
          }
          else
          {
               cout << "Lo sentimos este espacio esta ocupado" << endl;
          }
          cout << "Quiere ingresar otro vehiculo? 0-Si 1-No" << endl;
          cin >> opcion;
     } while (opcion == 0);
} 