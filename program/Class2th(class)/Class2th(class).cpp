#include<iostream>

using namespace std; // std 네임스페이스 사용 선언

void swap(int& a, int& b) // 참조자를 이용한 swap 함수
{
	int temp = a; // a의 값을 temp에 저장
	a = b; // b의 값을 a에 대입
	b = temp; // temp의 값을 b에 대입
}

class GameObject // GameObject 클래스 정의
{
#pragma region 접근 지정자
	//클래스 내부에 포함되어 있는 속성에 접근 범위를 제한하는 지정자.
	//접근 지정자는 클래스의 멤버 변수와 멤버 함수에 적용되며,
	//public: 클래스 내부와 자기가 상속하고 있는 클래스 그리고 외부에서 접근 가능한 지정자
	//protected: 클래스 내부와 상속받은 클래스에서 접근 가능한 지정자
	//private: 클래스 내부에서만 접근 가능한 지정자
	//아무것도 설정 하지 않을경우 : private로 설정된다.

#pragma endregion
private:
	int x = 0;
	int y = 0;
	int z = 0;

protected:
	static int count; //static은 데이터 영역에 포함되어 클래스의 모든 객체가 공유하는 변수
	//정적(Static) 멤버 변수 (count):
	// static 키워드를 사용하여 선언된 멤버 변수로, 클래스의 모든 객체가 공유하는 변수입니다.
	//이처럼 프로그램 실행 기간 동안 단 하나만 존재하며 프로그램 시작 시 할당되는 정적
	// 변수들은 * *데이터 영역(Data Segment) * *에 저장됩니다.
	//참고로 스태틱 멤버 변수는 클래스 정의 바깥에서 별도로 초기화해주어야 합니다
	// (예: int GameObject::count = 0;).


public:
	void SetX(int value)
	{

		if (value >= 100)
		{
			cout << "Exeception" << endl;
		}
		else
		{
			x = value;
		}
	}

	const int& GetX()
	{
		return x;

	}

	void SetY(int value)
	{

		if (value >= 100)
		{
			cout << "Exeception" << endl;
		}
		else
		{
			y = value;
		}
	}

	const int& GetY()
	{
		return y;

	}

	void SetZ(int value)
	{

		if (value >= 100)
		{
			cout << "Exeception" << endl;
		}
		else
		{
			z = value;
		}
	}

	const int& GetZ()
	{
		return z;

	}

	static int GetCount(int a, int b, int c) // 정적 멤버 함수로 클래스의 객체 개수를 반환
	{
		return count = a + b + c;
	}

};

int GameObject::count = 0;

// GameObject 클래스의 정적 멤버 변수 count 초기화
// GameObject 클래스의 정적 멤버 변수 count는 클래스 정의 바깥에서 초기화해야 합니다.
// 예를 들어, int GameObject::count = 0;와 같이 초기화할 수 있습니다.



int main()
{

#pragma region 참조자
	// 하나의 변수에 또 다른 이름을 지정하는 지정자이다.

	//int x = 10; //정수형 변수 x 선언 및 초기화
	//int& ref = x; // x의 참조자 ref 선언 (레퍼런스) 레퍼런스의 메모리 공간은 존재하지 않는다. 
	//cout << "x의 값: " << x << endl; // x의 값 출력
	//cout << "ref의 값: " << ref << endl; // ref의 값 출력
	//cout << "x의 주소: " << &x << endl; // x의 주소 출력
	//cout << "ref의 주소: " << &ref << endl; // ref의 주소 출력 (x와 동일한 주소)
	//
	//int leftValue = 10;
	//int rightValue = 20;
	//
	//cout << "leftValue의 값: " << leftValue << endl; // leftValue의 값 출력
	//cout << "rightValue의 값: " << rightValue << endl; // rightValue의 값 출력	
	//	
	//swap(leftValue, rightValue); // swap 함수 호출
	//
	//cout << "leftValue의 값: " << leftValue << endl; // leftValue의 값 출력
	//cout << "rightValue의 값: " << rightValue << endl; // rightValue의 값 출력
	//레퍼런스 값이기 때문에 역참초를 통해서 값을 바꿔줄 필요가 없다.


#pragma endregion

#pragma region 클래스
	//사용자 정의 자료형으로 속성과 함수가 포함되어 있으며, 클래스의 메모리 영역에 포함되지만,
	//클래스를 통해 객체를 생성하여 접근하고 사용하는 집합체,

	//클래스의 경우 클래스 내부에 있는 변수는 클래스 메모리의 영역에 포함되지만,
	//정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않습니다,

	//구조체 ->클래스

	GameObject gameObject1; // GameObject 클래스의 객체 gameObject1 생성 
	//GameObject gameObject2; // GameObject 클래스의 객체 gameObject2 생성
	//GameObject gameObject3; // GameObject 클래스의 객체 gameObject3 생성
	//GameObject 클래스의 멤버 변수 x, y, z가 포함된 객체 생성
	//health=100;
	//함수(int data) //GameObject 클래스의 멤버 함수 정의



	gameObject1.SetX(10);
	gameObject1.GetX();


	gameObject1.SetY(20);
	gameObject1.GetY();

	gameObject1.SetZ(30);
	gameObject1.GetZ();

	//
	//cout << "gameObject1.x : " << gameObject1.GetX() << endl;
	//cout << "gameObject1.y : " << gameObject1.GetY() << endl;
	//cout << "gameObject1.z : " << gameObject1.GetZ() << endl;
	//
	////메모리 크기 확인
	//cout << "sizeof(gameObject1) : " << sizeof(gameObject1) << endl; // gameObject1의 크기 출력

	//gameObject1.z = 5; // gameObject1의 z 멤버 변수에 값 대입
	//cout << "gameObject1.z의 값 : " << gameObject1.z << endl;
	//객체 지향 프로그래밍
	//1. 추상화
	//2. 캡슐화
	//3. 상속
	//4. 다형성




#pragma endregion

#pragma region 정적 멤버 함수
	// 객체 없이 호출 가능 : 정적 멤버 함수는 특정 객체를 만들지 않고도 클래스 이름만으로
	// 호출할 수 있습니다.
	// This 포인터 없음 : 정적 멤버 함수는 특정 객체를 가리키는 this 포인터를 가지지 않습니다.
	// 비정적 맴버에 접근 불가 : 정적 멤버 함수는 비정적 멤버 변수나 비정적 멤버 함수에 직접 접근할 수 없습니다.
	// 어떤 객체인지 알수 없기 때문입니다.
	// 정적 멤버에만 접근이 가능합니다 : 정적 멤버 함수는 클래스의 정적 멤버 변수나 다른 정적 멤버 함수에만 접근할 수 있습니다.

	// 정적 맴버 함수를 사용하는 경우.
	// 클래스의 모든 객체와 관련이 있지만 특정 객체(맴버 변수 등)에 종속되지 않는 기능을 구현할 때 유용합니다.
	// 클래스의 정적 맴버 객체를 관리하거나, 클래스의 상태를 추적하는 등의 용도로 사용됩니다.
	// 유틸리티	함수 : 클래스와 관련된 유틸리티 함수를 구현할 때 유용합니다.

	// 정적 맴버 함수 예시
	cout << "정적 맴버 함수 count의 값 : " << GameObject::GetCount(10, 30, 50) << endl;

#pragma endregion



}