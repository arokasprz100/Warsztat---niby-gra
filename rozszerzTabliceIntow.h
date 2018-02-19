#ifndef ROZSZERZTABLICEINTOW_H
#define ROZSZERZTABLICEINTOW_H

///Pomocnicza funkcja do rozszerzania o 1 dynamicznie zaalokowanej tablicy int
///Na wejscie przyjmuje podwojny wskaznik na tablice do rozszerzenia,
///aktualny rozmiar tablicy oraz wartosc typu int ktora ma zostac dolozona na koniec tablicy
///Funkcja nie zwalnia alokowanej przez siebie pamieci - w rozumieniu rozszerzanej tablicy
///Zwalnia natomiast tworzona posrednio tablice pomocnicza
///Funkcja do alokacji uzywa operatora new []
void rozszerzTabliceIntow (int **tablica, int aktualnyRozmiar, int wartoscDoDodania);

#endif // ROZSZERZTABLICEINTOW_H
