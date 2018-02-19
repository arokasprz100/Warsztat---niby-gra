#ifndef AWANS_H
#define AWANS_H

///Funkcja awansujaca bohatera, czyli pozwalajaca na przydzial dodatkowego punktu umiejetnosci
///Na wejscie funkcji przekazywane sa referencje do wszystkich atrybutow postaci
///Gracz wybiera jeden z nich, do niego dodawane jest +1
///Funkcja prowadzi interakcje z graczem tj. wyswietla tekst na standartdowe wyjscie
///Oraz pobiera informacje od gracza
///Funkcja zostala zabezpieczona przez blednymi danymi od gracza
void awans(int& atakFizyczny, int& obronaFizyczna, int& atakMagiczny, int& obronaMagiczna, int& zycie);

#endif // AWANS_H
