#include <iostream>
#include "Robot.h"
#include "AfficheurTexte.h"

int main() {
    Robot bot(Position(0,0), "Nord");
    Afficheur * afficheurTexte = new AfficheurTexte(bot);
    bot.figer();
    bot.repartir();
}