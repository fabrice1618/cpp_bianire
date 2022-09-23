#include <iostream>
#include <bitset>
#include <iomanip>

/*
bitset: permet de formater un nombre en binaire
iomanip: permet de formater la largeur d'affichage grace à setw()
*/

using namespace std;

int main(void)
{
    unsigned char entree_a;
    unsigned char entree_b;
    unsigned char resultat;

    cout << "entree_a" << " entree_b" << "  entree_a & entree_b" << endl;
    for( entree_a = 0; entree_a <= 1; entree_a++) {
        for( entree_b = 0; entree_b <= 1; entree_b++) {
            resultat = entree_a & entree_b;
            cout << setw(8) <<  bitset<1>(entree_a) << " " << setw(8) <<  bitset<1>(entree_b) << "    " << setw(8) <<  bitset<1>(resultat) << endl;
        }
    }

    return EXIT_SUCCESS;
}