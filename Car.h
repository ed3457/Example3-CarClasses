#pragma once
#include "Engine.h"
#include "Wheel.h"
class Car
{
private:
	Engine carEngine;
	Wheel Wheels[4];

public:

	Engine getEngine();

	void setEngine(Engine e);

	Wheel getWheel(int index);

	void setWheel(int index, Wheel w); 

	Car();
	Car(Engine e, Wheel wheels[]);
	Car(Engine e, Wheel w1, Wheel w2, Wheel w3, Wheel w4);

	void printCarInfo();


};

