void mostrarparqueos()
{
     for (int i = 0; i <= 50; i++)
     {
          if (estacionamiento[i].Disponibilidad)
          {

               cout << "Parqueo disponible: " << i << endl;
          }
          else
          {
               cout << "Parqueo NO disponible: " << i << endl;
          }
     }
}