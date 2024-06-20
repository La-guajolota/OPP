#include <iostream>
using namespace std;

// Variables globales
int op; // OP -> Opcion escogida

int main()
{

    do
    {
        // El usuario ecoge opcion
        cout << "ESCOGE UNA OPCION (1,2 o 3): " << endl;
        cin >> op;

        // Evaluamos que opcion se tomo
        /*
            1. Es op = 1?
                Sí? -> SERIE y salimos
            2. Si no es = 1. Es op = 2?
                Sí? -> PARALELO y salimos
            3.- ES 3?
                Salimos
        */

        if (op == 1) // Circuito serie
        {
            cout << "Escogiste Serie: " << endl;
        }
        else if (op == 2) // Circuito paralelo
        {
            cout << "Escogiste Paralelo: " << endl;
        }
        else if (op == 3) // Salida
        {
            cout << "Salimos del programa " << endl;
        }

    } while (op != 3);

    return 0;
}