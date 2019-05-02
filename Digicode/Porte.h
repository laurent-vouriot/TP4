#ifndef PORTE_H
#define PORTE_H

#include "ObjetTempo.h"
#include "Capteur.h"

namespace nsDigicode
{

    class porte :  ObjetTempo
    {
        private:
            Capteur myCapteur;
            bool fermer();

        public:
            porte(Chrono * chrono, const int & temps);
            bool ouvrir();


    };
}
#endif // PORTE_H
