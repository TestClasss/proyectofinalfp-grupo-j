#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

const int MaxVehiculos = 50;

struct carro
{
 string IdPlaca;
}

struct Estacionamiento
{
  struct carro;
  bool disponibilidad=true;
}estacionamiento[MaxVehiculos];



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

/*
void AgregarAuto();
void RegistroEstacionamiento();
void leerarchvivo();


int opcioncaso2;
       cout<<"Desea guaradar los datos ingresados?"<<endl
       <<"(1)Si"<<endl
       <<"(0)No"<<endl;
       cin>> opcioncaso2;
       system("cls");
       if(opcioncaso2==1)
       {
        RegistroEstacionamiento();
       }
       else if (opcioncaso2==0)
       {
        cout<<"Gracias por su visita, vuelva pronto...";
       }




void AgregarAuto()
{
    // Solicitando Datos
    for (int i = 0; i < MaxVehiculos; i++)
    {
        cout << "Favor digite el numero de identidicacion de su placa: ";
        cin >> estacionamiento[i].IdPlaca;
        cout << "Favor digite su hora de ingreso: ";
        cin >> estacionamiento[i].HoraIngreso;
        estacionamiento[i].disponibilidad=true;
        break;
    }
system("cls");
}

void RegistroEstacionamiento()
{
 fstream fichero;
 fichero.open("RegistroEstacionamiento.txt", ios::app|ios::out);
 if (fichero.fail() == true)
 {
 cout << "No se logro crear el archivo";
 }    
 for (int i = 0; i < MaxVehiculos; i++)
 {
 fichero << estacionamiento[i].IdPlaca << " - " << estacionamiento[i].HoraIngreso<<"\n";
 break;
 }
 fichero.close();
}

void leerarchvivo(){
    ifstream fichero;
    fichero.open("RegistroEstacionamiento.txt", ios::in);
    string line = "";
    string buscarplaca;
    cout<<"Escribe la placa a buscar: ";
    cin>> buscarplaca;
    int Tipovehiculobuscado;
    Tipovehiculobuscado=buscarplaca.length();
    while (getline (fichero, line)){
        if (line==buscarplaca)
        cout<<"su auto se escuentra en el estacionamiento";
    }
}*/


   