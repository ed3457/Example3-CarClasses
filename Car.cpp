#include "Car.h"

Engine Car::getEngine()
{
    return carEngine;
}

void Car::setEngine(Engine e)
{
    carEngine = e;
}

Wheel Car::getWheel(int index)
{
    return Wheels[index];
}

void Car::setWheel(int index, Wheel w)
{
    Wheels[index] = w;
}

Car::Car()
{
}

Car::Car(Engine e, Wheel wheels[])
{
    setEngine(e);

    for(int i=0;i<4;i++)
     setWheel(i, wheels[i]);
}

Car::Car(Engine e, Wheel w1, Wheel w2, Wheel w3, Wheel w4)
{
    setEngine(e);
    setWheel(0, w1);
    setWheel(1, w2);
    setWheel(2, w3);
    setWheel(3, w4);


}

void Car::printCarInfo()
{
}
