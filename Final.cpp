// Funcion para mostrar la disponibilidad de los parqueos
void mostrarparqueos()
{
    // Recorrer los parqueos del 0 al 50
     for (int i = 0; i <= 50; i++)
     {
        // Verificar la disponibilidad del parqueo
          if (estacionamiento[i].Disponibilidad)
          {
             // Mostrar el numero de parqueo disponible
               cout << "Parqueo disponible: " << i << endl;
          }
          else
          {
            // Mostrar el numero de parqueo no disponible
               cout << "Parqueo NO disponible: " << i << endl;
          }
     }
}