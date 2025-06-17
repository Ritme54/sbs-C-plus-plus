#include <iostream>
#include "../program/Vector2.h"

using namespace std;

class Num {
private:
    int value;

public:

    Num(int val = 0) : value(val) {
        std::cout << "Num(" << value << ") 객체 생성됨" << std::endl;
    }


    ~Num() {
        std::cout << "Num(" << value << ") 객체 소멸됨" << std::endl;
    }


    int getValue() const {
        return value;
    }

    // --- 단항 연산자 오버로딩 ---

    // 1. 전위 증가 연산자 (++) 오버로딩
    Num& operator++() {
        std::cout << "전위 증가 연산자 호출" << std::endl;
        ++value; // 값을 먼저 증가
        return *this; // 변경된 객체 자신을 참조로 반환
    }

    // 1. 후위 증가 연산자 (++) 오버로딩
    // (int dummy) 매개변수는 전위 증가와 구분하기 위해서 임시로 넣었습니다.
    Num operator++(int dummy) {
        std::cout << "후위 증가 연산자 호출" << std::endl;
        Num temp = *this; // 현재 상태의 객체를 임시로 복사
        ++value;              // 값을 나중에 증가
        return temp;          // 증가되기 전의 임시 객체 반환
    }

    // 2. 전위 감소 연산자 (--) 오버로딩
    // 객체 자체를 변경하고 변경된 객체의 참조를 반환합니다.
    Num& operator--() {
        std::cout << "전위 감소 연산자 호출" << std::endl;
        --value; // 값을 먼저 감소
        return *this; // 변경된 객체 자신을 참조로 반환
    }

    // 2. 후위 감소 연산자 (--) 오버로딩
    // (int dummy) 매개변수는 전위 감소와 구분하기 위해서 임시로 넣었습니다.
    // 값을 사용하기 전의 객체 복사본을 반환하고 나중에 객체 값을 변경합니다.
    Num operator--(int dummy) {
        std::cout << "후위 감소 연산자 호출" << std::endl;
        Num temp = *this; // 현재 상태의 객체를 임시로 복사
        --value;              // 값을 나중에 감소
        return temp;          // 감소되기 전의 임시 객체 반환
    }

    // 3. 단항 더하기 연산자 (+) 오버로딩
    // 객체의 부호를 그대로 유지한 새로운 객체를 반환합니다. (보통 값 변경 없음)
    Num operator+() const { // const: 객체 상태를 변경하지 않음
        std::cout << "단항 더하기 연산자 호출" << std::endl;
        return Num(value); // 현재 값과 동일한 새로운 객체 반환
    }

    // 4. 단항 부정 연산자 (-) 오버로딩
    // 객체의 부호를 반전시킨 새로운 객체를 반환합니다.
    Num operator-() const { // const: 객체 상태를 변경하지 않음
        std::cout << "단항 부정 연산자 호출" << std::endl;
        return Num(-value); // 부호가 반전된 새로운 객체 반환
    }

    // 5. 논리 NOT 연산자 (!) 오버로딩
    // 객체의 논리 값을 반전시킨 bool 값을 반환합니다. (0이면 true, 아니면 false)
    bool operator!() const { // const: 객체 상태를 변경하지 않음
        std::cout << "논리 NOT 연산자 호출" << std::endl;
        return (value == 0); // value가 0이면 true, 아니면 false 반환
    }

    // 6. 비트 NOT 연산자 (~) 오버로딩
    // 객체의 값에 대해 비트 NOT 연산을 수행한 새로운 객체를 반환합니다.
    Num operator~() const { // const: 객체 상태를 변경하지 않음
        std::cout << "비트 NOT 연산자 호출" << std::endl;
        return Num(~value); // 비트 NOT 연산 결과로 새로운 객체 반환
    }

    // friend 함수로 << 연산자 오버로딩 (출력을 편리하게 하기 위해)
    friend std::ostream& operator<<(std::ostream& os, const Num& num);
};


std::ostream& operator<<(std::ostream& os, const Num& num) {
    os << num.value; // private 멤버에 접근 가능
    return os;
}


class MyValue {
private:
    int data;

public:
    // 생성자
    MyValue(int val = 0) : data(val) {
        std::cout << "MyValue(" << data << ") 객체 생성됨" << std::endl;
    }

    // 소멸자 (객체 소멸 시 확인용)
    ~MyValue() {
        std::cout << "MyValue(" << data << ") 객체 소멸됨" << std::endl;
    }

    // 값에 접근하기 위한 getter 함수
    int getData() const {
        return data;
    }

    // --- 이항 연산자 오버로딩 (멤버 함수) ---

    // 덧셈 연산자 (+) 오버로딩
    // 두 MyValue 객체를 더한 결과를 새로운 MyValue 객체로 반환합니다.
    // 원본 객체는 변경되지 않으므로 const를 붙입니다.
    MyValue operator+(const MyValue& other) const {
        std::cout << "덧셈 연산자 (+) 호출" << std::endl;
        return MyValue(this->data + other.data); // 새로운 객체 생성 및 반환
    }

    // 뺄셈 연산자 (-) 오버로딩
    // 두 MyValue 객체를 뺀 결과를 새로운 MyValue 객체로 반환합니다.
    MyValue operator-(const MyValue& other) const {
        std::cout << "뺄셈 연산자 (-) 호출" << std::endl;
        return MyValue(this->data - other.data); // 새로운 객체 생성 및 반환
    }

    // 곱셈 연산자 (*) 오버로딩
    // 두 MyValue 객체를 곱한 결과를 새로운 MyValue 객체로 반환합니다.
    MyValue operator*(const MyValue& other) const {
        std::cout << "곱셈 연산자 (*) 호출" << std::endl;
        return MyValue(this->data * other.data); // 새로운 객체 생성 및 반환
    }

    // 나눗셈 연산자 (/) 오버로딩
     // 0으로 나누는 경우 예외 처리가 필요할 수 있습니다.
    MyValue operator/(const MyValue& other) const {
        std::cout << "나눗셈 연산자 (/) 호출" << std::endl;
        if (other.data == 0) {
            std::cerr << "오류: 0으로 나눌 수 없습니다!" << std::endl;
            // 실제 코드에서는 예외를 던지거나 오류를 처리해야 합니다.
            return MyValue(0); // 예시를 위해 0 반환
        }
        return MyValue(this->data / other.data); // 새로운 객체 생성 및 반환
    }

};


int main()
{

#pragma region 추상 클래스
    //함수에 특정한 내용이 구현되어 있지 않고, 선언만 되어 있는 클래스입니다.
    // 
    // 
    //추상 클래스는 정의되어 있지 않은 함수가 있으므로 객체를 생성할 수 없습니다.

#pragma endregion


#pragma region 연산자 오버로딩
    //
    //Vector2 point1D(3, 4);
    //Vector2 point2D(1, 2);
    //
    //Vector2 direction = point1D + point2D;
    //
    //
    //direction.Position();



#pragma endregion
    //캐릭터에 무기를 쥐어줄때 무기를 추상 클래스로 만드는 것이 좋다.


#pragma region 단항 연산자 이항 연산자(숙제)
    //단항 연산자는 이름 그대로 하나의 피연산자에 작동하여 결과를 생성하는 연산자.

    //증가 연산자(++) 피연산자의 값을 1 증가시킨다.
    //감소 연산자(--) 피연산자의 값을 1 감소시킨다.
    //단항 더하기 연산자(+) 피연산자의 부호를 그대로 유지한다.
    //단항 부정 연산자(-) 피연산자의 부호를 반전시킨다.
    //논리 NOT연산자(!) 피연산자의 논리 값을 반전시킨다.
    //비트 NOT연산자(-) 피연산자의 모든 비트를 반전시킨다.
    //주소 연산자(&) 변수의 메모리 주소를 반환한다.
    //간접 참조 연산자(*) 포인터 변수가 가리키는 메모리 주소에 저장된 값에 접근한다.(역참조)



#pragma endregion


    return 0;
}

