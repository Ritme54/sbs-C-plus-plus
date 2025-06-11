#include <iostream>

class Miner
{
public:
	Miner(int maxHp, int speed, int Power, int& exp) : maxHp(maxHp), speed(speed), power(Power), exp(exp) {}

	void Minerstatus()
	{
		std::cout << "Max HP: " << maxHp << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Power: " << power << std::endl;
		std::cout << "Experience: " << exp << std::endl;
	}

private:	
	const int maxHp;
	int speed;
	int power;
	int& exp; 
};

int main() {
#pragma region 맴버 이니셜라이즈
	//객체 맴버 변수에 초기값을 설정하는 방법
	//객체가 생성될 때 초기화하지 않으면 예측할 수 없는 값(쓰레기 값)이 들어갈 수 있다.
	//const 변수나 참조 변수는 반드시 초기화해야 한다.

	int exp = 100;
	Miner Jack(100, 10, 20, exp); // 객체 생성 시 초기화
	Jack.Minerstatus(); // 객체의 상태 출력

#pragma endregion

	return 0;
}