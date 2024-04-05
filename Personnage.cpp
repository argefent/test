#include "Personnage.h"
#include <iostream>

using namespace std;

Personnage::Personnage(std::string nomVal, int attaqueVal, int defenseVal, int vieVal)
        :nom{nomVal},vie{vieVal},attaque{attaqueVal},defense{defenseVal}{
    armePerso = new Arme {"Opinel",5};
}

Personnage::~Personnage(){
    delete armePerso;
}

// Implémentation du copy constructor
Personnage::Personnage(const Personnage &source)
        :nom{source.nom},vie{source.vie},attaque{source.attaque},defense{source.defense}{
    armePerso = new Arme{source.armePerso->getNom(),source.armePerso->getDegats()};
}

void Personnage::changerArme(std::string nouvelleArme, int degatsNouvelleArme) {
    armePerso->changer(nouvelleArme,degatsNouvelleArme);
}

void Personnage::afficherInfos() {
    cout << "****** " << nom << " ******" << endl;
    cout << "Vie : " << vie << endl;
    cout << "Attaque : " << attaque << endl;
    cout << "Defense : " << defense << endl;
    cout << "Arme : ";
    armePerso->afficherInfos();
}

void Personnage::utiliserAtout(Atout &atoutUtilise) {
    vie += atoutUtilise.getBonusVie();
    attaque += atoutUtilise.getBonusAttaque();
    defense += atoutUtilise.getBonusDefense();
    if(vie>100) vie=100;
    if(attaque>100) attaque=100;
    if(defense>100) defense=100;
}

void Personnage::subirDegats(int degats) {
    if(degats>defense)
        vie-=degats-defense;
    if(vie<0) vie = 0;
}

void Personnage::attaquer(Personnage &cible) {
    int degatsInfliges {attaque+armePerso->getDegats()};
    cible.subirDegats(degatsInfliges);
}

string Personnage::getnom() {
    return nom;
}