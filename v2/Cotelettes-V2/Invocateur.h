#pragma once

#include "Commande.h"
class Invocateur
{
    Commande * _command;

public:
    Invocateur(Commande& command); 
    ~Invocateur();
};

