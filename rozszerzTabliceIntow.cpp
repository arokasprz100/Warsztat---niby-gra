#include "rozszerzTabliceIntow.h"

void rozszerzTabliceIntow (int **tablica, int aktualnyRozmiar, int wartoscDoDodania)
{
    int* tymczasowa=new int[aktualnyRozmiar];

    for (int i=0; i<aktualnyRozmiar; i++)
    {
        tymczasowa[i]=(*tablica)[i];
    }

    delete [] (*tablica);

    (*tablica)=new int [aktualnyRozmiar+1];
    for (int i=0; i<aktualnyRozmiar; i++)
    {
        (*tablica)[i]=tymczasowa[i];
    }
    (*tablica)[aktualnyRozmiar]=wartoscDoDodania;
    delete [] tymczasowa;
}
