#include <iostream>
#include <string.h>

using namespace std;

// estructura-----------------------------------------------------------------------------------------
struct Vehiculos
{
    string IdPlaca;

} vehiculo[51];

// Funciones------------------------------------------------------------------------------------------
void buscadorPlacas();

// Variables

// main-------------------------------------------------------------------------------------------------
int main()
{
    buscadorPlacas();
    return 0;
}

void buscadorPlacas()
{

    string placa; // Ingresa la placa a buscar, es una variable distinta a idPlaca
    int posicion; // Guardara el valor de la variable "i"
    cout << "Ingrese la placa del vehiculo que busca: ";
    cin >> placa;
    bool encontrado = false;
    
    for (int i = 0; i <= 3; i++)
    {
        if (placa == vehiculo[i].IdPlaca)
        {
            encontrado = true; // Al ingresar los datos de un vehiculo en la posicion "i" el valor de encontrado cambiara
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