// librerias utilizadas--------------------------------------------------------------------------------
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
} estacionamiento[51];

// Declaracion prototipo de las funciones--------------------------------------------------------------
void Ingresoautomovil();
void MostrarParqueos();
void GuardarDatos();
void mostrarAutoConMayorFrecuencia();
void buscadorPlacas();
void Bloquearparqueos();
void GuardarporDia();
void escituraArchivoDia();
void MostrarVehiculos();
void mostrarTicket();

// Declaracion de variables globales----------------------------------------------------------------------------------
int opBienvenidaSalida;
double horasParqueo;
double costoHora = 0.50;
int op, TipodeVehiculo, carro = 0, moto = 0, discapacitado = 0, contador = 0;


// Programa Principal-------------------------------------------------------------------------------------------------
int main()
{
    int tareas;
    // texto quemado
    cout << "Bienvenido al estacionamiento de plaza multicinema" << endl
         << endl;
// punto de inicio: bienvenida
bienvenida:
    cout << "Favor ingrese su tipo de usuario" << endl
         << "(1) Administrativo" << endl
         << "(2) general" << endl;
    cin >> tareas;
    system("cls");
    switch (tareas)
    {
    // Para un usuario Administrativo
    case 1:
        int opciones1;
        // Mostrar opciones posibles (administrativo)
        cout << "Elija la operacion que desea realizar" << endl
             << "(1)Regresar al menu principal" << endl
             << "(2)Salir" << endl
             << "(3)Mostrar cantidad de vehiculos presentes" << endl
             << "(4)Mostrar vehiculo con mayor ingreso" << endl
             << "(5)Bloquear parqueos especifico" << endl
             << "(6)Mostrar la cantidad de espacios disponibles" << endl;
        cin >> opciones1;
        system("cls");
        switch (opciones1)
        {
        case 1:
            // Vuelve al menu principal
            goto bienvenida;
        case 2:
            // Envia al final del programa
            goto salida;
        case 3:
            // Llamado a la funcion tipo void
            MostrarVehiculos();
            // Sentencia para seguir ejecutando el programa
            cout << "Desea volver al menu principal?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            // Decision: Seguir ejecutando el programa
            cin >> opBienvenidaSalida;
            system("cls");
            if (opBienvenidaSalida == 1)
            {
                // De seguir ejecutandose volvera al punto de partida
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                // Envia al final del programa
                goto salida;
            }
            break;
        case 4:
        //Llamado a la funcion para mostrar auto con mayor frecuencia
        mostrarAutoConMayorFrecuencia();
           // Sentencia para seguir ejecutando el programa
        cout << "Desea volver al menu principal?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
                 // Decision: Seguir ejecutando el programa
            cin >> opBienvenidaSalida;
            system("cls");
            if (opBienvenidaSalida == 1)
            {
                // Envia al punto de inicio del programa
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                // Envia al final del programa
                goto salida;
            }
            break;
        case 5:
            int subcaso5;
            // Bucle para la repeticion de funcion Bloqueo
            do
            {
                // Llamado a la funcion de bloqueo tipo void
                Bloquearparqueos();
                // Decision: Seguir ejecutando la funcion bloqueo
                cout << "Desea bloquear otra posicion" << endl
                     << "(0)Si" << endl
                     << "(1)No" << endl;
                cin >> subcaso5;
                system("cls");
            } while (subcaso5 == 0);
            // Envio al punto de inicio
            goto bienvenida;
            break;
        case 6:
            // Lamado a la funcion: mostrar parqueos
            MostrarParqueos();
            // Sentencia para seguir ejecutando el programa
            cout << "Desea volver al menu principal?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            // Decision: Seguir ejecutando el programa
            cin >> opBienvenidaSalida;
            system("cls");
            if (opBienvenidaSalida == 1)
            {
                // De seguir ejecutandose volvera al punto de partida
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                // Envia al final del programa
                goto salida;
            }
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
    // Para un usuario General
    case 2:
        // Llamado ala funcion para agregar un vehiculo
        Ingresoautomovil();
        int opciones2;
        // Mostrar opciones posibles (general)
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
            // Envia al punto de inicio
            goto bienvenida;
            break;
        case 2:
            int subcaso2;
            // Desicion: Salir guardando los datos ingresados
            cout << "Desea guardar los datos ingresados?" << endl
                 << "(1)Si" << endl
                 << "(0)No" << endl;
            cin >> subcaso2;
            system("cls");
            if (subcaso2 == 1)
            {
                // Llamado a la funcion para guardar datos en un archivo de texto
                GuardarDatos();
                // Envia al punto de inicio
                goto bienvenida;
            }
            else if (subcaso2 == 0)
            {
                // Envia al final del programa
                goto salida;
            }
            else
                cout << "opcion invalida";
            break;
        case 3:
            // Pedida de tiempo para cobro(Horas)
            cout << "Ingrese la cantidad de tiempo en el parqueo (horas)" << endl;
            cin >> horasParqueo;
            system("cls");
            // Llamado ala funcion para generar y mostrar ticket
            mostrarTicket();
            // Desicion: continuar el programa
            cout << "Desea volver al menu principal e ingresar otro vehiculo?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            cin >> opBienvenidaSalida;
            system("cls");
            if (opBienvenidaSalida == 1)
            {
                // Envia al punto de inicio
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                // Envia al final del programa
                goto salida;
            }
            break;
        case 4:
            // Llamado ala funcion para mostrar parqueos disponibles
            MostrarParqueos();
            // Desicion: continuar el programa
            cout << "Desea volver al menu principal?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            cin >> opBienvenidaSalida;
            system("cls");
            if (opBienvenidaSalida == 1)
            {
                // Envia al punto de inicio del programa
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                // Envia al final del programa
                goto salida;
            }
            break;
        case 5:
            // Llamado a la funcion para bucar una placa ingresada al sistema
            buscadorPlacas();
            // Desicion: continuar el programa
            cout << "Desea volver al menu principal?" << endl
                 << "1.Si" << endl
                 << "2.No" << endl
                 << endl;
            cin >> opBienvenidaSalida;
            system("cls");
            if (opBienvenidaSalida == 1)
            {
                // Envia al punto de inicio
                goto bienvenida;
            }
            else if (opBienvenidaSalida == 2)
            {
                // Envia al final del programa
                goto salida;
            }
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
    }
// Punto salida del programa (principal)
salida:
    // Mensaje de salida
    cout << "Tenga un buen dia" << endl
         << endl;
    return 0;
}

// Estructuras de todas las funciones declaradas---------------------------------------------------------

// Funcion para el ingreso de datos(automovil)
void Ingresoautomovil()
{
    // Declaracion de variable de posicion
    int i;
    cout << "Favor rellenar los siguientes datos:" << endl;
    cout << "Favor ingrese la posicion que desea guardar el vehiculo:" << endl;
    cin >> i;
    // Ingreso de posicion deseada 1-50
    system("cls");
    // Condicion: Disponibilidad del estacionamiento en posicion buscada
    if (estacionamiento[i].Disponibilidad == true)
    {
        // Pedir: digitos de identificacion de la placa
        cout << "Favor ingrese los digitos de su placa " << endl;
        // Guardar: digitos ingresados
        cin >> automovil.idPlaca;
        // Cambio de disponibilidad del estacionamiento en la posicion deseada
        estacionamiento[i].Disponibilidad = false;
        system("cls");
        // Variable en la que se guarda el tamaño segun los digitos de la placa ingresada
        TipodeVehiculo = automovil.idPlaca.length();
        // Opcion:Placa 8 digitos
        if (TipodeVehiculo == 8)
        {
            // Aumento de la variable carro
            carro++;
            cout << carro << endl;
            // Llamado a la funcion para que se guarde el valor de la variable carro
            GuardarporDia();
            system("cls");
            // Limite: Variable carro no mayor a 30
            if (carro > 30)
            {
                // Mensaje en caso de tener mas de 30 carros
                cout << "Lo sentimos ya no hay parqueos disponibles";
            }
        }
        // Opcion:Placa 6 digitos
        else if (TipodeVehiculo == 6)
        {
            // Aumento de la variable moto
            moto++;
            cout << moto << endl;
            // Llamado a la funcion para que se guarde el valor de la variable moto
            GuardarporDia();
            system("cls");
            // Limite: Variable moto no mayor a 15
            if (moto > 15)
            {
                // Mensaje en caso de tener mas de 15 motos
                cout << "Lo sentimos ya no hay parqueos disponibles";
            }
        }
        // Opcion:Placa 4 digitos
        else if (TipodeVehiculo == 4)
        {
            // Aumento de la variable para vehiculos de discapacitados
            discapacitado++;
            cout << discapacitado << endl;
            // Llamado a la funcion para que se guarde el valor de la variable vehiculo para discapacitado
            GuardarporDia();
            system("cls");
            // Limite: Variable vehiculo discapacitado no mayor a 5
            if (discapacitado > 5)
            {
                // Mensaje en caso de tener mas de 5 vehiculos para discapacitado
                cout << "Lo sentimos ya no hay parqueos disponibles" << endl;
            }
        }
        // Opcion: En caso de ingresar placa con digitos distintos a:4,6,8
        else if (TipodeVehiculo != 4 && TipodeVehiculo != 6 && TipodeVehiculo != 8)
        {
            cout << "numero de placa invalido" << endl;
        }
    }
    // Caso disponibilidad del estacionamiento (ocupado)
    else
    {
        cout << "Lo sentimos este espacio esta ocupado" << endl;
    }
}

// Funcion para Mostrar la disponibilidad de los parqueos
void MostrarParqueos()
{
    // Bucle para recorre los 50 espacios
    for (int i = 0; i <= 50; i++)
    {
        // Condicion: para cada estacionamiento dentro del bucle
        if (estacionamiento[i].Disponibilidad)
        {
            // Mensaje a mostrar en los espacios disponibles
            cout << "Parqueo disponible: " << i << endl;
        }
        else
        {
            // Mensaje a mostrar en los espacios ocupados
            cout << "Lo sentimos, parqueo no disponible: " << i << endl;
        }
    }
}

// Funcion para el guardado de datos en un archivo de texto
void GuardarDatos()
{
    // funcion stream para crear y editar el archivo de texto
    fstream fichero;
    // Nombre a asignar para el archivo de texto
    fichero.open("RegistroEstacionamiento.txt", ios::app | ios::out);
    // Datos a guardar
    fichero << automovil.idPlaca << endl;
    fichero.close();
}

// Funcion para encontrar un auto dentro del estacionamiento por medio de los digitos de su placa
void buscadorPlacas()
{
    // Ingresa la placa a buscar, es una variable distinta a idPlaca
    string placa;
    cout << "Ingrese la placa del vehiculo que busca: ";
    cin >> placa;
    // Condicion: en caso de encontrar la placa
    bool encontrado = false;
    // Condicion: placa buscada coincide con las ingresadas
    if (placa == automovil.idPlaca)
    {
        encontrado = true;
    }
    // Condicion: En caso de encontrar la placa
    if (encontrado)
    {
        cout << "Su vehiculo se encuentra en el estacionamiento " << endl;
    }
    // Condicion: En caso de no encontrar la placa
    else
    {
        cout << "No se encontro su vehiculo" << endl;
    }
}

// Funcion de crear y mostrar tickets
void mostrarTicket()
{
    // Operacion: para obtener el total a pagar
    double totalParqueo = horasParqueo * costoHora;
    // Estructua del ticket con valores a mostrar
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
    cout << "Los tickets se han guardado en el archivo TicketsGuardados.txt" << endl;    
    // Operacion: Crear y guardar en un archivo de texto los tickets
    ofstream ticketsGenerados("TicketsGuardados.txt", ios::app); // Abre el archivo en modo de apendizaje
    if (ticketsGenerados.is_open())
    {
        // Estructura guardada en el archivo de texto
        ticketsGenerados << "-------------------------------------\n";
        ticketsGenerados << "\n";
        ticketsGenerados << "           Ticket del parqueo";
        ticketsGenerados << "\n"
                         << "\n";
        ticketsGenerados << "*    Numero de placa";
        ticketsGenerados << "\n"
                         << "\n";
        ticketsGenerados << "*    " << automovil.idPlaca;
        ticketsGenerados << "\n"
                         << "\n";
        ticketsGenerados << "*    Tiempo en el parqueo";
        ticketsGenerados << "\n"
                         << "\n";
        ticketsGenerados << "*    " << horasParqueo << " horas";
        ticketsGenerados << "\n"
                         << "\n";
        ticketsGenerados << "*    Total: $" << totalParqueo;
        ticketsGenerados << "\n"
                         << "\n";
        ticketsGenerados << "-------------------------------------\n";

        ticketsGenerados.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo TicketsGuardados.txt" << endl;
    }
}

// Funcion para el bloqueo de un parqueo por su posicion
void Bloquearparqueos()
{
    // Variable de posicion
    int j;
    cout << "Favor introduzca la posicion del parqueo que desea bloquear" << endl;
    cin >> j;
    system("cls");
    // Condicion: disponibilidad el estacionamiento en la posicion deseada(desocupado)
    if (estacionamiento[j].Disponibilidad == true)
    {
        // Cambio de disponibilidad a ocupado en la posicion deseada
        estacionamiento[j].Disponibilidad = false;
    }
    // Condicion: disponibilidad el estacionamiento en la posicion deseada(ocupado)
    else if (estacionamiento[j].Disponibilidad == false)
    {
        cout << "Lo sentimos este estacionamiento ya esta ocupado" << endl;
    }
}

// Funcion para crear y guardar datos en un archivo de texto; dd//mm//aa
void GuardarporDia()
{
    time_t now;
    now = time(NULL);
    struct tm nowLocal;
    nowLocal = *localtime(&now);
    // Asignacion nombre del archivo de texto por dd/mm/aa
    string nombre_archivo2 = to_string(nowLocal.tm_mday) + "-" + to_string(nowLocal.tm_mon + 1) + "-" + to_string(nowLocal.tm_year + 1900) + ".txt";
    cout << nombre_archivo2;
    fstream archivo2{nombre_archivo2};
    // Llamado funcion esciruta en archivo dd/mm/aa
    escituraArchivoDia();
}
//Función para mostrar auto con mayor ingreso
void mostrarAutoConMayorFrecuencia() {
    string tipoAuto = "";

    if (carro > moto && carro > discapacitado) {
        tipoAuto = "Carro";
    } else if (moto > carro && moto > discapacitado) {
        tipoAuto = "Moto";
    } else if (discapacitado> moto && discapacitado> carro) {
        tipoAuto = "Discapacitado";
    }else{
        cout<<"No hay datos para determinar el automovil con mayor ingreso"<<endl;
        return;
    }
        cout<<"El automovil de mayor ingreso es: "<<tipoAuto<<endl;
    }
// Funcion para la escritura en el archivo dd/mm/aa
void escituraArchivoDia()
{
    time_t now;
    now = time(NULL);
    struct tm nowLocal;
    nowLocal = *localtime(&now);
    fstream archivo2;
    archivo2.open(to_string(nowLocal.tm_mday) + "-" + to_string(nowLocal.tm_mon + 1) + "-" + to_string(nowLocal.tm_year + 1900) + ".txt", ios::app);
   //Datos a guardar
    archivo2 << automovil.idPlaca << endl;
    archivo2 << " La cantidad de carros hasta ahora es: " << carro << endl;
    archivo2 << " La cantidad de motos hasta ahora es: " << moto << endl;
    archivo2 << " La cantidad de autos para discapacitados hasta ahora es: " << discapacitado << endl;
}

// Funcion para mostrar la cantidad por tipo de vehiculos presentes en el estacionamiento
void MostrarVehiculos()
{
    // Mostrar datos
    cout << "En este momento se encuentran: " << endl
         << carro << " Automoviles" << endl
         << moto << " Motocicletas" << endl
         << discapacitado << " Vehiculos para discapacitados" << endl;
}
