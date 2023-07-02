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