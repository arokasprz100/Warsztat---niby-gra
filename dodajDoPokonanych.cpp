#include "dodajDoPokonanych.h"
#include "rozszerzTabliceIntow.h"

void dodajDoPokonanych (int ** atkFizPokonanych, int** obrFizPokonanych, int** atkMagPokonanych, int ** obrMagPokonanych, int **zyciePokonanych,
                        int atkFiz, int obrFiz, int atkMag, int obrMag, int zycie, int licznik)
{

    if (licznik==0)
    {
        *atkFizPokonanych=new int[1];
        *obrFizPokonanych=new int[1];
        *atkMagPokonanych=new int[1];
        *obrMagPokonanych=new int[1];
        *zyciePokonanych=new int[1];


        (*atkFizPokonanych)[0]=atkFiz;
        (*obrFizPokonanych)[0]=obrFiz;
        (*atkMagPokonanych)[0]=atkMag;
        (*obrMagPokonanych)[0]=obrMag;
        (*zyciePokonanych)[0]=zycie;

    }
    else
    {
        rozszerzTabliceIntow(atkFizPokonanych, licznik, atkFiz);
        rozszerzTabliceIntow(obrFizPokonanych, licznik, obrFiz);
        rozszerzTabliceIntow(atkMagPokonanych, licznik, atkMag);
        rozszerzTabliceIntow(obrMagPokonanych, licznik, obrMag);
        rozszerzTabliceIntow(zyciePokonanych, licznik, zycie);
    }

}





