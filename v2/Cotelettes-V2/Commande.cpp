#include "Commande.h"
#include <iostream>

std::map<std::string, Commande*>& Commande::commandesInscrites(){
    static std::map<std::string, Commande*>* comInscrites = new std::map<std::string,Commande*>();
    return *comInscrites;
}

std::stack<Commande*> Commande::pileActions;

Commande::Commande()
{
}

Commande::Commande(std::string name){
    commandesInscrites()[name]=this;
}


Commande::~Commande()
{
}

Commande* Commande::nouvelleCommande(std::string nouvelle_commande, Invocateur & i)
{
    return commandesInscrites()[nouvelle_commande]->constructeurVirtuel(i);
}

