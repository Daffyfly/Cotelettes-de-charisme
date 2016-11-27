#pragma once
class Command
{
public:
    Command();
    virtual ~Command();
    virtual void executer() = 0;
    virtual void annuler() = 0;
};

