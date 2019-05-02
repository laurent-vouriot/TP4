#include "Voyant.h"

using namespace std;

namespace nsDigicode {




    void Voyant::allumer()
    {
        if(myEtat == etat::eteint)
            myEtat = etat::allume;
    }
    void Voyant::eteindre()
    {
        if(myEtat == etat::allume)
            myEtat = etat::eteint;
    }

    Voyant::Voyant(couleur Couleur,etat Etat) :myCouleur(Couleur), myEtat(Etat){}

    string nsDigicode::Voyant::getStatut() const
    {
        if (myEtat == etat::allume)
            return "ON";
        else
            return "OFF";
    }
}//nsDigicode
