#ifndef LINETYPE_H
#define LINETYPE_H

#include <iostream>

class lineType
{
private:
    int a_x, b_y,c_c;
    double slope;

public:

    lineType(int a = 0, int b = 0, int c = 0, double slope = 0.0):a_x(a), b_y(b), c_c(c),
                                                                  slope(slope)
    {}

    double getSlope() {return slope;}
    int getX() {return a_x;}
    int getY() {return b_y;}
    int getC() {return c_c;}

    void summary()
    {
        std::cout << "Line("<< a_x << ", "<< b_y << "," << c_c << ")" << "\n";
    }
};

#endif // LINETYPE_H
