#include <iostream>
#include <cstring> 

#define SIZE 5

using namespace std;

template <typename T>
bool Same(T left, T right)
{
	return left == right;
}

template <>
bool Same(const char* left, const char* right)
{
	return strlen(left) == strlen(right);
}



template<typename T>
class Container
{
private:
	int Index;
	T list[SIZE];

public:
	Container()
	{
		Index = 0;
		for (int i = 0; i < SIZE; i++)
		{
			list[i] = NULL;
		}
	}

	void Add(T data)
	{

		if (Index < SIZE)
		{
			list[Index++] = data;
		}
		else
		{
			cout << "Index Out of Range" << endl;
		}
	}

	const T& operator[](int count)
	{
		return list[count];
	}

};




int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 형식을 가질 수 있는
	// 기술에 중점을 두어 재사용성을 높일 수 있는 기능.


	//Same(5, 5);
	//
	//cout << "(5, 5)의 값 : "<< Same<int>(5, 5) << endl;
	//cout << "(5, 6)의 값 : " << Same<int>(5, 6) << endl;
	//cout << "('A', 'A')의 값 : " << Same<char>('A', 'A') << endl;
	//cout << "(5, 6)의 값 : " << Same<int>(5, 6) << endl;

#pragma endregion

#pragma region 템플릿 특수화
	//특정 자료형에 대해 다르게 처리하고 싶은 경우
	//특정한 자료형만 다른 형식으로 동작시키는 경우
	//template<(비워둔다)>
	//bool Same(const char* left, const char* right) 

	//cout << Same("ABC","DEF") << endl;
#pragma endregion

#pragma region MyRegion

		//Container<int> container;
		//container.Add(10);
		//container.Add(20);
		//container.Add(30);
		//container.Add(40);
		//container.Add(50);



#pragma endregion






}
