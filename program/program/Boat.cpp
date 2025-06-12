#include "Boat.h"
#include <iostream>

using namespace std;

Boat::Boat() : Vehicle() // 부모 클래스의 생성자를 호출
{
	fuel = 250;
	speed = 200;
	cout << "Created Boat\n" << endl;

}

