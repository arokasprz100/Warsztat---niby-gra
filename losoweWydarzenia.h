#ifndef LOSOWEWYDARZENIA_H
#define LOSOWEWYDARZENIA_H

///Funkcja wprowadzajaca element losowosci do gry
///Po kazdej walce, poczawszy od trzeciej, istnieje szansa
///na wystapienie zdarzenia losowego, majacego wplyw na statystyki
///bohatera. Sa 2 rodzaje, jeden wplywa na zycie bohatera, drugi
///na obrony lub ataki - w zaleznosci od szczescia gracza
void losoweWydarzenia(int& atakFizyczny, int& obronaFizyczna, int& atakMagiczny, int& obronaMagiczna, int& zycie );

#endif // LOSOWEWYDARZENIA_H
