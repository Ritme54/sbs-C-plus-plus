#include <iostream>   //입출력 스트림 //아이오스트림


using namespace std;//std를 선언하므로서 이 아래로는 std를 적을 필요가 없다.
//int packet = 20;

namespace LSJ
{
	float time = 5.0f;

	void Function()
	{
		cout << "LSJ Function" << endl;
		
	}
}

namespace Library
{
	const char* manual = "manual1";
	void Function()
	{
		cout << "Library Function" << endl;

	}
}

using namespace Library;


int main()
{
	//삽입 연산자 <<  
	//추출 연산자 >>
	//scanf("Hello, World!\n"); //C언어 스타일의 출력
	//C언어 : 절차지향 언어
	// 자바 또는 C# : 객체지향 언어
	//C++ : 멀티패럼다임 언어 (객체지향 언어)

#pragma region 스트림
	//시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름.

	//int series = 5;
	//int count = 0;
	//
	//std::cin >> count;
	//
	//
	//std::cout << "A"<<series << std::endl;
	//std::cout << "program";
	//
	//for (int i = 1; i <= count; i++)
	//{
	//	std::cout << "Playstation" << i << std::endl;
	//
	//}

	//std::cout << std::endl;
	//for (int i = 1; i < 6; i++)
	//{
	//	std::cout << "Xbox" << i << std::endl;
	//}

	//PlayStation 5
	
	//스트림은 운영체제의 의해 생성되며,
	//스트림 자체에 버퍼라는 임시 메모리 공간이 존재합니다.

	
#pragma endregion

#pragma region 범위 지정 연산자
	//여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자
	
	//:: = 특정한 범위를 지정하는 연산자.

	//int packet = 10;
	//
	//cout << "packet지역변수의 값 : " << packet << endl;
	//cout << "packet전역변수의 값 : " << ::packet << endl;


	//범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때
	//가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이 존재하기 때문에
	//전역 변수가 호출되지 않는다.
	//범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않는다.
#pragma endregion

#pragma region 이름 공간
	//속성을 구분할 수 있도록 유효 범위를 설정하는 영역

	//LSJ::Function();
	//
	//Function();

	
	//이름 공간은 코드의 가독성을 높이고, 이름 충돌을 방지하는데 사용됩니다.
	//namespace MyNamespace

#pragma endregion

#pragma region 동적 할당
	
#pragma region 주석
	//동적 할당은 프로그램 실행 중에 메모리를 할당하는 방법입니다.
	//동적 할당은 런타임에 메모리를 할당하고 해제할 수 있습니다.
	//int* p = new int; //int형 변수 하나를 동적 할당
	//*p = 10; //동적 할당한 변수에 값 대입
	//std::cout << "동적 할당한 변수의 값: " << *p << std::endl;
	//delete p; //동적 할당한 변수 해제
	////동적 할당은 메모리 누수를 방지하기 위해 반드시 해제해야 합니다.
	//동적 할당은 메모리의 크기를 런타임에 결정할 수 있습니다.

#pragma endregion

	//Heap
	//new int; 	//자료형(int, double)
	//int* A = new int; //동적 할당
	//*A = 100; //역참조
	//	cout << "A가 가리키는 값 : "<< *A << endl;
	//
	//	delete A; //delete 변수 이름;
	//	//delete A;(해제된 메모리를 다시 해제하기 때문에 터진다.

#pragma region 동적 배열

		//A = new int[5]; //int형 배열 5개를 동적 할당
		//for (int i = 0; i < 5; i++)
		//{
		//	A[i] = (i + 1) * 10; //배열에 값 대입
		//	cout << "A[" << i << "]" << "=" << A[i] << endl; 
		//}
		//
		//delete[] A; //동적 할당한 배열 해제
		
#pragma endregion


#pragma endregion


#pragma region 시퀀스 포인트
	//시퀀스 포인트는 프로그램 실행 중에 특정 시점에서 모든 이전 연산이 완료되고
	//모든 후속 연산이 시작되기 전에 발생하는 지점을 의미합니다.
	
	//1. 세미콜론(;) : 문장의 끝을 나타내며, 이전 문장이 완료된 후 다음 문장이 시작됩니다.
	//2. 함수 호출 : 함수가 호출되면, 함수 내부의 모든 연산이 완료된 후에 다음 코드가 실행됩니다.
	//3. 조건문 : if 문이나 switch 문 등에서 조건이 평가된 후, 해당 블록의 코드가 실행됩니다.
	//4. 반복문 : for, while 등의 반복문에서 각 반복이 끝난 후 다음 반복이 시작됩니다.
	//5. 논리 AND(&&) : 왼쪽 피연산자가 참인 경우에만 오른쪽 피연산자를 평가합니다.
	//6. 논리 OR(||) : 왼쪽 피연산자가 거짓인 경우에만 오른쪽 피연산자를 평가합니다.
	//7. 조건 연산자(? :) : 조건이 참인 경우 왼쪽 피연산자를, 거짓인 경우 오른쪽 피연산자를 평가합니다.
	//8. 쉼표(,) 연산자 : 왼쪽 피연산자를 먼저 평가한 후, 오른쪽 피연산자를 평가합니다.

	//시퀀스 포인트는 프로그램의 실행 순서를 정의하고,
	//변수의 값을 안전하게 읽고 쓸 수 있는 지점을 제공합니다.

int x = 10; 
int y = 20; //세미클론으로 인해 시퀀스 포인트가 발생합니다.

if (x<y)
{
	cout << "pass" << endl<<endl;
} //함수호출, 조건문, 반복문 등에서 시퀀스 포인트가 발생합니다.

int a = 5;
a = a + 3 - 2 + 7;
cout << "a의 값: " << a << endl<< endl; //시퀀스 포인트는 연산 순서를 정의합니다.

//정의되지 않은 동작은 시퀀스 포인트가 없는 상황에서 발생할 수 있습니다.
//정의되지 않은 동작의 예시로는 변수의 값을 동시에 읽고 쓰는 경우가 있습니다.

#pragma endregion



}

