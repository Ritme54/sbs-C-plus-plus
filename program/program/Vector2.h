#pragma once
#include <iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y);//����2 �Լ� �Ű�����
	void Position();//������ ��� �Լ�
	const Vector2& operator + (const Vector2& Vector2); //'+'�� ���۷����ͷ� �����ε�

};

