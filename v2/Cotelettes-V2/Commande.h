#pragma once
class Commande
{
public:
    Commande();
    virtual ~Commande();
    virtual void executer() = 0;
    virtual void annuler() = 0;
};

