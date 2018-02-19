#ifndef ZWOLNIJPAMIEC_H
#define ZWOLNIJPAMIEC_H

///Funkcja zwalniajaca pamiec zaalokowana na imie bohatera i statystyki pokonanych potworow
///Zapobiega wystapieniu wyciekow pamieci
///Funkcja powinna zostac wywolana na zakonczenie danej petli gry - przed przejsciem do nastepnej iteracji
///Funkcja przyjmuje tablice do zwolnienia
void zwolnijPamiec (char **imieBohatera, int** atkFizZabitych, int** obrFizZabitych, int** atkMagZabitych, int** obrMagZabitych, int** zycieZabitych);


#endif // ZWOLNIJPAMIEC_H
