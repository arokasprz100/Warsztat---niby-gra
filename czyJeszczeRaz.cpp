#include <iostream>
#include <limits>

#include "czyJeszczeRaz.h"


bool czyJeszczeRaz ()
{
    using namespace std;
    cout<<endl;
    cout<<endl;
    cout<<"Czy chcesz zagrac jeszcze raz? (1-TAK, 0-NIE)"<<endl;
    bool czyTak=0;
    cin>>czyTak;
    while (cin.fail() || !cin.good() )
    {
        cin.clear();
        cin.ignore (numeric_limits<streamsize>::max(),'\n');
        cout<<"Niepoprawna wartosc, sprobuj jeszcze raz. "<<endl;
        cout<<"Czy chcesz zagrac jeszcze raz? (1-TAK, 0-NIE)" <<endl;
        cin>>czyTak;

    }
    cout<<endl;
    cout<<endl;
    cin.clear();
    cin.ignore (numeric_limits<streamsize>::max(),'\n');
    if (czyTak==0)
        cout<<"Gra autorstwa: Arkadiusz Kasprzak"<<endl;
    return czyTak;

}
