#ifndef WALKA_H
#define WALKA_H


///Funkcja odpowiedzialna za glowna mechanike gry - walke turowa
///Zwraca ilosc pokonanych przez gracza potworow
///W czasie dzialania modyfikuje tablice stanowiace zbior statystyk pokonanych
int walka (char * imieBohatera, int& atakFizyczny, int& obronaFizyczna, int& atakMagiczny, int& obronaMagiczna, int& zycie,
            int **atkfizZabitych, int **obrfizZabitych, int **atkmagZabitych, int **obrmagZabitych, int **zycieZabitych, int (*zabojcaGracza)[5]);



#endif // WALKA_H
