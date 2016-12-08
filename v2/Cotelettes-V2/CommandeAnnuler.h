//
// Created by vincent on 07/12/16.
//

#pragma once

#include "CommandeRobot.h"

//CommandeROBOT???? Demander à la prof

class CommandeAnnuler :
    public Commande
{
    protected:
        virtual Commande* constructeurVirtuel(Invocateur & i);

    public:
        static CommandeAnnuler maCommande;

        CommandeAnnuler();
        CommandeAnnuler(std::string name): Commande(name){}
        virtual ~CommandeAnnuler();
        void executer();
        void annuler();
};
