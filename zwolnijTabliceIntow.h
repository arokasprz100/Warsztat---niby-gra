#ifndef ZWOLNIJTABLICEINTOW_H
#define ZWOLNIJTABLICEINTOW_H

///Pomocnicza funkcja do zwalniania dynamicznie zaaolowanej tablicy liczb typu int
///Funkcja sprawdza czy tablica istnieje (czy wskaznik nie jest rowny NULL)
///W grze sluzy do zwolnienia pamieci zaalokowanej dla atrybutow pokonanych potworow
///po zakonczeniu rozgrywki
///Funkcja przyjmuje na wejsciu podwojny wskaznik na tablice do zwolnienia
///Do dealokacji uzyty zostaje operator delete []
void zwolnijTabliceIntow (int **tablica);

#endif // ZWOLNIJTABLICEINTOW_H
