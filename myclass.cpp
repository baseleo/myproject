#include "myclass.h"
void myclass::setX(const int &x)
{
    if(x>0)
        _x=x;
    else
        _x=-x;
}

void myclass::setY(const int &y)
{
    _y=(y<0)?(-y):y;
}
