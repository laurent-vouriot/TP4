#include "Porte.h"
#include <iostream>

using namespace std;
namespace nsDigicode {


    porte::porte(Chrono * chrono, const int & temps) : ObjetTempo (chrono, temps)
    {

    }//porte


    bool porte::ouvrir()
    {
        attente = true;
        (*getChrono()).demarrer(this);
        cout<< "vous pouvez entrer"<<endl;
        while(attente  && !myCapteur.detecter());
        if(attente)
            return fermer();
        else {
            cout << "Temps écoulé, la porte se verrouille" << endl;
            return true;
        }
    }

    bool porte::fermer()
    {
        cout<< "Porte ouverte : fermez la porte"<<endl;
        while(attente && !myCapteur.detecter());
        if(attente){
            leChrono->arreter();
            attente = false;
            cout<<"Vous avez fermé la porte" << endl;
            return true;
        }
        else {
            return false;
        }
    }

} //nsDigicode
