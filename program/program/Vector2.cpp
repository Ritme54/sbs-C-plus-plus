#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
	//자기 자신을 기리키는 포인터입니다.
	this->x = x;
	this->y = y;
}

void Vector2::Position()
{
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;
}//포지션 출력하기

const Vector2& Vector2::operator+(const Vector2& vector2)
{
	// TODO: 여기에 return 문을 삽입합니다.
	Vector2 clone(this->x + vector2.x, this->y + vector2.y);
		return clone;
}
