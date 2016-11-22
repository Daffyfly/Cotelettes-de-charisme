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

class UnAuthorizedCallException :public exception
{
    public :
        virtual const char* what() const throw()
        {
            return "UnAuthorizedCallException  ! You can't call this function.";
        }
};