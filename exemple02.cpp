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
    unsigned char resultat;

    cout << "entree_a" << "  ~entree_a" << endl;
    for( entree_a = 0; entree_a <= 1; entree_a++) {
        resultat = ~entree_a;
        cout << setw(8) <<  bitset<1>(entree_a) << "   " << setw(8) <<  bitset<1>(resultat) << endl;
    }

    return EXIT_SUCCESS;
}