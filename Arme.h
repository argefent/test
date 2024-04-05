#ifndef ARME_H
#define ARME_H

#include "string"

using namespace std;

class Arme{
private:
    string nom;
    int degats;
public:
    Arme(string nomVal, int degatsVal);
    void afficherInfos();
    void changer(string nom, int degats);
    int getDegats();
    string getNom();
};

#endif // ARME_H