#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout << "Selecciona un tipo de comida" << endl;
    cout << "1.Fruta" << endl;
    cout << "2.Verdura" << endl;
    cout << "3.Carne" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "La fruta tiene un aproximado de 42 calorias" << endl;
        break;
    case 2:
        cout << "La verdura tiene un aproxima de 40 calorias" << endl;
        break;
    case 3:
        cout << "La carne tiene un aproximado de 112 calorias" << endl;
        break;
    default:
        cout << "La opcion no es valida" << endl;
        break;
    }

    return 0;
}