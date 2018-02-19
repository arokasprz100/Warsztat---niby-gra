#include <iostream>
#include "poSmierci.h"


void poSmierci (int licznikZabitychPotworow, int **atkfizZabitych, int **obrfizZabitych, int **atkmagZabitych, int **obrmagZabitych, int **zycieZabitych,
                char *imieBohatera, int atakFizyczny, int obronaFizyczna, int atakMagiczny, int obronaMagiczna, int zycie,
                int *zabojcaGracza)
{
    using namespace std;

    cout<<endl;
    cout<<"*****KONIEC*****"<<endl;
    cout<<"Tutaj konczy sie Twoja przygoda"<<endl;
    cout<<endl;

    cout<<"Zostales zabity przez potwora "<<licznikZabitychPotworow+1<<endl;
    cout<<"Jego statystyki to: "<<endl;
    cout<<"1.Atak fizyczny: "<<zabojcaGracza[0]<<endl;
    cout<<"2.Obrona fizyczna: "<<zabojcaGracza[1]<<endl;;
    cout<<"3.Atak magiczny: "<<zabojcaGracza[2]<<endl;;
    cout<<"4.Obrona magiczna: "<<zabojcaGracza[3]<<endl;
    cout<<"5.Zycie: "<<zabojcaGracza[4]<<endl;

    cout<<endl;


    cout<<"Twoje statystyki: "<<endl;
    cout<<"Imie: "<<imieBohatera<<endl;
    cout<<"1.Atak fizyczny: "<<atakFizyczny<<endl;
    cout<<"2.Obrona fizyczna: "<<obronaFizyczna<<endl;;
    cout<<"3.Atak magiczny: "<<atakMagiczny<<endl;;
    cout<<"4.Obrona magiczna: "<<obronaMagiczna<<endl;
    cout<<"5.Zycie: "<<zycie<<endl;
    cout<<endl;



    cout<<"Pokonales "<<licznikZabitychPotworow<<" potworow."<<endl;
    cout<<"Pokonane przez Ciebie potwory: "<<endl;
    cout<<endl;
    for (int i=0; i<licznikZabitychPotworow; i++)
    {
        cout<<"Potwor "<<i+1<<endl;
        cout<<"1.Atak fizyczny: "<<(*atkfizZabitych)[i]<<endl;
        cout<<"2.Obrona fizyczna: "<<(*obrfizZabitych)[i]<<endl;
        cout<<"3.Atak magiczny: "<<(*atkmagZabitych)[i]<<endl;
        cout<<"4.Obrona magiczna: "<<(*obrmagZabitych)[i]<<endl;
        cout<<"5.Zycie: "<<(*zycieZabitych)[i]<<endl;
        cout<<endl;
    }


}


