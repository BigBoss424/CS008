#include "linetype.h"

lineType::lineType()
{

}

double lineType::getSlope()
{
    if (b != 0)
    {
        slope = -a/b;
    }
}

bool lineType::operator ==(const lineType& rhs)
{
    return (a == rhs.a && b == rhs.b && c == rhs.c);
}

lineType lineType::operator =(const lineType& rhs)
{
    a = rhs.a;
    b = rhs.b;
    c = rhs.c;

    return this;
}

bool lineType::operator +(const lineType& rhs)
{
    return (b == 0 && rhs.b == 0);
}

bool lineType::operator -(const lineType& rhs)
{
    return (a == 0);
}

bool lineType::operator ||(const lineType& rhs)
{
    return ((b + rhs.b) || getSlope() == rhs.getSlope());
}

