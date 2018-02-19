#ifndef STWORZPOTWORA_H
#define STWORZPOTWORA_H

///Funkcja tworzaca potwora do walki z graczem
///Przyjmuje ona referencje na poszczegolne statystyki oraz pule punktow
///Zmienne przechowujace statystyki musza byc utworzone przed wywolaniem funkcji
///Za pomoca pseudolosowego algorytmu przydzela potworowi punkty
void stworzPotwora(int& atakFizPotwora, int& obronaFizPotwora, int& atakMagPotwora, int& obronaMagPotwora, int& zyciePotwora, int& pulaPunktowPotwora);

#endif // STWORZPOTWORA_H
