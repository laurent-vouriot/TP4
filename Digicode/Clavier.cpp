#include "Clavier.h"
#include "kbhit.h"

nsDigicode::Clavier::Clavier()
{

}

int nsDigicode::Clavier::saisirChiffre()
{
    int kb = _kbhit();

    if(kb == 0)
        return -1;
    else
        return kb - '0';
}

