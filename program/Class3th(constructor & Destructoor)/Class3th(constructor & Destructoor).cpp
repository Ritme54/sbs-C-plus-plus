﻿#include <iostream>


using namespace std;

class Unit
{

private:
	int health;
	int defense;
	int attack;
public:
	Unit()
	{
		health = 40;
		defense = 0;
		attack = 5;
		cout << "Created Unit" << endl;

	}



	void Stats()
	{
		cout << "Health : " << health << endl;
		cout << "Defense : " << defense << endl;
		cout << "Attack : " << attack << endl;
	}
	~Unit()
	{
		cout << "Destroy" << endl;
	}


};

class Item
{
private:
	char grade;
	int* price;
public:
	Item()
	{
		grade = 'A';
		price = new int(1000);

	}
	Item(Item& clone)
	{
		grade = clone.grade;//아이템의 등급이 클론 아이템의 등급에도 동일하게 적용된다.
		price = new int(*clone.price);

#pragma region 깊은 복사
		//객체를 복사할 때, 참조 값이 아닌 객체 자체를 새로 복사하여
		//서로 다른 메모리를 생성하는 복사.

#pragma endregion

	}
	void Information()
	{
		cout << "Grade : " << grade << endl;
		cout << "Price: " << *price << endl;
	}

	~Item()
	{
		delete price;
	}

};

void Position(int x = 1, int y = 2, int z = 3)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;

}



int main()
{

#pragma region 생성자
	//클래스의 인스턴스가 생성되는 시점에서 자동으로 호출되는 특수한 맴버 함수입니다.

	//Unit unit;
	//unit.Stats();

	//생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
	//생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기 전에는
	//객체에 대한 메모리는 할당하지 않습니다.
#pragma endregion

#pragma region 소멸자
	//객체가 소멸될 때 자동으로 실행되는 클래스의 맴버 함수입니다.

	//Unit* marine = new Unit;
	//marine->Stats();

	//delete marine;

	//marine();

	//소멸자는 객체가 메모리에서 해제될 때 단 한번만 호출되며
	//소멸자는 매개 변수를 생성하여 사용할 수 없습니다.
	//~클래스 이름()
	//{}
#pragma endregion

#pragma region 복사 생성자
	//같은 객체를 복사하여 생성시킬 때 호출되는 생성자.

	//Item item1;
	//item1.Information();
	//Item item2(item1);
	//item2.Information();

	//복사 생성자를 정의하지 않고 객체를 복사하게 되면 기본 복사 생성자가 호출되기 때문에
	//앝은 복사로 객체가 복사됩니다.

#pragma region 얕은 복사
	//객체를 복사할 때 주소 값을 복사하여 같은 메모리 공간을 가리키게 하는 복사이다.
	//int* pointer1 = new int;
	//int* pointer2 = pointer1;
	//	* pointer2 = 20;
	//
	//	cout << "포인터 1이 가리키는 값 : " << *pointer1 << endl;
	//	cout << "포인터 2이 가리키는 값 : " << *pointer2 << endl;
	//	delete pointer1;
	//앝은 복사의 경우 같은 객체가 서로 같은 메모리 공간을 참조하고 있기 때문에
	//하나의 객체로 값을 변경하게 되면 서로 참조된 객체도 함께 영향을 받는다.
	// pointer 2와 pointer1의 주소값이 같기 때문에 pointer2을 소멸하게 되면 이중으로 삭제가 되어 오류가 날 수 있다.
	//prefab 시스템 	
#pragma endregion

#pragma region 기본 매개 변수
	//함수의 매개 변수에 값이 전달되지 않을 때 미리 값을 설정해놓는 매개 변수입니다.

	//Position(5,5);

	//기본 매개 변수를 지정하려면 오른쪽에서부터 값을 지정해주어야 합니다.
	//중간값을 비울 수 없습니다.

#pragma endregion

#pragma region 맴버 이니셜 라이저
	//왜 맴버 이니셜 라이저로 초기화를 해야 하는가?
	// 맴버 이니셜 라이저는 클래스의 맴버 변수를 초기화 하는데 사용되는 구문입니다.
	//생성자의 매개변수 목록 뒤에 콜론(:)을 붙이고, 그 뒤에 초기화할 맴버 변수와 값을 괄호로 지정합니다.
	
	//맴버 이니셜 라이저를 사용하는 이유는 다음과 같습니다.
	//맴버 이니셜 라이저를 사용하면 맴버 변수가 선언과 동시에 초기화되므로
	//생성자 본문에서 초기화하는 것보다 더 효율적입니다.
	//반면에, 생성자 본문에서 초기화하는 경우는 맴버 변수가 선언된 후에 초기화되므로
	//초기화 순서가 복잡해질 수 있습니다. 즉, 맴버 이니셜 라이저를 사용하면 불필요한 순서를 줄여 성능에 이점이 있습니다.

	//맴버 이니셜 라이저를 필수적으로 사용해야 하는 경우는 다음과 같습니다.
	//const 맴버 변수는 초기화 후 값을 변경할 수 없으므로, 생성자 본문에서 초기화할 수 없습니다.
	//참조 맴버 변수는 초기화 시점에 반드시 값을 지정해야 하므로, 생성자 본문에서 초기화할 수 없습니다.
	//기본 타입의 맴버 변수는 생성자 본문에서 초기화할 수 있지만, 맴버 이니셜 라이저를 사용하면 더 효율적입니다.

	//코드 가독성을 높이고, 초기화 순서를 명확하게 하기 위해 맴버 이니셜 라이저를 사용하는 것이 좋습니다.
	//따라서 C++에서는 특별한 이유가 없는 한, 생성자 본문에서 대입하는 것보다
	//멤버 이니셜라이저를 사용하여 멤버 변수를 초기화하는 것이 권장되는 좋은 습관입니다


	

#pragma endregion



#pragma endregion







	return 0;

}
