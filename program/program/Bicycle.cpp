#include "Bicycle.h"
#include <iostream>

using namespace std;

Bicycle::Bicycle() : Vehicle() // �θ� Ŭ������ �����ڸ� ȣ��
{
	speed = 25;
	cout << "Created Bicycle" << endl;
}

