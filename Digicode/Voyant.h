#ifndef VOYANT_H
#define VOYANT_H

#include <string>

namespace nsDigicode {

    enum couleur { rouge, vert};
    enum etat {allume, eteint};

    class Voyant
    {
        private:
            couleur myCouleur;
            etat myEtat;

        public:
            Voyant();
            void allumer();
            void eteindre();

            Voyant(couleur Couleur ,etat Etat);

            std::string getStatut() const;
    };
} //nsDigicode
#endif // VOYANT_H
