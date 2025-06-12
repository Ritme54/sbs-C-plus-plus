#pragma once
#include "Vehicle.h"
class Bicycle : public Vehicle
{
protected:
	
public:
	Bicycle(); // 持失切 識情
	void Move()
	{
		cout << "Bicycle speed : " << speed << endl;
	}
	~Bicycle()
	{
		cout << "Bicycle Destroyed\n" << endl;
	}
};

