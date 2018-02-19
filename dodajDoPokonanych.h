#ifndef DODAJDOPOKONANYCH_H
#define DODAJDOPOKONANYCH_H

///Funkcja modyfikujaca zbior danych (w postaci tablic) pokonanych potworow
///Pierwsze 5 argumentow to wskazniki na poszczegolne tablice zbioru
///Kolejne 5 to statystyki wlasnie pokonanego potwora
///Funkcja rozszerza kazda z tablic o jedno pole (odpowiednio na kazdy z atrybutow pokonanego potwora)
///Pamiec zaalokowana przez ta funkcje nalezy potem zwolnic - funkcja nie odpowiada za to
void dodajDoPokonanych (int ** atkFizPokonanych, int** obrFizPokonanych, int** atkMagPokonanych, int ** obrMagPokonanych, int **zyciePokonanych,
                        int atkFiz, int obrFiz, int atkMag, int obrMag, int zycie, int licznik);


#endif // DODAJDOPOKONANYCH_H
