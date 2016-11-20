#include "__A.h"

__A::__A() {};

void __A::__init(__A* __this, char c1, char c2)
{
    cout << "initializing __A with __A*, char, char" << endl;

    __this->c1 = c1;
    __this->c2 = c2;

}

void __A::__init(__A* __this, char c1)
{
    cout << "initializing __A with __A*, char" << endl;

    __this->c1 = c1;
    __this->c2 = NULL;
}

void __A::__init(__A* __this)
{
    cout << "initializing __A with __A*" << endl;

    __this->c1 = NULL;
    __this->c2 = NULL;
}

void __A::display()
{
    cout << "c1 " << c1 << " c2 " << c2 << " " << endl;
}
