/*
@Authors : Vincent Raybaud & R�my Kaloustian
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
    Robot bot2(Position(0,0), "Nord");
    Afficheur * afficheurTexte2 = new AfficheurTexte(bot2);
    Invocateur(bot2,"txt.txt");


#pragma endregion
}