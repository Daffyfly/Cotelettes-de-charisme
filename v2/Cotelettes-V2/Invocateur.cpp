#include "Invocateur.h"
#include "CommandeRobot.h"
#include <fstream>


Invocateur::Invocateur(Robot & robot, std::string file)
{
    _robot = &robot;
    std::ifstream f(file);
    for( std::string line; std::getline( f, line ); )
    {
        std::cout << "Reading from file : "<<line<<"\n";
        Commande * commande = CommandeRobot::nouvelleCommande(line,*this);
        commande->executer();
    }
}

int Invocateur::getInt(){
    return 0;
}

Robot * Invocateur::getRobot(){
    return _robot;
}

Invocateur::~Invocateur()
{
}
