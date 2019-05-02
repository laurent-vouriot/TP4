#include "Alarme.h"
#include <iostream>
#include <unistd.h>
using namespace std;


nsDigicode::Alarme::Alarme()
{

}

void nsDigicode::Alarme::declencher()
{
    while(true)
    {
        cout << " Alarme la porte n'a pas été fermée" << endl;
        sleep(1);
    }
}
