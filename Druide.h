#ifndef DRUIDE_H
#define DRUIDE_H

#include "Personnage.h"
#include "string"

using namespace std;

class Druide : public Personnage{
private:
    int mana;
public:
    Druide(string nomVal, int attaqueVal, int defenseVal, int vieVal, int manaVal);
    void jeterSort(Personnage& cible);
    void afficherInfos();
};

#endif // DRUIDE_H