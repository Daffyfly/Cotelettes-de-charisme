/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

#include "EtatRobot.h"

//Classe nécessaire pour le polymorphisme. C'est la classe mère des états qui ne sont pas l'état figé,
//conformément au diagramme d'états transitions
class EtatEnRoute :
    public EtatRobot
{
public:
    EtatEnRoute();
    virtual ~EtatEnRoute();
    //Tous les états fils peuvent exécuter figer()
    EtatRobot* figer();
};