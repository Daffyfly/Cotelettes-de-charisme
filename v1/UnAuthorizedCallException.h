/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/
#include <iostream>
#include <exception>

using namespace std;

/*
    How to use it ? 

    UnAuthorizedCallException myex;
    throw myex;
*/
//L'exception renvoy� si on effectue une action infaisable dans un certain �tat
class UnAuthorizedCallException :public exception
{
    public :
        virtual const char* what() const throw()
        {
            return "UnAuthorizedCallException  ! You can't call this function.";
        }
};