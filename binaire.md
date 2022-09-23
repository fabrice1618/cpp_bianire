# Binaire - opérateurs logiques

## A - Les opérateurs logiques

### A1 - Exemple d'utilisation des opérateurs binaires:

```C
// exemple01.cpp

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
```

```
Question: Expliquer le fonctionnement de bitset
Reponse :
```

### A2 - Opérateur inversion (NOT)

Voir exemple: exemple02.cpp

```
Question: Expliquer le fonctionnement de setw
Reponse :
```

### A3 - Opérateur ET (AND)

Voir exemple: exemple03.cpp

```
Après avoir analysé les résultats:
Question: Quel est le résultat quand entree_a est à 0 ?
Reponse :

Question: Quel est le résultat quand entree_a est à 1 ?
Reponse :

```

### A4 - Opérateur OU (OR)

Créer le fichier exemple04.cpp en adaptant le fichier exemple03.cpp pour utiliser l'opérateur '|'.
Mettre aussi à jour le fichier Makefile

```
Après avoir analysé les résultats:
Question: Quel est le résultat quand entree_a est à 0 ?
Reponse :

Question: Quel est le résultat quand entree_a est à 1 ?
Reponse :

```

### A5 - Opérateur OU exclusif (XOR)

Créer le fichier exemple05.cpp en adaptant le fichier exemple03.cpp pour utiliser l'opérateur '^'.
Mettre aussi à jour le fichier Makefile

```
Après avoir analysé les résultats:
Question: Quel est le résultat quand entree_a est à 0 ?
Reponse :

Question: Quel est le résultat quand entree_a est à 1 ?
Reponse :

```

## B - Gestion des sorties

### B1 - mini projet: gestion de l'éclairage

Nous souhaitons mettre en oeuvre un logiciel permettant de gérer l'éclairage de 8 lampes. Le système d'entrées sorties ne sera pas étudié ici.

Le logiciel sera écrit en C++ en programmation orientée objet. Nous allons créer une classe "Lampe".

Les informations sont stockées dans une propriété de type unsigned char dans la forme ci-dessous:

bit 7 | bit 6 | bit 5 | bit 4 | bit 3 | bit 2 | bit 1 | bit 0
---------|---------|---------|---------|---------|---------|---------|---------
 lampe 8 | lampe 7 | lampe 6 | lampe 5 | lampe 4 | lampe 3 | lampe 2 | lampe 1

- Si le bit est à zéro, la lampe est éteinte. 
- Si le bit est à un, la lampe est allumée. 

 La classe "Lampe" devra disposer des méthodes suivantes:
 - un constructeur qui initialise l'état des lampes à éteint.
 - une méthode allumer prenant en paramètre le numéro de la lampe
 - une méthode eteindre prenant en paramètre le numéro de la lampe
 - une méthode lampe_allumee prenant en paramètre le numéro de la lampe retournant une valeur boolean à true si la lampe est allumée et false sinon.
 - une méthode dump permettant d'afficher l'état des lampes
 - vous aurez probablement de fonctions internes (déclarées private) qu'il vous faudra ajouter après l'implémentation en C++
 ```
Réaliser le diagramme de classe de la classe Lampe avec draw.io (fichier nommé lampe.drawio).
Préciser la visibilité des propriétés et des méthodes.
```

### B2 - écriture de la classe Lampe en C++

```
- écrire les fichiers Lampe.cpp et Lampe.h permettant de définir la classe avec toutes les fonctionnalités souhaitées
- Mettre à jour le fichier Makefile
```

Vous utiliserez le programme lampe_test.cpp comme programme principal permettant de tester votre classe. L'execution du programme devra donner le résultat ci-dessous:

```bash
$ ./lampe_test 
Allumage lampe 2
Allumage lampe 4
Dump lampe: 
lampe 1 éteinte
lampe 2 allumée
lampe 3 éteinte
lampe 4 allumée
lampe 5 éteinte
lampe 6 éteinte
lampe 7 éteinte
lampe 8 éteinte

Extinction lampe 4
Dump lampe: 
lampe 1 éteinte
lampe 2 allumée
lampe 3 éteinte
lampe 4 éteinte
lampe 5 éteinte
lampe 6 éteinte
lampe 7 éteinte
lampe 8 éteinte
```

Note : 
- lors de l'allumage d'une lampe afficher un message exemple "Allumage lampe 2" 
- lors de l'extinction d'une lampe afficher un message exemple "Extinction lampe 2" 

### B3 - définition de la classe LampeCouleur

Nous allons créer une classe LampeCouleur héritant de Lampe disposant de propriétés supplémentaires de type unsigned char permettant de stocker les composantes couleur rouge, verte et bleue définissant la couleur de la lampe.

Grâce à l'héritage la classe LampeCouleur dispose par défaut des méthodes déjà définies dans la classe Lampe. Elle devra disposer en plus d'une méthode set_color() pour configurer la couleur de chaque lampe individuellement. La méthode recevra en paramètre le numéro de lampe, la composante rouge, la composante verte et la composante bleue.
La méthode dump() sera adaptée pour indiquer la couleur.

 ```
Réaliser le diagramme de classe de l'objet LampeCouleur avec draw.io (fichier nommé lampe_couleur.drawio).
Définir les propriétés et leur type permettant de gérer cet objet.
Bien préciser la visibilité des propriétés et des méthodes.
```

Pour définir un héritage, nous utiliserons la syntaxe suivante exemple:

```C
class Personne
{
private:
    int Id;
    char Nom[30];
    char Adresse[100];
 
public:
    Personne(int, char[], char[]);
    void afficher();
};
 
class Professeur : public Personne
{
private:
    double salaire;
    char departement[40];
 
public:
    Professeur(int, char[], char[], double, char[]);
};
 
class Etudiant : public Personne
{
private:
    char Filiere[40];
 
public:
    Etudiant(int, char[], char[], char[]);
};
```

### B4 - écriture de la classe LampeCouleur en C++

```
- écrire les fichiers LampeCouleur.cpp et LampeCouleur.h permettant de définir la classe avec toutes les fonctionnalités souhaitées
- Mettre à jour le fichier Makefile
```

Le programme principal lampe_couleur_test.cpp est fourni et son execution donne le résultat ci-dessous:

```bash
$ ./lampe_couleur_test 
Allumage lampe 2
Allumage lampe 4
Dump lampe: 
lampe 1 éteinte
lampe 2 allumée R=1 V=1 B=1
lampe 3 éteinte
lampe 4 allumée R=10 V=10 B=10
lampe 5 éteinte
lampe 6 éteinte
lampe 7 éteinte
lampe 8 éteinte

Extinction lampe 4
Dump lampe: 
lampe 1 éteinte
lampe 2 allumée R=1 V=1 B=1
lampe 3 éteinte
lampe 4 éteinte
lampe 5 éteinte
lampe 6 éteinte
lampe 7 éteinte
lampe 8 éteinte
```