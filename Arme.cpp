#include "Arme.h"
#include <iostream>

using namespace std;

Arme::Arme(string nomVal, int degatsVal)
        :nom{nomVal},degats{degatsVal}{
}

void Arme::afficherInfos() {
    cout << nom << ", degats : " << degats << endl;
}

void Arme::changer(std::string nomVal, int degatsVal) {
    nom=nomVal;
    degats=degatsVal;
}

int Arme::getDegats() {return degats;}

string Arme::getNom() {return nom;}