#include "QUINE_UTILS.hpp"

void miniterms_put(uint8_t *lista, uint8_t *comb, uint8_t size)
{
    // Iteramos por la lista
    for (int i = 0; i < size; i++)
    {
        comb[lista[i]] = 1;
    }
}