#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
	//�ڱ� �ڽ��� �⸮Ű�� �������Դϴ�.
	this->x = x;
	this->y = y;
}

void Vector2::Position()
{
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;
}//������ ����ϱ�

const Vector2& Vector2::operator+(const Vector2& vector2)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	Vector2 clone(this->x + vector2.x, this->y + vector2.y);
		return clone;
}
