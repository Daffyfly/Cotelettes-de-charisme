#pragma once
class EtatRobot
{
public:
    EtatRobot();
    virtual ~EtatRobot();

    virtual EtatRobot* saisir() ;
    virtual EtatRobot* figer();
    virtual EtatRobot* repartir();

};

