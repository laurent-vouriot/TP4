#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {



    protected:
        bool attente;
        int delai;
        Chrono * leChrono;


    public:

        ObjetTempo(Chrono* chrono,const int & delai);
        Chrono * getChrono() const;
        void finTempo();
        int getDelai() const;

    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
