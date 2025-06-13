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

	cout << "숫자키 1 인식" << endl;

	char key;

	while (true)
	{
		if (_kbhit())
		{
			key = _getch();
			if (key == '1')
			{
				Use();
			}

		}
		else if (_kbhit())
		{
			key = _getch();
			if (key == '2')
			{
				Use();
			}

		}
		else if (_kbhit())
		{
			key = _getch();
			if (key == '3')
			{
				Use();
			}

		}
		else if (_kbhit())
		{
			key = _getch();
			if (key =='4')
			{
				cout << "nothing" << endl;
			}
			
		}
		else if (_kbhit())
		{
			key = _getch();
			if (key == '5')
			{
				cout << "nothing" << endl;
			}

		}
		else if (_kbhit())
		{
			key = _getch();
			if (key == 27)
			{
				cout << "End" << endl;
				break;
			}

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
