/*
*  Created by: Aaron Jones
*  Date: 2/24/17
*  DueDate: 2/27/17
*  Description: This header file will be used to declare the
* 		triangle class within triangle.cpp. 
*/

class Triangle
{
	public: 
		Triangle();
		Triangle(int size);
		Triangle(int size, char borderCharacter, char fillCharacter);
	private:
		int size;
		char borderCharacter;
		char fillCharacter;

};

