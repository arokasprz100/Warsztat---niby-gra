#include "zwolnijPamiec.h"
#include "zwolnijTabliceIntow.h"

void zwolnijPamiec (char **imieBohatera, int** atkFizZabitych, int** obrFizZabitych, int** atkMagZabitych, int** obrMagZabitych, int** zycieZabitych)
{
    delete [] (*imieBohatera);
    (*imieBohatera)=0;
    zwolnijTabliceIntow(atkFizZabitych);
    zwolnijTabliceIntow(obrFizZabitych);
    zwolnijTabliceIntow(atkMagZabitych);
    zwolnijTabliceIntow(obrMagZabitych);
    zwolnijTabliceIntow(zycieZabitych);

}

