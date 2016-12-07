/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

#include <string>

//Classe de base pour un �tat de robot, qui sera h�rit� dans tous les autres �tats
//Abstraite car on ne sait pas ce que fait un �tat de base
class EtatRobot
{
public:
    EtatRobot();
    virtual ~EtatRobot();
    
    //Seules les m�thodes demand�es dans l'�nonc� ont �t� impl�ment�es
    virtual EtatRobot* saisir();
    virtual EtatRobot* figer() ;
    virtual EtatRobot* repartir() ;
    virtual EtatRobot* avancer();

    //Caract�ristique du c�t� abstrait de la classe
    virtual std::string getName() = 0;

};

