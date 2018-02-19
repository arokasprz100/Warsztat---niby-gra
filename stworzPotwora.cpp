#include <iostream>

#include "stworzPotwora.h"
#include "genStatPotwora.h"

void stworzPotwora(int& atakFizPotwora, int& obronaFizPotwora, int& atakMagPotwora, int& obronaMagPotwora, int& zyciePotwora, int& pulaPunktowPotwora)
{
    using namespace std;

    atakFizPotwora=genStatPotwora(pulaPunktowPotwora);
    pulaPunktowPotwora-=atakFizPotwora;

    obronaFizPotwora=genStatPotwora(pulaPunktowPotwora);
    pulaPunktowPotwora-=obronaFizPotwora;

    atakMagPotwora=genStatPotwora(pulaPunktowPotwora);
    pulaPunktowPotwora-=atakMagPotwora;

    obronaMagPotwora=genStatPotwora(pulaPunktowPotwora);
    pulaPunktowPotwora-=obronaMagPotwora;

    zyciePotwora=pulaPunktowPotwora;

    cout<<"Statystyki potwora: "<<endl;
    cout<<"1.Atak fizyczny: "<<atakFizPotwora<<endl;
    cout<<"2.Obrona fizyczna: "<<obronaFizPotwora<<endl;;
    cout<<"3.Atak magiczny: "<<atakMagPotwora<<endl;;
    cout<<"4.Obrona magiczna: "<<obronaMagPotwora<<endl;
    cout<<"5.Zycie: "<<zyciePotwora<<endl;
    cout<<endl;

}
