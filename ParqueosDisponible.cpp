#include <iostream>
#include <string>

using namespace std;

void mostrarParqueosDisponibles(const string tipoParqueo, int numParqueos) {
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
    const int parqueosAutomovil = 30;
    const int parqueosMoto = 15;
    const int parqueosDiscapacitados = 5;

    int opcion;
    string placa; 

    do {
        cout << "= Menu Principal ="<<endl;
        cout << "1. Administrador"<<endl;
        cout << "2. Usuario"<<endl;
        cout << "3. Salir"<<endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

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
                    mostrarParqueosDisponibles("automoviles", parqueosAutomovil);
                }
                else if (placa.size() == 6) {
                    mostrarParqueosDisponibles("motocicletas", parqueosMoto);
                }
                else if (placa.size() == 4) {
                    mostrarParqueosDisponibles("discapacitados", parqueosDiscapacitados);
                }
                else {
                    cout << "La longitud de la placa es incorrecta"<<endl;
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

    } while (opcion != 3);

    return 0;
}