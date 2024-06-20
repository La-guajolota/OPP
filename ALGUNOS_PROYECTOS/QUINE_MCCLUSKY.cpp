/*

* TERMINOS IMPORTANTES
* * Implicant
    is defined as a group of ones
* * Prime implicant
    is the largest possible group of ones
* * Essntial prime implicant
    is the prime implicant having the least one min-term which cannot be combined in any oter way.

* *

*/

/*
Librarias nativas de C/C++
*/
#include <iostream>
#include <stdint.h>
using namespace std;

/*
Librarias del usuario
*/
#include "QUINE_UTILS.hpp"

/*
Defines
*/
#define var 4 // Cantidad de variables

/*
Variables globales
*/
uint8_t comb[var] = {0};                       // Almacena los miniterminos
uint8_t lista[8] = {0, 1, 3, 7, 8, 9, 11, 15}; // Miniterminos

int main()
{

    // Ponemos los miniterminos
    miniterms_put(lista, comb, 8);

    //

    cout << "Resultado: " << endl;
    return 0;
}