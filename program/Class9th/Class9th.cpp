#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main()
{
#pragma region 선형 컨테이너(STL)

#pragma region vector container

	//vector<int> vector;
	//push_front 불가능
	// 중간에 데이터 삽입시 N^2의 시간복잡도 발생, 
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
	//현재 백터의 총 크기(통의 크기)
	//capacity : 메모리의 현재 크기
	//인덱스에 바로 접근가능
	//


#pragma endregion

#pragma region list container(리스트 컨테이너)

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

#pragma region (double ended Queue) deque 컨테이너
// 양쪽 끝에서 삽입과 삭제가 가능한 컨테이너
// 참조가 2번 들어간다.
//청크단위로 구별되어있어서 데이터를 중간 삽입/삭제가 벡터보다는 좋다.

deque<int> box;
box.push_back(10);
box.push_front(20);
box.push_back(30);
box.push_front(40);
box.push_back(50);
//10
//20 10
//20 10 30
//40 20 10 30
//40 20 10 30 50

cout << box.size() << endl;

for (int i = 0; i < box.size(); i++)
{
	cout << box[i] << " ";
}
cout << endl;

box.pop_back();// 40 20 10 30
box.pop_front(); // 20 10 30

cout << box.size() << endl;

for (int i = 0; i < box.size(); i++)
{
	cout << box[i] << " ";
}
cout << endl;

cout << box.front() << endl;


#pragma endregion

#pragma region priority_queue(우선순위 큐) 컨테이너
//우선순위 큐는 기본적으로 최대 힙 구조로 되어있다.
// 메모리 힙과는 다른 개념이다.
// 가장 큰 값이 먼저 나오는 구조이다.
// log(n) 시간복잡도를 가진다.
//배열 구조
//나무 구조로 되어있다.
//최상위 노드가 있고 그 노드는 2개의 하위 노드가 있다.
//또한 각각의 노드는 2개의 하위 노드를 가질 수 있다.
//힙 정렬
//만약 가장 큰 값이 제거되면 가장 오른쪽 아래 노드가 최상위 노드로 올라오고 힙 구조를 유지하기 위해 힙 정렬을 한다.

#pragma region 우선순위 컨테이너 하나 만들어보기

#pragma endregion




#pragma endregion


}



