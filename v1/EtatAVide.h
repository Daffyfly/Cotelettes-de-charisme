
/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/
#pragma once
#include "EtatEnRoute.h"
class EtatAVide :
    public EtatEnRoute
{
private:
    static EtatAVide* instance;

    EtatAVide();
public:    
    static EtatAVide* getInstance();
    virtual ~EtatAVide();

    std::string getName();
};

