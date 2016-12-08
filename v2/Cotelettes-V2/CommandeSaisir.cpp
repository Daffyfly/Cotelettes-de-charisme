#include "CommandeSaisir.h"

CommandeSaisir CommandeSaisir::maCommande((std::string)"SAISIR");

CommandeSaisir::CommandeSaisir(Robot& robot, int poids) :CommandeRobot(robot), poids(poids)
{
}

CommandeSaisir::~CommandeSaisir()
{
}

Commande* CommandeSaisir::constructeurVirtuel(Invocateur & i){
    Commande * tmp = new CommandeSaisir(*i.getRobot(),i.getInt());
    Commande::pileActions.push(tmp);
    return tmp;
}


void CommandeSaisir::executer()
{
    _robot->saisir(new Objet(poids));
}

void CommandeSaisir::annuler()
{
    _robot->poser();
}