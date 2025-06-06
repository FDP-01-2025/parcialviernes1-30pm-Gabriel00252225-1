#include <iostream>
using namespace std;

int main()
{
    int peso;

    cout << "Peso de paquete" << endl;
    cout << "Ingrese el peso de su paquete (kg)" << endl;
    cin >> peso;

    if (peso <= 5)
    {
        cout << "Tu paquete pesa menos de 6kg y se te cobra $5" << endl;
    }
    else if (peso > 5 && peso <= 10)
    {
        cout << "Tu paquete pesa entre 6kg y 10kg y se te cobra $10" << endl;
    }

    else if (peso > 10)
    {
        cout << "Tu paquete pesa mas de 10kg y se te cobra $15" << endl;
    }
    else
    {
        cout << "Datos incorrectos" << endl;
    }
    return 0;
}
