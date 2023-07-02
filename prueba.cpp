// Función
void mostrarTicket(double horasParqueo, double costoHora);
double horasParqueo;
double costoHora = 0.50;
int placaVehiculo;
int op;
double totalParqueo = horasParqueo * costoHora;
int main()
{
     cout << "Ingrese la cantidad de tiempo en el parqueo" << endl;
     cin >> horasParqueo;
     mostrarTicket(horasParqueo, costoHora);
     return 0;
}
// Declarar funcion de mostrar tickets
void mostrarTicket(double horasParqueo, double costoHora)
{
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