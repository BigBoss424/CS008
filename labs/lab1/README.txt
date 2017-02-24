Restrictions: 

1) No global variables, other than constants
2) All member data of your class must be private
3) You will need to use the <iostream> library for output.  You may use the <iomanip> library for 	formatting your decimal output to two places, if you wish to use the parameterized stream manipulators, but you may not use setw() or other output formatting functions for drawing the actual triangle. You may use the <cmath> library
4) Do not use language or library features that are C++11-only
5) When you write source code, it should be readable and well-documented.
6) Your triangle.h file should contain the class declaration only.  The triangle.cpp file should contain the member function definition


Triangle.h 



Triangle.cpp

Description: Establishes the class object for triangle. Along with the getter and setter
functions. The methods will consist of the following functions. 

class Triangle

Description: This class will have three parameters. 

int size; 
int lengthOfSide;
char borderCharacter; 
char fillCharacter;

int getSize()

int getPerimeter()

int getArea()

Description: Will consist of using Heron's Formula. Which will consist of the following;
	     Area = sqrt(s(s-a)(s-b)(s-c)) 

	     While to gain the value of the side from the following;
	     Side = a+b+c/2

void Draw()

Description: Will consist of roughly two for loops to construct the triangle
	     based upon it's size and lengthOfSize variables within the triangle
	     class itself. 


void Shrink()

void Grow()

Description: Will consist of a similar 
double Area()

void SetBorder()

void SetFill()

void Summary()

Description: Will consist of the a simple toString-like function to display the given out of a particular triangle.

