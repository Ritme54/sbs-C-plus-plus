#include <iostream>
#include "../program/Vehicle.h"
#include "../program/Bicycle.h"
#include "../program/Boat.h"
#include "../program/Scooter.h"



using namespace std;


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

	
	Boat Boat;
	Boat.Move();

	Bicycle Bicycle;
	Bicycle.Move();

	Scooter Scooter;
	Scooter.Move();


	return 0;
}