#include <iostream>

#include "kreacjaPostaci.h"
#include "przydzieleniePunktow.h"
#include "wczytajImie.h"

bool kreacjaPostaci (char ** imieBohatera, int& atakFizyczny, int& obronaFizyczna, int& atakMagiczny, int& obronaMagiczna, int& zycie)
{
    using namespace std;
    cout<<"*****TWORZENIE POSTACI*****"<<endl;
    cout<<"Podaj imie swojego bohatera: ";
    wczytajImie (imieBohatera);

    cout<<endl;
    cout<<"Witaj "<<*imieBohatera<<"!"<<endl;
    cout<<"Teraz musisz rozdzieli punkty umiejetnosci swojego bohatera"<<endl;
    cout<<"pomiedzy nastepujace atrybuty:"<<endl;
    cout<<"1.Atak fizyczny \n2.Obrona fizyczna \n3.Atak magiczny \n4.Obrona magiczna \n5.Zycie"<<endl;
    cout<<"Bazowo kazdy z tych atrybutow ma wartosc 0. Masz 20 punktow do rozdania"<<endl;
    cout<<"Punkty, ktore nie zostana wydane na pierwsze cztery atrybuty sa mnozone przez 2 i przypisywane do zycia"<<endl;

    int pulaPunktow=20;

    cout<<endl;
    cout<<"Teraz przydziel punkty: "<<endl;
    cout<<"1.Atak fizyczny: ";
    przydzieleniePunktow(atakFizyczny, pulaPunktow);
    cout<<"2.Obrona fizyczna: ";
    przydzieleniePunktow(obronaFizyczna, pulaPunktow);
    cout<<"3.Atak magiczny: ";
    przydzieleniePunktow(atakMagiczny, pulaPunktow);
    cout<<"4.Obrona magiczna: ";
    przydzieleniePunktow(obronaMagiczna, pulaPunktow);

    if (pulaPunktow!=0)
    {
        zycie=pulaPunktow*2;
    }
    else
    {
        cout<<"Niestety, zabraklo Ci punktow, ktore zostalyby przydzielone do zycia"<<endl;
        cout<<"Twoja przygoda konczy sie przedwczesnie"<<endl;
        return false;
    }

    cout<<endl;
    cout<<"*****TWOJE STATYSTYKI*****"<<endl;
    cout<<"1.Atak fizyczny: "<<atakFizyczny<<endl;
    cout<<"2.Obrona fizyczna: "<<obronaFizyczna<<endl;;
    cout<<"3.Atak magiczny: "<<atakMagiczny<<endl;;
    cout<<"4.Obrona magiczna: "<<obronaMagiczna<<endl;
    cout<<"5.Zycie: "<<zycie<<endl;
    cout<<endl;

    return true;
}
