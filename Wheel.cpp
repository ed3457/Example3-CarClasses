#include "Wheel.h"

float Wheel::getDiameter()
{
    return diameter;
}

void Wheel::setDiameter(float d)
{
    diameter = d;
}

Wheel::Wheel()
{
    setDiameter(16.0f);
}

Wheel::Wheel(float d)
{
    setDiameter(d);
}
