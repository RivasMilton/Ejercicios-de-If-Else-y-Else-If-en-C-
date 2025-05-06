#include <iostream>
using namespace std;

int main ()
{
    string nombre_usuario;
    string contrasena_usuario; 
    cout << "Ingrese su nombre de usuario: ";
    cin >> nombre_usuario;
    cout << "Ingrese su contrasena: ";
    cin >> contrasena_usuario;

    if (nombre_usuario == "Enmanuel" && contrasena_usuario == "1234")
    {
        cout << "Bienvenido a su cuenta" << endl;
    }
    else if (nombre_usuario != "Enmanuel" && contrasena_usuario == "1234")
    {
        cout << "Usuario incorrecto" << endl;
    }
    else if (nombre_usuario == "Enmanuel" && contrasena_usuario != "1234")
    {
        cout << "Contrasena incorrecta" << endl;
    }
    else
    {
        cout << "Usuario y contrasena incorrectos" << endl;
    }

}