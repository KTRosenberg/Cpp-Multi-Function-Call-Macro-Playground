#include "__B.h"

__B::__B() {};

void __B::__init(__B* __this, int32_t i, float f)
{
    cout << "initializing __B with __B*, int32_t, float" << endl;

    __this->i = i;
    __this->f = f;
    __this->c = NULL;
}

void __B::__init(__B* __this, char c1)
{
    cout << "initializing __B with __B*, char" << endl;

    __this->i = NULL;
    __this->f = NULL;
    __this->c = c1;
}

void __B::__init(__B* __this)
{
    cout << "initializing __B with __B*" << endl;

    __this->i = NULL;
    __this->f = NULL;
    __this->c = NULL;
}

void __B::display()
{
    cout << "i " << i << " f " << f << " c " << c <<endl;
}
