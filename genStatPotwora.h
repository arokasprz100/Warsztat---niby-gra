#ifndef GENSTATPOTWORA_H
#define GENSTATPOTWORA_H

///Pomocnicza funkcja sluzaca do wygenerowania pojedynczej statystyki potwora
///Przyjmuje wartosc bazowa na podstawie ktorej ma zostac wygenerowana statystyka
///W przypadku tej gry jest to laczna pula punktow potwora
///Zwraca wartosc danej statystyki (wartosc typu int)
///Zwracana wartosc nigdy nie jest mniejsza od 0
///Funkcja uzywa rand(), aby wiec polepszyc losowosc na poczatku calego projektu
///moze zostac wywolane np. srand(time(NULL))
int genStatPotwora(int wartoscStartowa);

#endif // GENSTATPOTWORA_H
