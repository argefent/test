#include <iostream>
#include <fstream>
#include <sstream>
#include "Atout.h"
#include "Druide.h"
#include "Personnage.h"
#include "Ennemies.h"

using namespace std;

void parcourir_fichier(Ennemies&my_ennemy){
    ifstream doc("../Ennemy.txt");
    string ligne{""};
    string nom,nomarme;
    int attaque,defense,vie,degat;

    if(!doc){
        cout<<"Impossible d'ouvrir le fichier.\n";
    }
    while (getline(doc,ligne)){
        istringstream s(ligne);
        string champ{""};
        int champpose{0};
        while(getline(s,champ,',')){
            switch (champpose) {
                case 0:
                    nom = champ;
                    break;
                case 1:
                    attaque = stoi(champ);
                    break;
                case 2:
                    defense = stoi(champ);
                    break;
                case 3:
                    nomarme = champ;
                    break;
                case 4:
                    degat = stoi(champ);
                    break;
                case 5:
                    vie = stoi(champ);
                    break;
            }
            champpose++;
        }
        my_ennemy.ajouterEnnemie(nom,attaque,defense,nomarme,degat,vie);
    }
}

int main() {
    srand((unsigned int) time(0));
    unsigned int valeur{0};


    Ennemies my_ennemy;

    Personnage arthur {"Arthur",80,50,100};

    Atout potionInvincibilite {"Potion d'invincibilite",100,0,100};

    arthur.afficherInfos();

    arthur.changerArme("Excalibur",60);

    arthur.afficherInfos();

    Druide merlin {"Merlin",30,30,100,30};

    merlin.afficherInfos();

    arthur.attaquer(merlin);

    merlin.afficherInfos( );

    merlin.utiliserAtout(potionInvincibilite);

    merlin.afficherInfos();

    merlin.jeterSort(arthur);

    arthur.afficherInfos();

    parcourir_fichier(my_ennemy);

    my_ennemy.afficherEnnemies();

    do{
        valeur = rand()%my_ennemy.getsize();
    } while (valeur>my_ennemy.getsize());

    my_ennemy.combattre(arthur, my_ennemy.getennemis().at(valeur));

    return 0;
}