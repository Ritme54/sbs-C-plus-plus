#pragma once
#include "Vehicle.h"
#include <iostream>

using namespace std;


class Boat : public Vehicle
{
protected:
	int fuel;

public:
	Boat();
	void Move()
	{
		cout <<"Boat speed : "<< speed << endl;
		cout << "Boat fuel:" << fuel << endl;
	}
	~Boat()
	{
		cout << "Boat Destroyed\n" << endl;
	}

};

