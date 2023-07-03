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
    cout << "Los tickets se han guardado en el archivo TicketsGuardados.txt" << endl;

    ofstream ticketsGenerados("TicketsGuardados.txt", ios::app); // Abre el archivo en modo de apendizaje
    if (ticketsGenerados.is_open())
    {
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