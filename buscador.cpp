#include <iostream>
#include <string.h>

using namespace std;

struct Vehiculos
{
    string idPlaca;
} vehiculo[];

struct Estacionamiento
{
    Vehiculos;
    bool disponibilidad=true;
}estacionamiento[50];


void IntroducirDatos();
void BuscadorPlacas();

int main()
{

    return 0;
}

void IntroducirDatos()
{
     cout << "porfavor ingrese las placas de los vehiculos" << endl;
    for (int i = 0; i <= 3; i++)
    {
        cin >> vehiculo[i].placaVehiculo;
    }
}

void BuscadorPlacas()
{
    string placa;
    int posicion;
    cout << "Ingrese la placa del vehiculo que busca: ";
    cin >> placa;
    bool encontrado = false;

    for (int i = 0; i <= 3; i++)
    {
        if (placa == vehiculo[i].IdPlaca)
        {
            encontrado = true;
            lugar = i;
            break;
        }
    }

 
    if (encontrado)
    {
        cout << "Su vehiculo se encuentra en el estacionamiento: " << posicion << endl;
    }
    else
    {
        cout << "No se encontro su vehiculo" << endl;
    }
}

