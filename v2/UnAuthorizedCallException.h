/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/
#include <iostream>
#include <exception>

using namespace std;

/*
    How to use it ? 

    UnAuthorizedCallException myex;
    throw myex;
*/
//L'exception renvoyé si on effectue une action infaisable dans un certain état
class UnAuthorizedCallException :public exception
{
    public :
        virtual const char* what() const throw()
        {
            return "UnAuthorizedCallException  ! You can't call this function.";
        }
};