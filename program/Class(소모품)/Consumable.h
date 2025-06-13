#pragma once
#include <iostream>
#include<string>


using namespace std;

class Consumable
{
private:
	string name;
	
public:
	virtual void Use();
	Consumable() : name("") {
		cout << "Get Consumable" << name << endl;
	}
	~Consumable() {
		cout << "Delete Consumable" << name << endl;
	}

};

