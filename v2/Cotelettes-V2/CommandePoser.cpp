#include "CommandePoser.h"

CommandePoser CommandePoser::maCommande((std::string)"POSER");

CommandePoser::CommandePoser(Robot& robot) :CommandeRobot(robot)
{
}


CommandePoser::~CommandePoser()
{
}

Commande* CommandePoser::constructeurVirtuel(Invocateur & i){
    poids = _robot->getObjet()->getPoids();
    Commande * tmp = new CommandePoser(*i.getRobot());
    Commande::pileActions.push(tmp);
    return tmp;
}


void CommandePoser::executer()
{
    _robot->poser();
}

void CommandePoser::annuler()
{
    _robot->saisir(new Objet(poids));
}