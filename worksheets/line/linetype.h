#ifndef LINETYPE_H
#define LINETYPE_H


class lineType
{
private:
    int a;
    int b;
    int c;
    double slope;

public:
    lineType();
    double getSlope();
    bool operator ==(const lineType& rhs);
    lineType operator =(const lineType& rhs);
    bool operator +(const lineType& rhs);
    bool operator -(const lineType& rhs);
    bool operator ||(const lineType& rhs);

};

#endif // LINETYPE_H
