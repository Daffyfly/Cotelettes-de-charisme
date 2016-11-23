/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

#include <string>

//Classe de base pour un état de robot, qui sera hérité dans tous les autres états
//Abstraite car on ne sait pas ce que fait un état de base
class EtatRobot
{
public:
    EtatRobot();
    virtual ~EtatRobot();
    
    //Seules les méthodes demandées dans l'énoncé ont été implémentées
    virtual EtatRobot* saisir();
    virtual EtatRobot* figer() ;
    virtual EtatRobot* repartir() ;

    //Caractéristique du côté abstrait de la classe
    virtual std::string getName() = 0;

};

