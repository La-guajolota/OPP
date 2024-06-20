#include <iostream>
using namespace std;

// Variables globales
int op; // OP -> Opcion escogida
int Rn; // Cantidad de resistencias

float Req; // Resistencia equivalente
float aux; // Variable auxiliar para calculos

int main()
{

    do
    {
        // Reinicializamos para nuevas operaciones
        Req = 0;

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
            cout << "Cuantas resistencias en serie tienes? 1 a 5" << endl;
            cin >> Rn;

            // Checamos cuantas resitencias pidio el usuario
            if (Rn >= 1 || Rn <= 5)
            {
                for (int i = 0; i < Rn; i++)
                {
                    cout << "Cuanto vale la resistencia numero: " << i + 1 << " ?" << endl;
                    cin >> aux;

                    // Resistencia equivalente es la suma de las resistencias
                    Req += aux;
                }

                cout << "Resistenci equivalente  en serie es: " << Req << endl;
            }
            else
            {
                cout << "ERROR. No es valido más de 5 resistencia o menos de 1" << endl;
            }
        }
        else if (op == 2) // Circuito paralelo
        {
            cout << "Escogiste Paralelo: " << endl;
            cout << "Escogiste Serie: " << endl;
            cout << "Cuantas resistencias en serie tienes? 1 a 5" << endl;
            cin >> Rn;

            // Checamos cuantas resitencias pidio el usuario
            if (Rn >= 1 || Rn <= 5)
            {
                for (int i = 0; i < Rn; i++)
                {
                    cout << "Cuanto vale la resistencia numero: " << i + 1 << " ?" << endl;
                    cin >> aux;

                    // Resistencia equivalente es la suma de inversos de las resistencias
                    Req += (1 / aux); // ! Req += 1.0 / aux;
                }

                // Inverso de la sumatoria de inversos de las resitencias
                cout << "Resistenci equivalente  en serie es: " << (1.0 / Req) << endl;
            }
            else
            {
                cout << "ERROR. No es valido más de 5 resistencia o menos de 1" << endl;
            }
        }
        else if (op == 3) // Salida
        {
            cout << "Salimos del programa " << endl;
        }

    } while (op != 3);

    return 0;
}