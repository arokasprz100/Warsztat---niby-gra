#ifndef KREACJAPOSTACI_H
#define KREACJAPOSTACI_H

///Funkcja sluzaca do stworzenia sterowanego przez gracza bohatera
///Wykonuje operacje na referencjach do podstawowych atrybutow postaci
///Prowadzi interacje z graczem - pobiera od niego wartosci atrybutow
///Wypisuje rowniez komunikaty pomocnicze
///Funkcja zwraca false jesli tworzenie postaci zakonczylo sie jego smiercia
///W innym wypadku (jesli wszystko zadzialalo) zwraca true
bool kreacjaPostaci (char ** imieBohatera, int& atakFizyczny, int& obronaFizyczna, int& atakMagiczny, int& obronaMagiczna, int& zycie);



#endif // KREACJAPOSTACI_H
