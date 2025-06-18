#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

using namespace std;


int main()
{
#pragma region 선형 컨테이너(STL)
	
#pragma region vector container
	
	//vector<int> vector;
	//
	//vector.reserve(10); //백터의 통 크기를 미리 정하고 시작한다.
	////메모리 파편화 등을 방지할 수 있다.
	//
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);
	//vector.push_back(40);
	//vector.push_back(50);
	//
	//vector.pop_back();
	//vector.pop_back();
	//vector.pop_back();//데이터 값만 제거하는 식
	//
	//
	//
	//cout << vector.size() << endl;
	//
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << "  ";
	//}
	//
	////백터의 내용물 양의 크기
	//
	//cout << "vector capacity : " << vector.capacity() << "  ";
	////현재 백터의 총 크기(통의 크기)
	////capacity : 메모리의 현재 크기


#pragma endregion

#pragma region list container
	
	//list<int> list;
	//
	//list.push_back(20);
	//
	//for (int value : list) {
	//	std::cout << value << " ";
	//}
	//std::cout << std::endl;
	//
	//list.push_back(30);
	//
	//for (int value : list) {
	//	std::cout << value << " ";
	//}
	//std::cout << std::endl;
	//
	//list.push_front(10);
	//
	//for (int value : list) {
	//	std::cout << value << " ";
	//}
	//std::cout << std::endl;
	//
	//list.pop_front();
	//for (int value : list) {
	//	std::cout << value << " ";
	//}

#pragma endregion

#pragma region string
	//문자열 클래스

	//string content;
	//
	//cout << content.capacity() << endl;
	//
	//content = "League of Legend";
	//
	//cout << content << endl; //Heap에 메모리를 올림
	//cout << content.capacity() << endl;
	//
	//	content = "Battelfild";
	//
	//	cout << content << endl; // 
	//	cout << content.capacity() << endl;
	//	
	//	content.append("1");
	//
	//	cout << content << endl; // 
#pragma endregion

#pragma region 컨테이너 어댑터

	//컨테이너들에서 특정 기능만 사용할 수 있도록 추출한(?)기능

#pragma region stack 컨테이너

	//마지막에 넣은 데이터가 가장 처음 나가는 형태.
	// (프링글스또는 카드 뽑기)
	//stack<int>stack;
	//
	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//while (stack.empty() == false)
	//{
	//	cout << stack.top() << endl;
	//	stack.pop();
	//}
	//cout << stack.size() << endl;
	
#pragma endregion

#pragma region queue 컨테이너
	// 선입선출.

//queue<int>queue;
//
//queue.push(10);
//queue.push(20);
//queue.push(30);
//queue.push(40);
//queue.push(50);
//
//cout << queue.size() << endl;
//
//while (queue.empty() == false)
//{
//	cout << queue.front() << endl;
//	queue.pop();
//}

#pragma endregion


#pragma endregion


#pragma endregion





	return 0;
}


