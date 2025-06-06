#include <iostream>
using namespace std;

int main()
{
    int opcion, Dui = 123456789, cuenta = 123456;
    double saldo = 200.00, retirar, depositar, monto;

    cout << "Ingresa tu DUI (Sin guiones)" << endl;
    cin >> Dui;
    if (Dui != 123456789)
    {
        cout << "Reintantalo" << endl;
        return 0;
    }
    cout << "Ingresa tu numero de cuenta" << endl;
    cin >> cuenta;
    if (cuenta != 123456)
    {
        cout << "Reintantalo" << endl;
        return 0;
    }

    do
    {
        cout << "=======Cajero automatico=======" << endl;
        cout << "=======1.Depositar=============" << endl;
        cout << "=======2.Retirar===============" << endl;
        cout << "=======3.Consulta en la cuenta=" << endl;
        cout << "=======4.Salir=================" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingresa la cantidad de dinero que quieres depositar" << endl;
            saldo = 200.00;
            cin >> depositar;
            cout << "Tu saldo era de $" << saldo << endl;
            cout << "Tu saldo actual es de $" << saldo + depositar << endl;
            monto = saldo + depositar;
            break;
        case 2:
            monto = saldo + depositar;
            cout << "Ingresa la cantidad de dinero que quieres retirar" << endl;
            cin >> retirar;
            if (retirar <= 200)
            {
                monto = saldo + depositar;
                cout << "Tu saldo era de $" << monto << endl;
                cout << "Tu saldo actual es de $" << monto - retirar << endl;
            }
            else if (retirar > 200)
            {
                cout << "Saldo insuficiente en la cuenta" << endl;
            }
            break;
        case 3:
        monto = saldo - retirar;
            cout << "Monto disponible en la cuenta $" << monto << endl;
            break;
        case 4:
            cout << "Gracias por usar el programa" << endl;
            return 0;
            break;
        default:
            cout << "Datos invalidos" << endl;
            break;
        }
    } while (opcion != 4);
    return 0;
}