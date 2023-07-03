#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>
using namespace std;
struct Automovil
{
    string idPlaca;
} automovil;
struct Estacionamiento
{
    Automovil automovil;
    bool Disponibilidad = true;
} estacionamiento[51];