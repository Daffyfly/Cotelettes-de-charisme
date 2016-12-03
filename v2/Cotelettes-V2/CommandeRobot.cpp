#include "CommandeFiger.h"
#include "CommandeRepartir.h"

std::map<string, Commande*>& CommandeRobot::commandesInscrites(){
    std::cout << "-----  in commandesInscrites()\n\n";
    static std::map<string, Commande*>* comInscrites = new std::map<string,Commande*>();
    return *comInscrites;
}

CommandeRobot::CommandeRobot(Robot& robot) :_robot(&robot)
{
}


CommandeRobot::CommandeRobot(std::string name){
    std::cout << "-----  in CommandeRobot()\n\n";

    commandesInscrites()[name]=this;
}

CommandeRobot::~CommandeRobot()
{
}


//Commande* CommandeRobot::constructeurVirtuel(Invocateur & i)
//{
//}

Commande* CommandeRobot::nouvelleCommande(string nouvelle_commande, Invocateur & i)
{
    std::cout << "-----  in nouvelleCommande()\n\n";

    return commandesInscrites()[nouvelle_commande]->constructeurVirtuel(i);
}

