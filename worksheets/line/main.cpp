#include <iostream>
#include "linetype.h"

using namespace std;

int main(int argc, char *argv[])

{
    lineType linetype1(3, 4, 5);
    lineType linetype2(2,5,8);

    linetype1.print();
    linetype2.print();
    linetype1.summary();
    linetype2.summary();

    return 0;
}
