#include <iostream>
#include <limits>

#include "awans.h"

void awans(int& atakFizyczny, int& obronaFizyczna, int& atakMagiczny, int& obronaMagiczna, int& zycie)
{
    using namespace std;
    cout<<"*****AWANS*****"<<endl;
    cout<<"Mozesz ulepszyc jeden ze swoich atrybutow"<<endl;
    cout<<"Do dyspozycji masz 1 punkt"<<endl;
    cout<<"Ktora umiejetnosc chcesz ulepszyc?"<<endl;
    cout<<"1.Atak fizyczny "<<endl;
    cout<<"2.Obrona fizyczna "<<endl;;
    cout<<"3.Atak magiczny "<<endl;;
    cout<<"4.Obrona magiczna "<<endl;
    cout<<"5.Zycie "<<endl;

    int numerUlepszanej=0;
    cin>>numerUlepszanej;
    while (numerUlepszanej<1 || numerUlepszanej>5 || !cin.good() || cin.fail())
    {
        cin.clear();
        cin.ignore (numeric_limits<streamsize>::max(),'\n');
        cout<<"Niepoprawny numer umiejetnosci, sprobuj jeszcze raz."<<endl;
        cin>>numerUlepszanej;
    }
    if (numerUlepszanej==1)
        atakFizyczny++;
    else if (numerUlepszanej==2)
        obronaFizyczna++;
    else if (numerUlepszanej==3)
        atakMagiczny++;
    else if (numerUlepszanej==4)
        obronaMagiczna++;
    else
        zycie++;
}
