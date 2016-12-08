/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

#include "EtatRobot.h"

//Classe n�cessaire pour le polymorphisme. C'est la classe m�re des �tats qui ne sont pas l'�tat fig�,
//conform�ment au diagramme d'�tats transitions
class EtatEnRoute :
    public EtatRobot
{
public:
    EtatEnRoute();
    virtual ~EtatEnRoute();
    //Tous les �tats fils peuvent ex�cuter figer()
    EtatRobot* figer();
    EtatRobot* tourner(std::string,std::string);
};