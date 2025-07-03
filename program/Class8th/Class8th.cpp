
#include <iostream>
#include <memory> // 스마트 포인터를 사용하기 위한 헤더 파일
#include "Packet.h"
#include "Resource.h"
#include "Character.h"

using namespace std;


int main()
{
#pragma region 메모리

	//int* a = new int;
	//*a = 10;
	//
	//std::cout << "a : " << *a << std::endl;
	//int* b = a; //얕은 복사
	//
	//cout << " b : " << *b << endl;
	//
	//*b = 100;
	//cout << " b : " << *b << endl;
	//delete a;

	//int* ptr2 = nullptr;
	//{
	//	int* ptr1 = new int;
	//	ptr2 = ptr1; //얕은 복사
	//
	//
	//}
	//*ptr2 = 1000; //이 시점에서 ball1은 이미 소멸되었기 때문에
	//delete ptr2; //이 시점에서 ball2도 소멸된다.


#pragma endregion


#pragma region 스마트 포인터(Smart Pointer)
	//특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록 되어 있는 포인터입니다.


	// unique_ptr<자료형> 변수명;= make_unique<자료형>(값);

	//unique_ptr<Packet> pointer = make_unique<Packet>();
	//
	//pointer->Receive();
	//
	//unique_ptr<Packet> reference = std::move(pointer);
	//
	//pointer->Receive();


#pragma endregion

#pragma region l-value, r-value에 대해서
	//l-value : 메모리 주소를 가지는 값, 변수, 상수 등
	//r-value : 메모리 주소를 가지지 않는 값, 리터럴, 연산 결과 등
	//l-value는 r-value로 대입할 수 있지만, r-value는 l-value로 대입할 수 없다.
	//l-value는 r-value로 대입할 수 있지만, r-value는 l-value로 대입할 수 없다.
	//int a = 10; //a는 l-value, 10은 r-value
	//int b = a; //a는 l-value, b는 l-value
	//b = 20; //b는 l-value, 20은 r-value
	//메모리 관리 및 성능 최적화 : l - value와 r - value의 특성을 이해하면 불필요한 메모리 복사를 줄이고
	//임시 객체의 수명을 효율적으로 관리하여 프로그램의 성능을 최적화할 수 있습니다.
	//참조 바인딩 규칙 : l - value 참조는 l - value에만 바인딩되고
	//r - value 참조는 r - value에만 바인딩되는 규칙을 통해 코드의 안전성과 의미를 명확히 합니다.



#pragma endregion

#pragma region shared pointer
	//하나의 자원객체를 여러 포인터 객체가 가리킬 수 있으며,
	//모든 포인터 객체가 자원 객체를 필요하지 않을 때 자원 객체를 해제하도록 설계되어 있는 포인터입니다.

	//Reference_count
	// 
	// 
	//shared_ptr<자료형> 변수명 = make_shared<자료형>(값);

	//shared_ptr<Resource> oil = make_shared<Resource>();
	//
	//shared_ptr<Resource> mineral = make_shared<Resource>();
	//
	//oil->Share(mineral);
	//
	//mineral->Share(oil);
	//
	//cout << "Reference Count oil : " << oil.use_count() << endl;
	//cout << "Reference Count mineral : " << mineral.use_count() << endl;

#pragma endregion

#pragma region weak pointer(약한 포인터)
	//자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는 객체를 가리켜서
	// 참조 개수에 영향을 미치지 않게 하는 포인터
	//weak_ptr<자료형> 변수명 = make_shared<자료형>(값);
	//
	//shared_ptr<Character> wizard = make_shared<Character>();
	//shared_ptr<Character> warrior = make_shared<Character>();
	//
	//wizard->Partner(warrior);
	//warrior->Partner(wizard);
	//
	//cout << "Reference Count  : " << wizard.use_count() << endl;
	//cout << "Reference Count  : " << warrior.use_count() << endl;

#pragma endregion


#pragma endregion

}
