#pragma once

#include "Command.h"
class Invocateur
{
    Command * _command;

public:
    Invocateur(Command& command); 
    ~Invocateur();
};

