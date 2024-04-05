#ifndef ATOUT_H
#define ATOUT_H

#include "string"

using namespace std;

class Atout{
private:
    string nom;
    int bonusVie;
    int bonusAttaque;
    int bonusDefense;
public:
    Atout(string nomVal, int bonusVieVal, int bonusAttaqueVal, int bonusDefenseVal);
    int getBonusVie();
    int getBonusAttaque();
    int getBonusDefense();
    void afficherInfos();
};

#endif // ATOUT_H