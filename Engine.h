#pragma once
#include <string>
using namespace std; 
enum EngineType {Gas, Hybrid};
class Engine
{
private: 
	float capacity; 
	EngineType type; //TODO: use enum 

public:

	void setCapacity(float c);
	float getCapacity();

	void setEngineType(EngineType t);

	EngineType getEngineType();

	Engine();
	Engine(float c, EngineType t);
};

