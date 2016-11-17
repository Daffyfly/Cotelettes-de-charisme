#pragma once
#include "EtatEnRoute.h"
class EtatEnCharge :
    public EtatEnRoute
{
private:
    static EtatEnCharge* instance;

    EtatEnCharge();
public:
    static EtatEnCharge* getInstance();
    virtual ~EtatEnCharge();

    std::string getName();
};

