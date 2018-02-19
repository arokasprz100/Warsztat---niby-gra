#ifndef POSMIERCI_H
#define POSMIERCI_H

///Funkcja wyswietlajaca podsumowanie rozgrywki po smierci bohatera
///Wyswietla statystyki potwora, ktory zabil gracz, jak rowniez statystyki gracza
///oraz liste wszystkich zabitych potworow
///Funkcja przyjmuje jako argumenty ilosc zabitych potworow, wszystkie tablice z ich
///statystykami (5), statystyki gracza oraz statystyki potwora ktory zabil gracza
///(to ostatnie w formie tablicy 5 elementow typu int)
///Funkcja wyswietla tekst na standardowym wyjsciu
///W grze powinna zostac wywolana po funkcji walka
void poSmierci (int licznikZabitychPotworow, int **atkfizZabitych, int **obrfizZabitych, int **atkmagZabitych, int **obrmagZabitych, int **zycieZabitych,
                char *imieBohatera, int atakFizyczny, int obronaFizyczna, int atakMagiczny, int obronaMagiczna, int zycie,
                int *zabojcaGracza);

#endif // POSMIERCI_H
