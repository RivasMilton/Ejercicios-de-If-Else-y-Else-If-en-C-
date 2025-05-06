#include <iostream>
using namespace std;

int main()
{
    int dia = 0;
    cout << "Ingrese el dia de la semana (1-7): ";
    cin >> dia;

    if (dia == 1)
    {
        cout << "Su dia es Lunes y es dia laboral" << endl;
    }
    else if (dia == 2)
    {
        cout << "Su dia es Martes y es dia laboral" << endl;
    }
    else if (dia == 3)
    {
        cout << "Su dia es Miercoles y es dia laboral" << endl;
    }
    else if (dia == 4)
    {
        cout << "Su dia es Jueves y es dia laboral" << endl;
    }
    else if (dia == 5)
    {
        cout << "Su dia es Viernes y es dia laboral" << endl;
    }
    else if (dia == 6)
    {
        cout << "Su dia es Sabado y es fin de semana :)" << endl;
    }
    else if (dia == 7)
    {
        cout << "Su dia es Domingo y es fin de semana :)" << endl;
    }
    else
    {
        cout << "Dia no valido" << endl;
    }

    return 0;
}