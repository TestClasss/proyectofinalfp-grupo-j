#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

struct carro
{
 string IdPlaca;
}

struct Estacionamiento
{
  struct carro;
  bool disponibilidad=true;
}estacionamiento[51];



int main()
{
int tareas;
bienvenida:
  cout << "Bienvenido al estacionamiento de plaza multicinema" << endl
       << endl;

  cout << "favor ingrese su tipo de usuario" << endl
       << "(1) Administrativo" << endl
       << "(2) general" << endl;
  cin >> tareas;
  system("cls");
  switch (tareas)
   {
   case 1:
   int opciones1;
    cout << "Elija la operacion que desea realizar" << endl
         << "(1)Regresar al menu principal" << endl
         << "(2)Salir" << endl
         << "(3)Mostrar cantidad de vehiculos presentes" << endl
         << "(4)Mostrar vehiculo con mayor ingreso" << endl
         << "(5)Bloquear parqueos especifico" << endl
         << "(6)Generar registro de tickets" << endl
         << "(7)Mostrar la cantidad de espacios disponibles" << endl;
    cin >> opciones1;
    system("cls");
       switch (opciones1)
       {
       case 1:
       goto bienvenida;
       case 2:
       break;
       case 3:
       break;
       case 4:
       break;
       case 5:
       break;
       case 6:
       break;
       case 7:
       break;
       default:
       cout << "Opcion invalida." << endl;
       break;
       }

   case 2:
   AgregarAuto();
   int opciones2;
    cout << "Elija la operacion que desea realizar" << endl
         << "(1)Regresar al menu principal" << endl
         << "(2)Salir" << endl
         << "(3)Generar ticket de parqueo" << endl
         << "(4)Mostrar cantidad de parqueos disponibles" << endl
         << "(5)Buscar vehiculo" << endl;
    cin >> opciones2;
    system("cls");
       switch (opciones2)
       {
       case 1:
       goto bienvenida;
       break;
       case 2: 
       break;
       case 3:
       break;
       case 4:
       break;
       case 5:
       break;
       default:
       cout << "Opcion invalida." << endl;
       break;
       }
   }
return 0;
}




   