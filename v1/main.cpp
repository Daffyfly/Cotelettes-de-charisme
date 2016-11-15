#include <iostream>
#include "Robot.h"
#include "AfficheurPosition.h"

int main() {
    Robot bot(Position(0,0));
    Afficheur * afficheurPosition = new AfficheurPosition(bot);
    bot.figer();
    bot.repartir();
}