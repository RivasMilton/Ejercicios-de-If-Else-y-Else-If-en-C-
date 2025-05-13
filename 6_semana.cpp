#include<iostream>
using namespace std;

int main()
{
    cout << "==============================================================" << endl;
    cout << "Ingrese por favor ingrese su edad para determinar una talla" << endl;

    int talla = 0;
    char genero;
    char compra;
    char compra2;
    char compra3;

    // saldo disponible del usuario
    int saldo = 300;

    // precios ropa masculina (sin descuento aplicado)
    int comprah1 = 130;
    int comprah2 = 90;
    int comprah3 = 900;

    // precios ropa femenina (sin descuento aplicado)
    int compram1 = 80;
    int compram2 = 110;
    int compram3 = 250;

    // variable que guarda respuesta del usuario al comprar
    char ask;

    // Leer la edad para determinar la talla
    cin >> talla;

    // Determinar la talla
    if (talla <= 10)
    {
        cout << "==============================================================" << endl;
        cout << "Su talla es 8 segun su edad: " << talla << endl;
    }
    else if (talla <= 15)
    {
        cout << "==============================================================" << endl;
        cout << "Su talla es 12 segun su edad: " << talla << endl;
    }
    else if (talla <= 60)
    {
        cout << "==============================================================" << endl;
        cout << "Su talla es 16 segun su edad: " << talla << endl;
    }
    else
    {
        cout << "==============================================================" << endl;
        cout << "Su talla es 18 segun su edad: " << talla << endl;
    }

    cout << "Por favor ingrese su genero (M, F o C): " << endl;
    cout << "M: Masculino, F: Femenino, C: Cualquiera" << endl;
    cin >> genero;

    // Selección del género y prendas disponibles
    switch (genero)
    {
        case 'M':  // Ropa para hombre
            cout << "==============================================================" << endl;
            cout << "Usted ha seleccionado el genero masculino. Las opciones son:" << endl;
            cout << "1. Pantalon Formal: $130 (descuento del 30%)." << endl;
            cout << "2. Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3. Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "Ingrese el numero del producto que desea comprar: " << endl;
            cin >> compra;
            switch (compra)
            {
                case '1':
                    cout << "==============================================================" << endl;
                    cout << "El precio del Pantalon Formal con descuento es: " << comprah1 * 0.7 << endl;
                    if (saldo >= comprah1 * 0.7) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= comprah1 * 0.7;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (comprah1 * 0.7 - saldo) << endl;
                    }
                    break;

                case '2':
                    cout << "==============================================================" << endl;
                    cout << "El precio de la Camisa Casual con descuento es: " << comprah2 * 0.7 << endl;
                    if (saldo >= comprah2 * 0.7) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= comprah2 * 0.7;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (comprah2 * 0.7 - saldo) << endl;
                    }
                    break;

                case '3':
                    cout << "==============================================================" << endl;
                    cout << "El precio de la Chaqueta Premium con descuento es: " << comprah3 * 0.7 << endl;
                    if (saldo >= comprah3 * 0.7) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= comprah3 * 0.7;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (comprah3 * 0.7 - saldo) << endl;
                    }
                    break;

                default:
                    cout << "Seleccion no valida." << endl;
                    break;
            }
            break;

        case 'F':  // Ropa para mujer
            cout << "==============================================================" << endl;
            cout << "Usted ha seleccionado el genero femenino. Las opciones son:" << endl;
            cout << "1. Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "2. Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "3. Abrigo Premium: $250 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "Ingrese el numero del producto que desea comprar: " << endl;
            cin >> compra2;
            switch (compra2)
            {
                case '1':
                    cout << "==============================================================" << endl;
                    cout << "El precio de la Blusa Moderna con descuento es: " << compram1 * 0.8 << endl;
                    if (saldo >= compram1 * 0.8) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= compram1 * 0.8;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (compram1 * 0.8 - saldo) << endl;
                    }
                    break;

                case '2':
                    cout << "==============================================================" << endl;
                    cout << "El precio de la Falda Elegante con descuento es: " << compram2 * 0.8 << endl;
                    if (saldo >= compram2 * 0.8) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= compram2 * 0.8;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (compram2 * 0.8 - saldo) << endl;
                    }
                    break;

                case '3':
                    cout << "==============================================================" << endl;
                    cout << "El precio del Abrigo Premium con descuento es: " << compram3 * 0.8 << endl;
                    if (saldo >= compram3 * 0.8) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= compram3 * 0.8;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (compram3 * 0.8 - saldo) << endl;
                    }
                    break;

                default:
                    cout << "Seleccion no valida." << endl;
                    break;
            }
            break;

        case 'C':  
            cout << "==============================================================" << endl;
            cout << "Usted ha seleccionado cualquiera, podra ver todas las colecciones disponibles." << endl;
            
            // Mostrar todas las opciones combinadas de hombre y mujer
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "1. Pantalon Formal: $130 (descuento del 30%)." << endl;
            cout << "2. Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3. Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            
            cout << "Para Mujer (descuento del 20%):" << endl;
            cout << "4. Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "5. Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "6. Abrigo Premium: $250 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            
            cout << "Ingrese el numero del producto que desea comprar: " << endl;
            cin >> compra;


            switch (compra)
            {
                case '1': 
                    cout << "==============================================================" << endl;
                    cout << "El precio del Pantalon Formal con descuento es: " << comprah1 * 0.7 << endl;
                    if (saldo >= comprah1 * 0.7) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= comprah1 * 0.7;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (comprah1 * 0.7 - saldo) << endl;
                    }
                    break;

                case '2': 
                    cout << "==============================================================" << endl;
                    cout << "El precio de la Camisa Casual con descuento es: " << comprah2 * 0.7 << endl;
                    if (saldo >= comprah2 * 0.7) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= comprah2 * 0.7;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (comprah2 * 0.7 - saldo) << endl;
                    }
                    break;

                case '3': 
                    cout << "==============================================================" << endl;
                    cout << "El precio de la Chaqueta Premium con descuento es: " << comprah3 * 0.7 << endl;
                    if (saldo >= comprah3 * 0.7) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= comprah3 * 0.7;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (comprah3 * 0.7 - saldo) << endl;
                    }
                    break;

                case '4': 
                    cout << "==============================================================" << endl;
                    cout << "El precio de la Blusa Moderna con descuento es: " << compram1 * 0.8 << endl;
                    if (saldo >= compram1 * 0.8) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= compram1 * 0.8;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (compram1 * 0.8 - saldo) << endl;
                    }
                    break;

                case '5': 
                    cout << "==============================================================" << endl;
                    cout << "El precio de la Falda Elegante con descuento es: " << compram2 * 0.8 << endl;
                    if (saldo >= compram2 * 0.8) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= compram2 * 0.8;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (compram2 * 0.8 - saldo) << endl;
                    }
                    break;

                case '6': 
                    cout << "==============================================================" << endl;
                    cout << "El precio del Abrigo Premium con descuento es: " << compram3 * 0.8 << endl;
                    if (saldo >= compram3 * 0.8) {
                        cout << "Desea realizar la compra? (y/n): ";
                        cin >> ask;
                        if (ask == 'y') {
                            saldo -= compram3 * 0.8;
                            cout << "Compra exitosa. Su saldo restante es: $" << saldo << endl;
                        }
                        else {
                            cout << "No se realizo la compra." << endl;
                        }
                    } else {
                        cout << "No tiene suficiente dinero. Le faltan: $" << (compram3 * 0.8 - saldo) << endl;
                    }
                    break;
            }
            break;

        default:
            cout << "Seleccion no valida." << endl;
            break;
    }

    return 0;
}
