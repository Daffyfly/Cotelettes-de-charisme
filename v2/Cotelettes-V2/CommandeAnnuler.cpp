//
// Created by vincent on 07/12/16.
//

#include "CommandeAnnuler.h"

CommandeAnnuler CommandeAnnuler::maCommande((std::string)"annuler");

CommandeAnnuler::CommandeAnnuler(Robot& robot) :CommandeRobot(robot)
{
}

CommandeAnnuler::~CommandeAnnuler()
{
}

Commande* CommandeAnnuler::constructeurVirtuel(Invocateur & i){
    return new CommandeAnnuler(*i.getRobot());
}

void CommandeAnnuler::executer()
{
    //demander à la prof
    if(Commande::pileActions.size()>0){
        Commande::pileActions.top()->annuler();
        Commande::pileActions.pop();
    }
}
