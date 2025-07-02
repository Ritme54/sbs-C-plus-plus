
#include <iostream>
#include <memory> // 스마트 포인터를 사용하기 위한 헤더 파일
#include "Packet.h"
#include "Resource.h"
#include "Resource2.h"
using namespace std;

void Share()
{
	std::cout << "--- 순환 참조 생성 시작 ---" << std::endl;
	shared_ptr<Resource> oil = make_shared<Resource>();
	shared_ptr<Resource2> mineral = make_shared<Resource2>();

	std::cout << "초기 참조 카운트: oil = " << oil.use_count()
		<< ", mineral = " << mineral.use_count() << std::endl;

	oil->ptr_to_resource2 = mineral;
	mineral->ptr_to_resource = oil;

	std::cout << "순환 참조 설정 후 참조 카운트: oil = " << oil.use_count()
		<< ", mineral = " << mineral.use_count() << std::endl;
	std::cout << "--- 순환 참조 생성 완료 ---" << std::endl;

}

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

#pragma region (L)l-value, (R)r-value의 이해



#pragma endregion

#pragma region shared pointer
	//하나의 자원객체를 여러 포인터 객체가 가리킬 수 있으며,
	//모든 포인터 객체가 자원 객체를 필요하지 않을 때 자원 객체를 해제하도록 설계되어 있는 포인터입니다.

	//Reference_count
	// 
	// 
	//shared_ptr<자료형> 변수명 = make_shared<자료형>(값);
    //
	//shared_ptr<Resource> oil = make_shared<Resource>();
	//{
	//	shared_ptr<Resource> mineral = oil;
	// 
	//}
	
	shared_ptr<Resource> oil = make_shared<Resource>();
	shared_ptr<Resource2> mineral = make_shared<Resource2>();


#pragma endregion


#pragma endregion

}
