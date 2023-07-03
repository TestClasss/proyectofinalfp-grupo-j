// librerias utilizadas--------------------------------------------------------------------------------
#include <iostream>
#include "Lib.hpp"
using namespace std;
// Programa Principal-------------------------------------------------------------------------------------------------
int main()
{
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