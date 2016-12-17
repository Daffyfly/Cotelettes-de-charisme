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
    std::cout << "Filling the command map with : " << name << "\n";
}


Commande::~Commande()
{
}

Commande* Commande::nouvelleCommande(std::string nouvelle_commande, Invocateur & i)
{
    std::cout << "nouvelle_commande  = " << *nouvelleCommande<<"\n";
    return commandesInscrites()[nouvelle_commande]->constructeurVirtuel(i);
}

