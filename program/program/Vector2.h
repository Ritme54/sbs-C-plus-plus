#pragma once
#include <iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y);//백터2 함수 매개변수
	void Position();//포지션 출력 함수
	const Vector2& operator + (const Vector2& Vector2); //'+'을 오퍼레이터로 오버로딩

};

