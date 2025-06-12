#include "Bicycle.h"
#include <iostream>

using namespace std;

Bicycle::Bicycle() : Vehicle() // 부모 클래스의 생성자를 호출
{
	speed = 25;
	cout << "Created Bicycle" << endl;
}

