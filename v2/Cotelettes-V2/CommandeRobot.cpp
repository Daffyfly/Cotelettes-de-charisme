#include "CommandeFiger.h"
#include "CommandeRepartir.h"


CommandeRobot::CommandeRobot(Robot& robot) :_robot(&robot)
{
}


CommandeRobot::CommandeRobot(std::string name) : Commande(name) {}

CommandeRobot::~CommandeRobot()
{
}


//Commande* CommandeRobot::constructeurVirtuel(Invocateur & i)
//{
//}


