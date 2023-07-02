#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>

using namespace std;

// estructura-----------------------------------------------------------------------------------------
struct Automovil
{
    string idPlaca;
} automovil;

struct Estacionamiento
{
    Automovil automovil;
    bool Disponibilidad = true;
} estacionamiento[50];

// Funciones
void Ingresoautomovil();
void MostrarParqueos();
void GuardarDatos();
void GuardarRegistroTickets();
void buscadorPlacas();
void Bloquearparqueos();
void GuardarporDia();
void escituraArchivoDia();
void MostrarVehiculos();
void mostrarTicket(double horasParqueo, double costoHora);

// Declaracion de variables
int opBienvenidaSalida;
double horasParqueo;
double costoHora = 0.50;
int op,TipodeVehiculo, carro = 0, moto = 0, discapacitado = 0, contador=0,guardado=0;



int main()
{
    int tareas;
    cout << "Bienvenido al estacionamiento de plaza multicinema" << endl
         << endl;
bienvenida:
    cout << "Favor ingrese su tipo de usuario" << endl
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
            goto salida;
            break;
        case 3:
        MostrarVehiculos();
        cout << "Desea volver al menu principal?" << endl
        << "1.Si" << endl
        << "2.No" << endl
        << endl;
        cin >> opBienvenidaSalida;
        system ("cls");
            if (opBienvenidaSalida == 1)
            {
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                goto salida;
            }
            break;
        case 4:
            break;
        case 5:
        int subcaso5;     
        do
        {
         Bloquearparqueos();
         cout<<"Desea bloquear otra posicion"<<endl
         <<"(0)Si"<<endl
         <<"(1)No"<<endl;
         cin>> subcaso5;
         system("cls");
        }
        while (subcaso5==0);
         goto bienvenida;
            break;
        case 6:
         //GuardarRegistroTickets();
         cout << "Desea volver al menu principal?" << endl
          << "1.Si" << endl
          << "2.No" << endl
          << endl;
          cin >> opBienvenidaSalida;
          system ("cls");
            if (opBienvenidaSalida == 1)
            {
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                goto salida;
            }
            break;
        case 7:
            MostrarParqueos();
            cout << "Desea volver al menu principal?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            cin >> opBienvenidaSalida;
            system ("cls");
            if (opBienvenidaSalida == 1)
            {
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                goto salida;
            }
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }

    case 2:
        Ingresoautomovil();
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
            int subcaso2;
            cout << "Desea guardar los datos ingresados?" << endl
                 << "(1)Si" << endl
                 << "(0)No" << endl;
            cin >> subcaso2;
            system("cls");
            if (subcaso2 == 1)
            {
                GuardarDatos();
                goto bienvenida;
            }
            else if (subcaso2 == 0)
            {
                goto salida;
            }
            else
                cout << "opcion invalida";
            break;
        case 3:
            cout << "Ingrese la cantidad de tiempo en el parqueo (horas)" << endl;
            cin >> horasParqueo;
            system("cls");
            mostrarTicket(horasParqueo, costoHora);
            cout << "Desea volver al menu principal e ingresar otro vehiculo?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            cin >> opBienvenidaSalida;
            system ("cls");
            if (opBienvenidaSalida == 1)
            {
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                goto salida;
            }
            break;
        case 4:
            MostrarParqueos();
            cout << "Desea volver al menu principal?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            cin >> opBienvenidaSalida;
            system ("cls");
            if (opBienvenidaSalida == 1)
            {
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                goto salida;
            }
            break;
        case 5:
            buscadorPlacas();
            cout << "Desea volver al menu principal?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            cin >> opBienvenidaSalida;
            system ("cls");
            if (opBienvenidaSalida == 1)
            {
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                goto salida;
            }
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
    }
salida:
    cout << "Tenga un buen dia" << endl
         << endl;
    return 0;
}

// Estructuras de todas las funciones declaradas

void Ingresoautomovil()
{ 
    int i;
    cout << "Favor rellenar los siguientes datos:" << endl;
    cout << "Favor ingrese la posicion que desea guardar el vehiculo:" << endl;
    cin >> i;
    system("cls");
    if (estacionamiento[i].Disponibilidad == true)
    {
        cout << "Favor ingrese los digitos de su placa " << endl;
        cin >> automovil.idPlaca;
        estacionamiento[i].Disponibilidad = false;
        system("cls");
        TipodeVehiculo = automovil.idPlaca.length();
        if (TipodeVehiculo == 8)
        {
            carro++;
            cout << carro << endl;
            GuardarporDia();
            system("cls");

            if (carro > 30)
            {
                cout << "Lo sentimos ya no hay parqueos disponibles";
            }
        }
        else if (TipodeVehiculo == 6)
        {
            moto++;
            cout << moto << endl;
            GuardarporDia();
            system("cls");
            if (moto > 15)
            {
                cout << "Lo sentimos ya no hay parqueos disponibles";
            }
        }
        else if (TipodeVehiculo == 4)
        {
            discapacitado++;
            cout << discapacitado << endl;
            GuardarporDia();
            system("cls");
            if (discapacitado > 5)
            {
                cout << "Lo sentimos ya no hay parqueos disponibles" << endl;
            }
        }
        else if (TipodeVehiculo != 4 && TipodeVehiculo != 6 && TipodeVehiculo != 8)
        {
            cout << "numero de placa invalido" << endl;
        }
    }
    else
    {
        cout << "Lo sentimos este espacio esta ocupado" << endl;
    }
}

void MostrarParqueos()
{
    for (int i = 0; i <= 50; i++)
    {
        if (estacionamiento[i].Disponibilidad)
        {

            cout << "Parqueo disponible: " << i << endl;
        }
        else
        {
            cout << "Lo sentimos, parqueo no disponible: " << i << endl;
        }
    }
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
        if (placa == automovil.idPlaca)
        {
            encontrado = true; // Al ingresar los datos de un vehiculo en la posicion "i" el valor de encontrado cambiara
            posicion = i;
            break;
        }
    }

    if (encontrado)
    {
        cout << "Su vehiculo se encuentra en el estacionamiento " << endl;
    }
    else
    {
        cout << "No se encontro su vehiculo" << endl;
    }
}

// Declarar funcion de mostrar tickets
void mostrarTicket(double horasParqueo, double costoHora)
{
    double totalParqueo = horasParqueo * costoHora;
    cout << "-------------------------------------\n";
    cout << "\n";
    cout << "           Ticket del parqueo";
    cout << "\n"
         << "\n";
    cout << "*    Numero de placa";
    cout << "\n"
         << "\n";
    cout << "*    " << automovil.idPlaca;
    cout << "\n"
         << "\n";
    cout << "*    Tiempo en el parqueo";
    cout << "\n"
         << "\n";
    cout << "*    " << horasParqueo << " horas";
    cout << "\n"
         << "\n";
    cout << "*    Total: $" << totalParqueo;
    cout << "\n"
         << "\n";
    cout << "-------------------------------------\n";
}

void Bloquearparqueos()
{
int j;
cout<<"Favor introduzca la posicion del parqueo que desea bloquear"<<endl;
cin>>j;
system("cls");
     if (estacionamiento[j].Disponibilidad== true)
     {
     estacionamiento[j].Disponibilidad= false;
     }
     else if (estacionamiento[j].Disponibilidad==false)
     {
     cout<<"Lo sentimos este estacionamiento ya esta ocupado"<<endl;
     }
}

void GuardarporDia()
{
time_t now;
now=time(NULL);
struct tm nowLocal;
nowLocal=*localtime(&now);
  string nombre_archivo2 =to_string(nowLocal.tm_mday)+"-"+to_string(nowLocal.tm_mon+1)+"-"+to_string(nowLocal.tm_year+1900)+".txt"; 
  cout<<nombre_archivo2;
  ofstream archivo2 {nombre_archivo2};
  escituraArchivoDia();
}

void escituraArchivoDia()
{

time_t now;
now=time(NULL);
struct tm nowLocal;
nowLocal=*localtime(&now);
fstream archivo2;
archivo2.open(to_string(nowLocal.tm_mday)+"-"+to_string(nowLocal.tm_mon+1)+"-"+to_string(nowLocal.tm_year+1900)+".txt", ios::app | ios::out);
archivo2 << automovil.idPlaca << endl;
archivo2 <<" la cantidad de carros hasta ahora es: "<< carro << endl;
archivo2 <<" la cantidad de motos hasta ahora es: "<< moto << endl;
archivo2<<" la cantidad de autos para discapacitados hasta ahora es: "<< discapacitado << endl; 
archivo2.close();
}
void GuardarDatos()
{
    fstream fichero;
    fichero.open("RegistroEstacionamiento.txt", ios::app | ios::out);
    fichero << automovil.idPlaca << endl;
    fichero.close();
}

void MostrarVehiculos()
{
cout<< "en este momento se encuentran: "<<endl
<<carro<<" automoviles"<<endl
<< moto<<" motocicletas"<<endl
<< discapacitado<<" vehiculos para discapacitados"<<endl;
}

/*void GuardarRegistroTickets()
{
    fstream archivo1;
    archivo1.open("RegistroTicketsEstacionamiento.txt", ios::app | ios::out);
    archivo1 << <<endl;
    archivo1.close();
}*/

