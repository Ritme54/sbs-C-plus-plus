#include <iostream>

#include "Consumable.h" // Consumable 클래스의 헤더 파일 포함
#include "Potion.h" // Potion 클래스의 헤더 파일 포함
#include "Food.h"   // Food 클래스의 헤더 파일 포함
#include "Scroll.h" // Scroll 클래스의 헤더 파일 포함
#include <conio.h> 

using namespace std;

void Use()
{
	std::cout << "Using the item." << std::endl;

}



int main()
{
#pragma region 생성

	int count = 5;

	int select = 0;

	Consumable* consumable = nullptr;

	while (count > 0)
	{
		cout << "Item Select : ";

		cin >> select;

		cout << endl;

		switch (select)
		{
		case 1: { consumable = new Potion; }
		case 2: { consumable = new Food; }
		case 3: { consumable = new Scroll; }
		default: cout << "Exception" << endl;
			break;
		}

		consumable->Use();

		count--;

		if (consumable != nullptr)
		{
			delete consumable;
		}
	}


#pragma endregion




#pragma region 아이템
	//Potion potion;
	//Food food;
	//Scroll scroll;

	//cout << "포션 객체의 크기 :  " << sizeof(Food) << endl;

	//posion.Use(); // Potion 클래스의 Use 메서드 호출

	//food.Use(); // Food 클래스의 Use 메서드 호출

	//scroll.Use(); // Scroll 클래스의 Use 메서드 호출

	//Consumable* Inventory[3];
	//
	//Inventory[0] = &potion; // Potion 객체를 Inventory 포인터 배열에 저장
	//Inventory[1] = &food;   // Food 객체를 Inventory 포인터 배열에 저장
	//Inventory[2] = &scroll; // Scroll 객체를 Inventory 포인터 배열에 저장
	//for (int i = 0; i < 3; i++)
	//{
	//	Inventory[i]->Use();
	//}

#pragma endregion

	
	return 0;

}
