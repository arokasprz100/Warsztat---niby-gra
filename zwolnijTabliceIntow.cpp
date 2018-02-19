#include "zwolnijTabliceIntow.h"

void zwolnijTabliceIntow (int **tablica)
{
    if (*tablica!=0)
    {
        delete [] (*tablica);
        *tablica=0;
    }
}
