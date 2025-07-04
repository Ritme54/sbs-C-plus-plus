#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <iostream>
#include <unordered_set>

using namespace std;


int main()
{

#pragma region 연관 컨테이너

	//중복되는 데이터값을 허용하지 않는 컨테이너
	//정보 등을 출력할때
	//배열의 장점 : 인덱스로 접근이 가능하다.
	//배열의 단점 : 크기가 고정되어있다.

#pragma region unordered_set
	//
	
	//std::unordered_set<const char*> set1;
	//
	//set1.max_load_factor(2.0f);
	//
	//set1.insert("red_potion");
	//set1.insert("blue_potion");
	//set1.insert("yellow_potion");
	//set1.insert("green_potion");
	//set1.insert("Elexer");
	//set1.insert("Aaa");
	//set1.insert("Bbb");
	//set1.insert("Ccc");
	//set1.insert("Ddd");
	//set1.insert("Eee");

	//for(자료형: 변수명)
	//for (const char* item : set1)
	//{
	//	cout << item << endl;
	//}
	
	//
	//cout << "Bucket Count : " << set1.bucket_count() << endl;//
	//
	//cout << "Load Factor : " << set1.load_factor() << endl;

	//find(key) !=end()
	// find(시간복잡도= 상수) ->바로 다이렉트로 버켓을 찾는다. 만약 값이 없으면 end()를 반환한다.
	// if 문과 함께 사용한다.
	// if등의 함수 (변수명.find(key) != 변수명.end())



	//if (set1.find("Aaa") != set1.end())
	//{
	//	cout << "OK" << endl;
	//}
	//else
	//{
	//	cout << "NO" << endl;
	//
	//}
	//
	//set1.erase("Eee");
	//
	//for (const char* item : set1)
	//{
	//	cout << item << endl;
	//}

#pragma endregion

#pragma region set
	//이진트리
	// 노드(Node): 트리를 구성하는 각각의 요소. 데이터를 저장합니다.
	//	루트 노드(Root Node) : 트리에서 가장 위에 있는 노드.부모가 없는 유일한 노드입니다.
		//부모 노드(Parent Node) : 특정 노드의 위에 직접 연결된 노드.
		//자식 노드(Child Node) : 특정 노드의 아래에 직접 연결된 노드.
		//형제 노드(Sibling Node) : 같은 부모를 가지는 노드들.
		//리프 노드(Leaf Node) : 자식 노드가 없는 노드.트리의 가장 끝에 있는 노드입니다. 즉 nullptr을 자식으로 가집니다.
		//간선(Edge) : 노드와 노드를 연결하는 선.
		//서브 트리(Subtree) : 어떤 노드를 루트로 하여 그 아래에 연결된 모든 노드와 간선들의 집합.
	//탐색속도가 LOG(n)
	//순회
	//전위 순회 노드-왼쪽-오른쪽 왼쪽이 있으면 왼쪽노드- 그 아래 왼쪽 오른쪽...
	//중위 순회	왼쪽-오른쪽-노드 순서
	//후위 순회

	//트리의 균형 -1<= facotr <= 1
	//왼쪽 서브트리높이-오른쪽 서브트리 높이
	




#pragma endregion


#pragma region 해시 함수
	//해시 값을 버킷의 카운트값으로 나눈 나머지(해시값 % 버킷의 카운트값)를 사용하여 버킷의 인덱스를 결정하는 것은 해시 테이블의 기본적인 작동 방식입니다. 이것은 해시 충돌을 해결하는 방법이라기보다는, 해시 값을 실제 버킷 인덱스로 변환하는 방법입니다.

	//	//해시 값% 버킷의 카운트값의 의미
		//해시 값(Hash Value) : 해시 함수가 키(예 : 문자열, 숫자)를 입력받아 반환하는 임의의 정수 값입니다.이 해시 값은 매우 크거나 음수일 수도 있습니다.
	//	버킷의 카운트값(Bucket Count) : 해시 테이블이 가지고 있는 버킷(슬롯)의 총 개수입니다.예를 들어, 버킷이 100개라면 카운트값은 100입니다.
		//나머지 연산(%) : 해시 값을 버킷의 카운트값으로 나눈 나머지를 취하면, 결과는 항상 0부터 버킷의 카운트값 - 1 사이의 정수가 됩니다.이 범위는 배열의 유효한 인덱스 범위와 일치합니다.
	//	이 방법이 해시 충돌을 '해결'하는 것은 아닙니다.
	//	해시값 % 버킷의 카운트값은 단지 어떤 키가 어느 버킷에 저장되어야 하는지를 결정하는 과정일 뿐입니다.이 과정 자체는 해시 충돌을 해결하지 않습니다.오히려 해시 충돌이 발생할 수 있는 지점을 결정합니다.

	//	만약 다른 키의 해시 값이 12355였다면, 12355 % 10 = 5 이므로, 이 키 역시 인덱스 5에 저장되려고 할 것입니다.
	//	이때 인덱스 5 버킷이 이미 차 있다면, 이것이 바로 해시 충돌입니다.
	//	해시 충돌 해결은 그 이후의 문제입니다.
	//	해시값 % 버킷의 카운트값을 통해 인덱스를 얻은 후, 해당 인덱스에 데이터가 이미 있는지 확인합니다.
	//
	//	비어있다면: 데이터를 그 버킷에 바로 저장합니다.
	//	차 있다면(해시 충돌 발생) : 이때부터 위에서 설명드린 해시 충돌 해결 전략 중 하나를 사용해야 합니다.
	//	분리 연결법(Separate Chaining) : 해당 버킷에 연결된 링크드 리스트에 새 데이터를 추가합니다.
	//	개방 주소법(Open Addressing) : 다른 비어있는 버킷을 찾아서 데이터를 저장합니다(선형 탐사, 제곱 탐사, 이중 해싱 //등).
	//	결론적으로, 해시값 % 버킷의 카운트값은 해시 테이블에서 데이터를 저장할 '최초의 버킷 위치를 찾는' 과정이며, 이 과정에서 해시 충돌이 발생하면 그 이후에 별도의 충돌 해결 알고리즘을 적용해야 합니다.
	
#pragma region 해시 충돌 해결 분리 연결법 (Separate Chaining)
	

#pragma endregion


#pragma region 부하율 (로드 펙터)(Load facter)
	//부하율(Load Factor)은 해시 테이블의 성능을 평가하는 중요한 지표입니다.
	// 부하율은 해시 테이블에 저장된 요소의 수를 버킷(슬롯)의 총 수로 나눈 값으로 정의됩니다. 
	// 즉, 부하율은 다음과 같이 계산됩니다:
	// 부하율 = (저장된 요소의 수(keys)) / (버킷의 총 수(bucket Count))
	// 부하율이 높을수록 해시 테이블의 성능이 저하될 수 있습니다.
	// 부하율이 낮을수록 해시 테이블의 성능이 향상됩니다. 하지만 메모리가 낭비될 수 있습니다.
	// 0.7~0.8정도가 이상적인 부하율이라고 평하지만, 해시 함수의 품질이 나쁘면 데이터가 특정 버킷에 편향되어 분포될 수 있습니다 (나쁜 해시 함수는 해시 충돌을 많이 일으킴). 
	//이 경우, 전체 부하율이 0.7~0.8로 낮더라도 특정 버킷들은 과도하게 많은 항목을 가지게 되어 성능 저하가 발생할 수 있습니다.즉, 평균 부하율만으로는 해시 테이블의 실제 성능을 완전히 예측하기 어렵습니다.

#pragma endregion

#pragma region 리 해싱
	//리 해싱은 해시 태이블의 성능을 향상시키기 위해서 하는 작업입니다.
	//리 해싱은 해시 태이블의 크기를 늘려서 부하율을 낮추는 작업입니다.

#pragma endregion




#pragma region 해시 충돌 해결법에서 제곱 탐사와 이중 해시 조사하고 (숙제)

#pragma endregion

#pragma endregion



#pragma endregion

}

