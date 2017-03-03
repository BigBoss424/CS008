#include <iostream>
#include "linetype.h"

lineType lineType::getSlope(double slope)
{

    if (b != 0)
    {
        slope = -a/b;
    }
    return slope;
}

lineType lineType::operator ==(const lineType& rhs)
{
    if(a == rhs.a && b == rhs.b && c == rhs.c)
    {
        return true;
    }
    return false;
}

lineType lineType::operator =(const lineType& rhs)
{
    a = rhs.a;
    b = rhs.b;
    c = rhs.c;
    slope = rhs.slope;

    return rhs;

}


bool lineType::operator +(const lineType& rhs)
{
    return (b == 0 && rhs.b == 0);
}

friend lineType::operator -(const lineType& rhs)
{
    return (a == 0);
}


lineType lineType::operator ||(const lineType& rhs)
{
    //return ((b + rhs.b) || getSlope() == rhs.getSlope());
    return true;
}

std::ostream &operator<<(std::ostream &output, const lineType &rhs)
{
   // output << "Line rhs(" << rhs.a << ", " << rhs.b << ")" << "\n";
    return output;
}

std::istream &operator>>(std::istream &input, const lineType &rhs)
{
   // input >> rhs.a_x >> rhs.b_y;
    return input;
}
