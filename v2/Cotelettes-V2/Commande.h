#pragma once

class Invocateur;

class Commande
{
public:
    Commande();
    virtual ~Commande();
    virtual void executer() = 0;
    virtual void annuler() = 0;
    virtual Commande* constructeurVirtuel(Invocateur&)=0;
};

