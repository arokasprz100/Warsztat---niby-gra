#include <iostream>
#include <cstdlib>
#include <limits>

#include "walka.h"
#include "stworzPotwora.h"
#include "dodajDoPokonanych.h"
#include "awans.h"
#include "losoweWydarzenia.h"


int walka (char * imieBohatera, int& atakFizyczny, int& obronaFizyczna, int& atakMagiczny, int& obronaMagiczna, int& zycie,
            int **atkfizZabitych, int **obrfizZabitych, int **atkmagZabitych, int **obrmagZabitych ,int **zycieZabitych, int(* zabojcaGracza)[5] )
{
    using namespace std;

    int aktualneZycie=zycie;
    int licznikPokonanych=0;
    bool czyZwyciestwo=1;

    int zyciePotwora=0;
    int atakFizPotwora=0;
    int obronaFizPotwora=0;
    int atakMagPotwora=0;
    int obronaMagPotwora=0;
    int pulaPunktowPotwora=15;

    cout<<"***** ROZPOCZYNA SIE TWOJA PRZYGODA *****"<<endl;

    cin.clear();
    cin.ignore (numeric_limits<streamsize>::max(),'\n');

    while (true)
    {

        if (licznikPokonanych>=3)
            losoweWydarzenia(atakFizyczny, obronaFizyczna, atakMagiczny, obronaMagiczna, zycie);



        cout<<"Atakuje Cie potwor "<<licznikPokonanych+1<<endl;

        stworzPotwora(atakFizPotwora, obronaFizPotwora, atakMagPotwora, obronaMagPotwora, zyciePotwora, pulaPunktowPotwora);

        int aktualneZyciePotwora=zyciePotwora;


        while (true)
        {
            cout<<"TURA POTWORA"<<endl;
            int wartoscAtaku;
            int obrona;

            if (rand()%2==0)
            {
                cout<<"Potwor uzywa ataku fizycznego"<<endl;
                wartoscAtaku=atakFizPotwora+rand()%(atakFizPotwora/2+1);
                obrona=obronaFizyczna+rand()%(obronaFizyczna/2+1);
            }
            else
            {
                cout<<"Potwor uzywa ataku magicznego"<<endl;
                wartoscAtaku=atakMagPotwora+rand()%(atakMagPotwora/2+1);
                obrona=obronaMagiczna+rand()%(obronaMagiczna/2+1);
            }


            int obrazenia=wartoscAtaku-obrona;
            if (obrazenia>0)
            {
                aktualneZycie-=obrazenia;
                cout<<"Potwor uderza za "<<obrazenia<<" punktow zycia."<<endl;
            }
            else
                cout<<"Atak potwora nie wyrzadzil Ci zadnej krzywdy."<<endl;


            if (aktualneZycie<=0)
            {
                czyZwyciestwo=false;
                break;
            }
            cout<<"Masz "<<aktualneZycie<<" punktow zycia"<<endl;
            cout<<endl;

            cin.clear();
            cin.ignore (numeric_limits<streamsize>::max(),'\n');

            cout<<"TURA BOHATERA"<<endl;
            cout<<"Czy chcesz uzyc: \n1.Ataku fizycznego \n2.Ataku magicznego \n? ";
            int jakiAtak;
            cin>>jakiAtak;
            while (jakiAtak<1 || jakiAtak>2 || cin.fail() || !cin.good())
            {
                cin.clear();
                cin.ignore (numeric_limits<streamsize>::max(),'\n');
                cout<<"Niepoprawny rodzaj ataku. Sprobuj jeszcze raz."<<endl;
                cin>>jakiAtak;
            }
            if (jakiAtak==1)
            {
                wartoscAtaku=atakFizyczny+rand()%(atakFizyczny/2+1);
                obrona=obronaFizPotwora+rand()%(obronaFizPotwora/2+1);
            }
            else
            {
                wartoscAtaku=atakMagiczny+rand()%(atakMagiczny/2+1);
                obrona=obronaMagPotwora+rand()%(obronaMagPotwora/2+1);
            }
            obrazenia=wartoscAtaku-obrona;


            if (obrazenia>0)
            {
                aktualneZyciePotwora-=obrazenia;
                cout<<"Uderzasz potwora za "<<obrazenia<<" punktow zycia."<<endl;
            }
            else
                cout<<"Nic nie zrobiles potworowi."<<endl;



            cout<<endl;

            if (aktualneZyciePotwora<=0)
            {
                czyZwyciestwo=true;
                break;
            }

            cin.clear();
            cin.ignore (numeric_limits<streamsize>::max(),'\n');


        }


        if (czyZwyciestwo==true)
        {
            cout<<"Udalo Ci sie pokonac potwora."<<endl;
            dodajDoPokonanych(atkfizZabitych, obrfizZabitych, atkmagZabitych, obrmagZabitych,
                              zycieZabitych, atakFizPotwora, obronaFizPotwora, atakMagPotwora, obronaMagPotwora, zyciePotwora, licznikPokonanych);
            licznikPokonanych++;
            pulaPunktowPotwora=15+licznikPokonanych*5;
            awans(atakFizyczny, obronaFizyczna, atakMagiczny, obronaMagiczna, zycie);
            cout<<"Zostajesz uleczony"<<endl;
            aktualneZycie=zycie;
        }
        else
        {
            cout<<imieBohatera<<" zostal pokonany."<<endl;
            cin.clear();
            cin.ignore (numeric_limits<streamsize>::max(),'\n');;
            (*zabojcaGracza)[0]=atakFizPotwora;
            (*zabojcaGracza)[1]=obronaFizPotwora;
            (*zabojcaGracza)[2]=atakMagPotwora;
            (*zabojcaGracza)[3]=obronaMagPotwora;
            (*zabojcaGracza)[4]=zyciePotwora;
            break;
        }


    }
    return licznikPokonanych;
}



