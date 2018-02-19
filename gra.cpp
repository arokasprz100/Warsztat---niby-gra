#include <cstdlib>
#include <ctime>

#include "gra.h"
#include "kreacjaPostaci.h"
#include "walka.h"
#include "poSmierci.h"
#include "czyJeszczeRaz.h"
#include "zwolnijPamiec.h"

void glownaPetlaGry()
{
    srand(time(0));
    char *imieBohatera=0;
    int atakFizyczny=0;
    int obronaFizyczna=0;
    int atakMagiczny=0;
    int obronaMagiczna=0;
    int zycie=0;
    do{
        bool czyPrzezylaNarodziny=kreacjaPostaci (&imieBohatera, atakFizyczny, obronaFizyczna, atakMagiczny, obronaMagiczna, zycie);

        int * atkfizZabitych=0;
        int * obrfizZabitych=0;
        int * atkmagZabitych=0;
        int * obrmagZabitych=0;
        int * zycieZabitych=0;

        int zabojcaGracza[5]={0};


        if (czyPrzezylaNarodziny==true)
        {
            int licznikZabitychPotworow=walka(imieBohatera, atakFizyczny, obronaFizyczna, atakMagiczny, obronaMagiczna, zycie,
                                            &atkfizZabitych, &obrfizZabitych, &atkmagZabitych, &obrmagZabitych, &zycieZabitych, &zabojcaGracza);


            poSmierci (licznikZabitychPotworow, &atkfizZabitych, &obrfizZabitych, &atkmagZabitych, &obrmagZabitych, &zycieZabitych,
                       imieBohatera, atakFizyczny, obronaFizyczna, atakMagiczny, obronaMagiczna, zycie,
                       zabojcaGracza );

        }

        zwolnijPamiec(&imieBohatera, &atkfizZabitych, &obrfizZabitych, &atkmagZabitych, &obrmagZabitych, &zycieZabitych );

    }while (czyJeszczeRaz()==true);

}
