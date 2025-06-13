#include <iostream>

using namespace std;

void Square(int X)
{
	cout << "Square: " << X * X << endl;
}

void square(double X)
{
	cout << "Square: " << X * X << endl;
}
// 함수 오버로딩 예시: int와 double 타입의 매개변수를 받는 square 함수






int main() {
#pragma region 상속
	//상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정하는 기능.
	//클래스의 상송 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며,
	//하위 클래스는 상위 클래스의 메모리를 포함한 상태로 메모리의 크기가 결정된다,

	//Goblin goblin;
	//Junior_Golem juniorGolem;
	//Slime slime;
	//
	//goblin.Stats();
	//juniorGolem.Stats();
	//slime.Stats();
	//
	//cout << "Goblin의 크기 : " << sizeof(goblin) << endl;
	//cout << "Junior_Golem의 크기 : " << sizeof(juniorGolem) << endl;
	//cout << "Slime의 크기 : " << sizeof(slime) << endl;

#pragma endregion

#pragma region 헤더 파일-cpp파일
	//선언 void Function();

	//정의 Function()
	//Vehicle vehicle; // Vehicle 클래스의 객체 생성

	//해더에서 정의하게 되면 컴파일 시간이 길어진다.
	//헤더 파일은 클래스의 선언부만 포함하고, cpp 파일은 클래스의 정의부를 포함합니다.
	
#pragma region obj 파일
	

#pragma endregion

#pragma endregion

#pragma region 다형성
	//여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로 처리할 수 있는 작업.
	
	
	
	//다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고,
	//실행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.
	//정적 바인딩= 컴파일 시점에 함수와 속성이 결정되는 것
	//동적 바인딩= 실행 시간(런타임)에 함수와 속성이 결정되는 것
	//하나의 포인터로 여러 객체를 처리할 수 있는 기능을 제공합니다.
#pragma region 함수의 오버로딩
	//함수의 이름은 같지만 매개변수의 개수나 타입이 다른 함수를 여러 개 정의하는 것.
	//같은 이름의 함수를 매개변수의 자료형(int, float)과 매개 변수의 수로 구분하여 여러 개를 선언한느것.
	// 
	//Square(2);
	//quare(4.2);
	//void Function(int a) {
	//	cout << "Function(int a) called with value: " << a << endl;
	//}
	//void Function(float b) {
	//	cout << "Function(float b) called with value: " << b << endl;
	//}
	//함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의 형태를 보고 호줄하므로,
	//반환형으로 함수의 오버로딩은 생성할 수 없습니다.

#pragma endregion

#pragma region 함수의 오버라이딩
	// 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여 사용하는 기능.
	//함수의 오버라이딩은 상속 관계에서만 이루어지며,
	//하위 클래스에서 함수를 재정의할때 상위 클래스의 함수 형태와 일치해야 합니다.
	//객체 배열
	////Vehicle vehicles[3]; // Vehicle 클래스의 객체 배열 생성
	//for (int i = 0; i < 3; i++) {
	//	vehicles[i].Function(); // 각 객체의 Function() 메서드 호출
	//}
	//부모 클래스의 포인터
#pragma endregion

#pragma region 가상 함수
	//가상 함수 테이블을 사용하여 함수가 호출되는 시간을 런타임에 결정하며,
	// 한개 이상의 가상 함수를 포함하는 클래스가 있을 때 가상 함수를 가리키는 포인터가 추가된다.
	
	//virtual void --
	//override; = 자식 함수에 넣어주는게 좋으며 함수를 안정적으로 만들어준다.
	


	//가상 함수는 실행 시간에 상위 클래스에 대한 참조로
	//하위 클래스에 재정의된 함수를 호출할 수 있다.
#pragma endregion



#pragma endregion

	return 0;
}