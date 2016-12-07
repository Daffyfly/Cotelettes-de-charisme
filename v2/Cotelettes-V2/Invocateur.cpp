#include "Invocateur.h"
#include <fstream>
#include "CommandeRobot.h"


Invocateur::Invocateur(Robot & robot, std::string file)
{
    _robot = &robot;
    f.open(file);
    for( std::string action; f>>action;)
    {
        std::cout << "Reading from file : "<<action<<"\n";
        Commande * commande = CommandeRobot::nouvelleCommande(action,*this);
        commande->executer();
    }
}

int Invocateur::getInt(){
    int a;
    f>>a;
    return a;
}

std::string Invocateur::getString(){
    std::string a;
    f>>a;
    return a;
}

Robot * Invocateur::getRobot(){
    return _robot;
}

Invocateur::~Invocateur()
{
}
