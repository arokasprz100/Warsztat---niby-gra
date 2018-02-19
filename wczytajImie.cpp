#include <iostream>
#include <cstdio>
#include <limits>

#include "wczytajImie.h"

void wczytajImie (char **imieDoWczytania)
{
    using namespace std;

    (*imieDoWczytania)=new char[2];
    char *tymczasowaTablica=new char[2];
    int dlugoscImienia=0;
    char temp=getchar();
    while (temp!='\n' && temp!=EOF)
    {
        delete [] tymczasowaTablica;
        tymczasowaTablica= new char[dlugoscImienia+1];
        for (int i=0; i<dlugoscImienia; ++i)
        {
            tymczasowaTablica[i]=(*imieDoWczytania)[i];
        }
        delete [] *imieDoWczytania;
        *imieDoWczytania=new char [dlugoscImienia+2];
        for (int i=0; i<dlugoscImienia; ++i)
        {
            (*imieDoWczytania)[i]=tymczasowaTablica[i];
        }
        (*imieDoWczytania)[dlugoscImienia]=temp;
        dlugoscImienia++;
        temp=getchar();

    }
    delete [] tymczasowaTablica;
    (*imieDoWczytania)[dlugoscImienia]='\0';

}
