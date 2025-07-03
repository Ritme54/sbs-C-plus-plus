#pragma once
#include <iostream>
using namespace std;

class Character
{

private:
	weak_ptr<Character> partner; // 약한 참조를 사용하여 순환 참조를 방지합니다.
public:
	Character();

	void Partner(const weak_ptr<Character>& character);


	~Character();




};

