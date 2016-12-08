//
// Created by vincent on 07/12/16.
//

#include "CommandeAnnuler.h"

CommandeAnnuler CommandeAnnuler::maCommande((std::string)"ANNULER");

CommandeAnnuler::CommandeAnnuler(){

}

CommandeAnnuler::~CommandeAnnuler()
{
}

Commande* CommandeAnnuler::constructeurVirtuel(Invocateur & i){
    return new CommandeAnnuler();
}

void CommandeAnnuler::executer()
{
    //demander à la prof
    if(Commande::pileActions.size()>0){
        Commande::pileActions.top()->annuler();
        Commande::pileActions.pop();
    }
}

void CommandeAnnuler::annuler(){

}
