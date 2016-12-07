//
// Created by vincent on 07/12/16.
//

#pragma once

#include "CommandeRobot.h"

//CommandeROBOT???? Demander à la prof

class CommandeAnnuler :
    public CommandeRobot
{
    protected:
        virtual Commande* constructeurVirtuel(Invocateur & i);

    public:
        static CommandeAnnuler maCommande;

        CommandeAnnuler(Robot&);
        CommandeAnnuler(std::string name): CommandeRobot(name){}
        virtual ~CommandeAnnuler();
        virtual void executer();
};
