/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include <iostream>
#include "Robot.h"
#include "AfficheurTexte.h"
#include "Invocateur.h"

int main() {

#pragma region V1
    Robot bot(Position(0,0), "Nord");
    Afficheur * afficheurTexte = new AfficheurTexte(bot);
    bot.figer();
    bot.repartir();

#pragma endregion


#pragma region V2

#pragma endregion
}