#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include "string"
#include "Arme.h"
#include "Atout.h"

using namespace std;

class Personnage{
protected:
    string nom;
    int vie;
    int attaque;
    int defense;
    Arme *armePerso;
public:
    Personnage(string nomVal, int attaqueVal, int defenseVal, int vieVal);
    ~Personnage();
    Personnage(const Personnage &source); // Copy Constructor
    void afficherInfos();
    void changerArme(string nouvelleArme, int degatsNouvelleArme);
    void utiliserAtout(Atout& atoutUtilise);
    void subirDegats(int degats);
    void attaquer(Personnage & cible);
    string getnom();
};

#endif // PERSONNAGE_H