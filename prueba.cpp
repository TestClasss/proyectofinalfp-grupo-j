#include <iostream>
using namespace std;
void mostrarTicket(double horasParqueo, double costoHora);
double horasParqueo;
double costoHora = 0.50;
int placaVehiculo;
int size, op;
int main()
{
    do
    {
        cout << "Ingrese la cantidad de tiempo en el parqueo" << endl;
        cin >> horasParqueo;
        cout << "Ingrese la placa de su vehiculo" << endl;
        cin >> placaVehiculo;
        mostrarTicket(horasParqueo, costoHora);
        cout << "Desea ingresar otro vehiculo en el parqueo? 0-Si 1-No" << endl;
        cin >> op;
    } while (op != 1);
    return 0;
}
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
    cout << "*    " << placaVehiculo;
    cout << "\n"
         << "\n";
    cout << "*    Tiempo en el parqueo";
    cout << "\n"
         << "\n";
    cout << "*    " << horasParqueo << " horas";
    cout << "\n"
         << "\n";
    cout << "*    Total: $" << totalParqueo ;
    cout << "\n"
         << "\n";
    cout << "-------------------------------------\n";
}