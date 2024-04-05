#include "Atout.h"
#include <iostream>

using namespace std;

Atout::Atout(std::string nomVal, int bonusVieVal, int bonusAttaqueVal, int bonusDefenseVal)
        :nom{nomVal},bonusVie{bonusVieVal},bonusAttaque{bonusAttaqueVal},bonusDefense{bonusDefenseVal}{
}

void Atout::afficherInfos() {
    cout << "****** " << nom << " ******" << endl;
    cout << "Bonus Vie : " << bonusVie << endl;
    cout << "Bonus Attaque : " << bonusAttaque << endl;
    cout << "Bonus Defense : " << bonusDefense << endl;
}

int Atout::getBonusVie() {return bonusVie;}
int Atout::getBonusAttaque() {return  bonusAttaque;}
int Atout::getBonusDefense() {return bonusDefense;}