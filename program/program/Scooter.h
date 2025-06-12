#pragma once
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Scooter : public Vehicle
{
protected:
		int fuel;
public:
	Scooter();
	void Move()
	{
		cout << "Scooter speed : " << speed << endl;
		cout << "Scooter fuel: " << fuel << endl;
	}

	~Scooter()
	{
		cout << "Scooter Destroyed\n" << endl;
	}

};

