#include <iostream>
#include "Lampe.h"

using namespace std;

int main(void)
{
    Lampe mes_lampes;

    mes_lampes.allumer(2);
    mes_lampes.allumer(4);
    mes_lampes.dump();

    mes_lampes.eteindre(4);
    mes_lampes.dump();

    return EXIT_SUCCESS;
}
