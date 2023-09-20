// Example3-CarClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
using namespace std;
int main()
{
	Car c1; 

	cout << c1.getEngine().getCapacity() << endl;

	Wheel temp = c1.getWheel(2);
	temp.setDiameter(18);
	c1.setWheel(2,temp);


	temp = c1.getWheel(3);
	temp.setDiameter(18);
	c1.setWheel(3, temp);
	

	for (int i = 0;i < 4;i++)
	{
		cout << c1.getWheel(i).getDiameter() << endl;
	}

	///////////////////////////////////////

	// Create another object using the 2nd constructor: 
	//1. create an Engine object 
	//2. create an array of wheels 
	//3. create the car object 



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
