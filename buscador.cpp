#include <iostream>
#include <string.h>

using namespace std;

// estructura-----------------------------------------------------------------------------------------
struct Vehiculos
{
    string IdPlaca;

} vehiculo[4];

// Funciones------------------------------------------------------------------------------------------
void introducirDatos();
void buscadorPlacas();

// Variables

// main-------------------------------------------------------------------------------------------------
int main()
{
    introducirDatos();
    buscadorPlacas();
    return 0;
}

void introducirDatos()
{
    cout << "porfavor ingrese las placas de los vehiculos" << endl;
    for (int i = 0; i <= 3; i++)
    {
        cin >> vehiculo[i].IdPlaca;
    }
}

void buscadorPlacas()
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
            posicion = i;
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