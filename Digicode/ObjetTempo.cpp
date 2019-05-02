#include "ObjetTempo.h"



namespace nsDigicode {

    ObjetTempo::ObjetTempo(Chrono * chrono,const int & delai) : leChrono(chrono), delai(delai){}




    Chrono * ObjetTempo::getChrono() const
    {
       return leChrono;
    }
    void ObjetTempo::finTempo()
    {
        attente = false;
    }
    int  ObjetTempo::getDelai() const
    {
        return delai;
    }
}
