#ifndef PRZYDZIELENIEPUNKTOW_H
#define PRZYDZIELENIEPUNKTOW_H

///Funkcja pomocnicza sluzaca do czesciowej automatyzacji procesu przydzialu punktow na atrybuty
///Posiada czesciowe zabezpieczenie przed bledymi danymi - np jesli gracz poda char zamiast int
///Jesli gracz poda float zamiat int to wartosc zostanie obcieta do czesci calkowitej
void przydzieleniePunktow(int &atrybut, int& pulaPunktow);

#endif // PRZYDZIELENIEPUNKTOW_H
