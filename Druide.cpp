#include "Druide.h"
#include <iostream>

using namespace std;

Druide::Druide(string nomVal, int attaqueVal, int defenseVal, int vieVal, int manaVal)
        : Personnage{nomVal,attaqueVal,defenseVal,vieVal},mana{manaVal}{
}

void Druide::afficherInfos() {
    Personnage::afficherInfos();
    cout << "Mana : " << mana << endl;
}

void Druide::jeterSort(Personnage &cible) {
    int degatsInfliges {attaque+mana};
    cible.subirDegats(degatsInfliges);
}