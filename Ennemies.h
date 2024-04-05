#ifndef CPP_TP13_RELATIONSCLASSES_CORR_ENNEMIES_H
#define CPP_TP13_RELATIONSCLASSES_CORR_ENNEMIES_H
#include <vector>
#include "Personnage.h"
using namespace std;


class Ennemies {
private:
    vector<Personnage> ennemies;
public:
    bool ajouterEnnemie(string nom,int attaque, int defense, string nomarme, int degatarme, int vie=100);
    void afficherEnnemies();
    void combattre(Personnage &persoJoueur, Personnage &attaquant);
    int getsize();
    vector<Personnage> getennemis();
    void subirdegats(Personnage &persoJoueur, Personnage &victime);
};


#endif //CPP_TP13_RELATIONSCLASSES_CORR_ENNEMIES_H
