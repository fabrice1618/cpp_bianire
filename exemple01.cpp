#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
    unsigned char entree_a = 0b11011010;
    unsigned char entree_b = 0xF0;
    unsigned char resultat;

    resultat = ~entree_a;
    cout << "Opération NOT : " << "0b" << bitset<8>(resultat) << endl;

    resultat = entree_a & entree_b;
    cout << "Opération AND : " << "0b" << bitset<8>(resultat) << endl;

    resultat = entree_a | entree_b;
    cout << "Opération OR  : " << "0b" << bitset<8>(resultat) << endl;

    resultat = entree_a ^ entree_b;
    cout << "Opération XOR : " << "0b" << bitset<8>(resultat) << endl;

    resultat = entree_a << 2;
    cout << "Décalage de 2 bits à gauche : " << "0b" << bitset<8>(resultat) << endl;

    resultat = entree_a >> 2;
    cout << "Décalage de 2 bits à droite : " << "0b" << bitset<8>(resultat) << endl;

    return EXIT_SUCCESS;
}