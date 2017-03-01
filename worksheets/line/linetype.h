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

    void print()
    {
        std::cout << "Line("<< a_x << ","<< b_y << ")" << "\n";
    }

    void summary()
    {
        std::cout << "\n" << "\t" << "Summary" << "\n"
                  << "-----------------------------" << "\n"
                  << "\n" <<  "Point A_X: " << a_x<< "\n"
                  << "point B_Y: "<< b_y << "\n"
                  << "Slope: " << slope << "\n";
    }

    /*Overloads the unary operator +, as a member function, so that it
     * returns true if a line is horizontal otherwise false.*/
    friend lineType operator+(const lineType &lT1, const lineType &lT2);
    /*Overloads the assignment operator = to copy a line into another line*/
    friend lineType operator=(const lineType &lT1, const lineType &lT2);
    /*Overloads the unary operator -, as a member function so that it returns
     * true if a line is horizontal otherwise false*/
    friend lineType operator-(const lineType &lT1, const lineType &lT2);
    /*Overloads the operator ==, as a member function so that it returns true if
     * two lines are equal otherwise false*/
    friend lineType operator==(const lineType &lT1, const lineType &lT2);
    /*Overloads the operator ||, as a member function, so that is returns true
     * if two lines are parallel otherwise false.*/
    friend lineType operator||(const lineType &lT1, const lineType &lT2);
    /*Overloads the operator &&, as a member function, so that it returns true
     * if two lines are perpendicular otherwise false. */
    friend lineType operator&&(const lineType &lT1, const lineType&lT2);
};

#endif // LINETYPE_H
