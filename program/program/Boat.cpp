#include "Boat.h"
#include <iostream>

using namespace std;

Boat::Boat() : Vehicle() // �θ� Ŭ������ �����ڸ� ȣ��
{
	fuel = 250;
	speed = 200;
	cout << "Created Boat\n" << endl;

}

