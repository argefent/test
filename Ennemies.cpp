#include "Ennemies.h"
#include <iostream>

using namespace std;

void Ennemies::afficherEnnemies() {
    if (ennemies.empty())
        cout << "\npas d'ennemies\n";
    for (auto & ennemie : ennemies) {
        ennemie.afficherInfos();
    }
}

bool Ennemies::ajouterEnnemie(std::string nom, int attaque, int defense, std::string nomarme, int degatarme, int vie) {
    Personnage temp {nom,attaque,defense,vie};
    temp.changerArme(nomarme,degatarme);
    for (auto & ennemie : ennemies) {
        if (ennemie.getnom() == nom)
            return false;
    }
    ennemies.push_back(temp);
    return true;
}

void Ennemies::combattre(Personnage &persoJoueur, Personnage &attaquant) {
    attaquant.attaquer(persoJoueur);
    attaquant.afficherInfos();
}

int Ennemies::getsize() {
    return ennemies.size();
}

vector<Personnage> Ennemies::getennemis() {
    return ennemies;
}

void Ennemies::subirdegats(Personnage &persoJoueur, Personnage &victime) {
    persoJoueur.attaquer(victime);
    victime.afficherInfos();
}