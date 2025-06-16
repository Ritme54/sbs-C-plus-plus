#include <iostream>
#include "Vector2.h"

using namespace std;


int main()
{

#pragma region 추상 클래스
	//함수에 특정한 내용이 구현되어 있지 않고, 선언만 되어 있는 클래스입니다.
	// 
	// 
	//추상 클래스는 정의되어 있지 않은 함수가 있으므로 객체를 생성할 수 없습니다.

#pragma endregion

#pragma region 단항 연산자 이항 연산자(숙제)
	//단항 연산자는 찾아서 만들어보기
	//

#pragma endregion

#pragma region 연산자 오버로딩

	Vector2 point1D(3, 4);
	Vector2 point2D(1, 2);

	Vector2 direction = point1D + point2D;


	direction.Position();

	
	
#pragma endregion
	//캐릭터에 무기를 쥐어줄때 무기를 추상 클래스로 만드는 것이 좋다.


	return 0;
}

