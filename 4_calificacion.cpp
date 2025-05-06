#include <iostream>
using namespace std;

int main() {
    int calificacion;
    cout << "Ingrese la calificacion: ";
    cin >> calificacion;

    if (calificacion >= 0 && calificacion <= 100) {
        if (calificacion >= 60) {
            cout << "Aprobado" << endl;
        } else {
            cout << "Reprobado" << endl;
        }
    } else {
        cout << "Calificacion no valida" << endl;
    }

    return 0;
}