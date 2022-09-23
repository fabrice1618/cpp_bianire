#include <iostream>
#include "LampeCouleur.h"

using namespace std;

int main(void)
{
    LampeCouleur mes_lampes;

    mes_lampes.set_color(2, 1, 1, 1);
    mes_lampes.allumer(2);
    mes_lampes.set_color(4, 10, 10, 10);
    mes_lampes.allumer(4);
    mes_lampes.dump();
    
    mes_lampes.eteindre(4);
    mes_lampes.dump();
    
    return EXIT_SUCCESS;
}
