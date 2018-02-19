#include <iostream>
#include <limits>

#include "przydzieleniePunktow.h"

void przydzieleniePunktow(int &atrybut, int& pulaPunktow)
{
    using namespace std;
    bool czyPoprawnie=false;
    do
    {
        int temp=-1;
        cin>>temp;
        if (temp<0 || temp>pulaPunktow || !cin.good() || cin.fail())
        {
            cout<<"Niepoprawna wartosc punktow, sprobuj jeszcze raz!"<<endl;
            czyPoprawnie=false;
        }
        else
        {
            atrybut=temp;
            pulaPunktow-=atrybut;
            czyPoprawnie=true;

        }
        cin.clear();
        cin.ignore (numeric_limits<streamsize>::max(),'\n');
        cout<<"Pozostalo "<<pulaPunktow<<" punktow. "<<endl;


    }while (czyPoprawnie!=true);

}
