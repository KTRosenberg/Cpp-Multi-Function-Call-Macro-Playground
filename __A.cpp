#include "__A.h"

__A::__A() {};

void __A::__init(__A* __this, char c1, char c2)
{
    cout << "initializing __A with __A*, char, char" << endl;
}

void __A::__init(__A* __this, char c1)
{
    cout << "initializing __A with __A*, char" << endl;
}

void __A::__init(__A* __this)
{
    cout << "initializing __A with __A*" << endl;
}
