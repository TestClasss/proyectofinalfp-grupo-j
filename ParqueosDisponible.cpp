#include <iostream>
#include <string>

using namespace std;

void mostrarParqueosDisponibles(const string tipoParqueo, int numParqueos) {
    // Funcion para mostrar los parqueos disponibles de un tipo específico
    cout << "Parqueos disponibles para " << tipoParqueo <<endl;
    for (int i = 1; i <= numParqueos; i++) {
        cout << "Parqueo " << i <<"\t";
        if (i % 5 == 0) {
            cout << endl; // Salto de linea cada 5 parqueos
        }
    }
    cout << endl;
}

int main() {
    const int parqueosAutomovil = 30;// Numero de parqueos disponibles para automoviles
    const int parqueosMoto = 15;// Numero de parqueos disponibles para motocicletas
    const int parqueosDiscapacitados = 5;// Numero de parqueos disponibles para discapacitados


    int opcion;// Variable para almacenar la opcion seleccionada
    string placa; // Variable para almacenar el numero de placa

    do {
        cout << "= Menu Principal ="<<endl;
        cout << "1. Administrador"<<endl;// Opcion para el administrador
        cout << "2. Usuario"<<endl; //Opcion para el usuario
        cout << "3. Salir"<<endl;// Opcion para salir del programa
        cout << "Ingrese una opcion: ";
        cin >> opcion;// Lee la opcion seleccionada por el usuario


        switch (opcion) {
            case 1: {
                cout << "= Menu de Administrador ="<<endl;
                mostrarParqueosDisponibles("automoviles", parqueosAutomovil);
                mostrarParqueosDisponibles("motocicletas", parqueosMoto);
                mostrarParqueosDisponibles("discapacitados", parqueosDiscapacitados);
                break;
            }
            case 2: {
                cout << "=== Menu de Usuario ==="<<endl;
                cout << "Ingrese el numero de placa: ";
                cin >> placa;

                if (placa.size() == 8) {
                    mostrarParqueosDisponibles("automoviles", parqueosAutomovil);// Muestra los parqueos disponibles para automoviles si la placa es de 8
                }
                else if (placa.size() == 6) {
                    mostrarParqueosDisponibles("motocicletas", parqueosMoto);// Muestra los parqueos disponibles para las motocicletaas si la placa es de 6
                }
                else if (placa.size() == 4) {
                    mostrarParqueosDisponibles("discapacitados", parqueosDiscapacitados);// Muestra los parqueos disponibles para discapacitados si la placa es de 4
                }
                else {
                    cout << "La longitud de la placa es incorrecta"<<endl;// Muestra un mensaje de error si la placa no coincide con ningun tamaño de placa
                }
                break;
            }
            case 3:
                cout << "Saliendo del programa"<<endl;
                break;
            default:
                cout << "Opcion invalida, Intente denuevo"<<endl;
        }

        char Respuesta;
        cout << "¿Desea regresar al Menu Principal? (S/N): ";
        cin >> Respuesta;

        if (Respuesta == 'S' || Respuesta == 's') {
            cout << "Regresando al Menu Principal"<<endl;
        }
        else {
            cout << "Saliendo del programa"<<endl;
            opcion = 3; // Forzar salida del bucle principal
        }

        cout << endl;

    } while (opcion != 3);// Repetir el bucle mientras la opción seleccionada no sea 3


    return 0;
}