#include "Invocateur.h"
#include "CommandeRobot.h"
#include <fstream>


Invocateur::Invocateur(Robot & robot, std::string file)
{
    std::cout << "In Invocateur ctro\n";
    _robot = &robot;
    std::ifstream f(file);
    for( std::string line; std::getline( f, line ); )
    {
        std::cout << "Reading from file \n";
        Commande * commande = CommandeRobot::nouvelleCommande(line,*this);
        commande->executer();
    }

    for (const auto& elem : CommandeRobot::commandesInscrites())
    {
        std::cout << elem.first << "  _  ";
        std::cout << elem.second << " \n";
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
