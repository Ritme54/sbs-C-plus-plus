#include "Scooter.h"
#include <iostream>

using namespace std;

Scooter::Scooter() : Vehicle() // 부모 클래스의 생성자를 호출
{

	fuel = 100;
	speed = 50; 
	cout << "Created Scooter" << endl;

}
