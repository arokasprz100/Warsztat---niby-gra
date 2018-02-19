#include <iostream>
#include <cstdlib>
#include <limits>

#include "losoweWydarzenia.h"

void losoweWydarzenia(int& atakFizyczny, int& obronaFizyczna, int& atakMagiczny, int& obronaMagiczna, int& zycie )
{
    using namespace std;
    int los=rand();
    if (los%5==0)
    {
        cout<<"Zauwazasz skrzynie. Czy chcesz ja otworzyc? (0-NIE, 1-TAK)"<<endl;
        bool czyOtworzyc;
        cin>>czyOtworzyc;
        while (cin.fail() || !cin.good())
        {
            cin.clear();
            cin.ignore (numeric_limits<streamsize>::max(),'\n');
            cout<<"Zla opcja, sprobuj jeszcze raz."<<endl;
            cin>>czyOtworzyc;
        }
        if (czyOtworzyc==1)
        {
            bool czyUdaloSie=rand()%2;
            if (czyUdaloSie==0)
                cout<<"Nie udalo sie otworzyc skrzyni. Idziesz dalej."<<endl;
            else
            {
                cout<<"W skrzyni znajduje sie dziwny napoj. Wypijasz go."<<endl;
                cout<<"Twoje zdrowie zwieksza sie o 2"<<endl;
                zycie+=2;
            }
        }
        else
            cout<<"Idziesz dalej"<<endl;

        cout<<endl;
    }
    else if (los%7==0)
    {
        cout<<"Widzisz lepsza bron. Juz masz po nia siegnac, gdy zauwazasz, ze broni jej pulapka"<<endl;
        cout<<"Co robisz?"<<endl;
        cout<<"1.Ide dalej"<<endl;
        cout<<"2.Probuje rozbroic pulapke"<<endl;
        int coRobi;
        cin>>coRobi;
        while (coRobi<1 || coRobi>2 || cin.fail() || !cin.good())
        {
            cin.clear();
            cin.ignore (numeric_limits<streamsize>::max(),'\n');
            cout<<"Zla opcja, sprobuj jeszcze raz."<<endl;
            cin>>coRobi;
        }
        if (coRobi==1)
            cout<<"Nie ryzykujesz i idziesz dalej"<<endl;
        else
        {
            if (rand()%2==0)
            {
                cout<<"Udalo Ci sie rozbroic pulapke i dostac do broni"<<endl;
                cout<<"Twoj atak fizyczny i magiczny zwiekszaja sie o +2"<<endl;
                atakFizyczny+=2;
                atakMagiczny+=2;
            }
            else
            {
                cout<<"Pulapka rani Cie i uszkadza Twoja zbroje"<<endl;
                cout<<"Twoja obrona fizyczna i magiczna spadaja o 1"<<endl;
                obronaFizyczna>0 ? obronaFizyczna-=1 : obronaFizyczna;
                obronaMagiczna>0 ? obronaMagiczna-=1 : obronaMagiczna;

            }
        }

        cout<<endl;

    }
}
