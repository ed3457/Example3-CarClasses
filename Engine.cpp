#include "Engine.h"

void Engine::setCapacity(float c)
{
    capacity = c;
}

float Engine::getCapacity()
{
    return capacity;
}

void Engine::setEngineType(EngineType t)
{
    type = t;
}

EngineType Engine::getEngineType()
{
    return type;
}

Engine::Engine()
{
    setCapacity(2.1f);
    setEngineType( EngineType::Gas);

}

Engine::Engine(float c, EngineType t)
{
    setCapacity(c);
    setEngineType(t);

}
