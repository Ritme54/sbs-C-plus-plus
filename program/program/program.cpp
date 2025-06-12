#include <iostream>

using namespace std;

class Metal
{
public:
	void melt() { cout << "Metal" << endl; }
};

class expensive
{
	public:
	void cost() { cout << "expensive" << endl; }
};
class Gold : public Metal, public expensive
{
	//다중 상속을 통해 Metal과 expensive 클래스를 동시에 상속받음
	//이 클래스는 Metal의 melt()와 expensive의 cost() 메서드를 모두 사용할 수 있다.

public:
	void gold() { cout << "Gold" << endl; }
	// Gold 클래스는 금의 특성을 나타내는 메서드 gold()를 추가로 정의
	// 이 메서드는 금의 고유한 기능을 나타낸다.
};

int main()
{

Gold gold; // Gold 클래스의 객체 생성
	gold.melt(); // Metal 클래스의 melt() 메서드 호출
	gold.cost(); // expensive 클래스의 cost() 메서드 호출
	gold.gold(); // Gold 클래스의 gold() 메서드 호출
	// 다중 상속을 통해 금속과 비싼 특성을 모두 가진
	// 금(Gold) 클래스를 사용하여 다양한 기능을 수행할 수 있다.



#pragma region 다중 상속이란
	//다중 상속은 이름 그대로 하나의 자식 클래스가 둘 이상의 부모 클래스로부터 상속받는 것을 의미한다.
	//일반적인 단일 상속(하나의 부모로부터 상속)과는 달리, 여러 부모의 특징과 기능을 한 번에 물려받을 수 있다.
	//다중 상속은 클래스 선언 시 부모 클래스 이름을 쉼표(, )로 구분하여 나열하는 방식으로 사용한다.
	//다중 상속은 코드를 재사용하고, 다양한 부모 클래스의 기능을 결합하여 복합적인 클래스를 만드는 데 유용하다.
	
	//예를 들어, 금(Gold) 클래스는 금속(metal)과 비싼(expensive) 클래스를 동시에 상속받아 금속의 특성과 비싼 특성을 모두 가질 수 있다.

	//하지만, 다중 상속은 다음과 같은 몇 가지 주의사항이 있다:
	//1. **다이아몬드 문제**: 동일한 부모 클래스를 여러 번 상속받을 경우, 어떤 부모 클래스의 메서드를 호출할지 모호해질 수 있다.
	//   이를 해결하기 위해 가상 상속(virtual inheritance)을 사용할 수 있다.
	//2. **복잡성 증가**: 다중 상속은 클래스 간의 관계가 복잡해질 수 있어, 코드의 가독성과 유지보수성을 저하시킬 수 있다.
	//   따라서, 다중 상속을 사용할 때는 클래스 간의 관계를 명확히 하고, 필요한 경우 문서화하는 것이 중요하다.


#pragma endregion

	return 0; // 프로그램 종료
}