#pragma once
class EtatRobot
{
public:
    EtatRobot();
    virtual ~EtatRobot();

    virtual EtatRobot*avancer();
    virtual EtatRobot*tourner();
    virtual EtatRobot*evaluerPlot();
    virtual EtatRobot*poser();
    virtual EtatRobot* saisir() ;
    virtual EtatRobot* peser();
    virtual EtatRobot* figer();
    virtual EtatRobot*rencontrerPlot();
    virtual EtatRobot* repartir();

};

