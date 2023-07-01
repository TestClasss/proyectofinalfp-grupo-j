#include <iostream>
#include <string.h>
using namespace std;
void Generararchivodia();
void Ingresoautomovil();
int main()
{
Generararchivodia();
return 0;
}

void Generararchivopordia()
{string Archivo =to_string(nowLocal.tm_mday)+"-"+to_string(nowLocal.tm_mon+1)+"-"+to_string(nowLocal.tm_year+1900)+".txt"; 
            cout<<Archivo;
            string tipo;
            int Cantidadvehiculo=0;
            ofstream archivo {Archivo};
        archivo<<automovil.idPlaca
        TipodeVehiculo = automovil.idPlaca.length();
        if (TipodeVehiculo == 8)
        {
            tipo="carro";
            archivo<<tipo;
}
void Ingresoautomovil()
{
   int i, TipodeVehiculo, carro = 0, moto = 0, discapacitado = 0;
    cout << "favor ingrese la posicion que desea"<<endl;
    cin >> i;
{
    ifstream fichero;
    fichero.open("")
}
    if (estacionamiento[i].Disponibilidad == "desocupado")
    {
        cout << "Favor ingrese los digitos de su placa " << endl;
        cin >> automovil.idPlaca;
    {
        fstream fichero;
        fichero.open("RegistroPlacas.txt", ios::app|ios::out);
        fichero<<automovil.idPlaca<<endl;
        fichero.close(); 
    }
        estacionamiento[i].Disponibilidad = "ocupado";
    {
        fstream fichero;
        fichero.open("RegistroEstacionamiento.txt", ios::app|ios::out);
        fichero<<estacionamiento[i].Disponibilidad<<endl;
        fichero.close(); 
    }
        TipodeVehiculo = automovil.idPlaca.length();
        if (TipodeVehiculo == 8)
        {
        carro++;
            if (carro > 30)
            {
                cout << "Lo sentimos ya no hay parqueos dispoibles";
            }
            else if(carro<30)
            {
            fstream fichero;
            fichero.open("RegistroEstacionamientoCarros.txt", ios::app|ios::out);
            fichero<<carro<<endl;
            fichero.close(); 
            }
        }     
        else if (TipodeVehiculo == 6)
        {
            moto++;
            if (moto > 15)
            {
                cout << "Lo sentimos ya no hay parqueos dispoibles";
            }
            else if(moto<15)
            {
            fstream fichero;
            fichero.open("RegistroEstacionamientoMotos.txt", ios::app|ios::out);
            fichero<<moto<<endl;
            fichero.close(); 
            }   
        }
        else if (TipodeVehiculo == 4)
        {
            discapacitado++;
            if (discapacitado > 5)
            {
                cout << "Lo sentimos ya no hay parqueos dispoibles";
            }
            else if(discapacitado<5)
            {
            fstream fichero;
            fichero.open("RegistroEstacionamientoDiscapacitados.txt", ios::app|ios::out);
            fichero<<discapacitado<<endl;
            fichero.close();   
            }
        }
    }
    else
    {
        cout << "Lo sentimos este espacio esta ocupado";
    } 
cout<<carro<<endl;
cout<<moto<<endl;
cout<<discapacitado<<endl;
} 