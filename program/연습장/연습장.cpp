#include <iostream> // 입출력 (std::cout, std::endl)
#include <vector>   // std::vector 사용
#include <string>   // std::to_string 사용

// --- 1. 제곱 탐사 (Quadratic Probing) 클래스 ---
const int TABLE_SIZE_QUAD = 11; // 해시 테이블 크기 (소수)

class QuadraticProbingHash {
private:
    std::vector<int> table; // -1: 비어있음
public:
    QuadraticProbingHash() : table(TABLE_SIZE_QUAD, -1) {}

    int hash1(int key) { return key % TABLE_SIZE_QUAD; }

    void insert(int key) {
        int initial_idx = hash1(key);
        int current_idx = initial_idx;
        int i = 0; // 탐사 횟수

        std::cout << "\n--- 제곱 탐사: 키 " << key << " 삽입 시도 (초기: " << initial_idx << ")" << std::endl;

        while (table[current_idx] != -1) {
            std::cout << "  [충돌] 인덱스 " << current_idx << "에 " << table[current_idx] << " 있음. 탐사 횟수: " << i << std::endl;
            i++;
            current_idx = (initial_idx + i * i) % TABLE_SIZE_QUAD;
            std::cout << "  [탐사] 다음 인덱스: " << current_idx << std::endl;

            if (i >= TABLE_SIZE_QUAD) { // 모든 버킷을 탐사했거나 너무 많이 탐사했을 경우
                std::cout << "  [실패] 삽입할 공간을 찾을 수 없습니다." << std::endl;
                return;
            }
        }
        table[current_idx] = key;
        std::cout << "  [성공] 키 " << key << "를 인덱스 " << current_idx << "에 삽입." << std::endl;
    }

    void display() {
        std::cout << "\n--- 제곱 탐사 테이블 내용 ---" << std::endl;
        for (int i = 0; i < TABLE_SIZE_QUAD; ++i) {
            std::cout << "버킷[" << i << "]: " << (table[i] == -1 ? "_" : std::to_string(table[i])) << std::endl;
        }
        std::cout << "--------------------------" << std::endl;
    }
};

// --- 2. 이중 해싱 (Double Hashing) 클래스 ---
const int TABLE_SIZE_DOUBLE = 11; // 해시 테이블 크기 (소수)
const int PRIME_FOR_HASH2 = 7;    // 두 번째 해시 함수에 사용될 소수

class DoubleHashingHash {
private:
    std::vector<int> table; // -1: 비어있음
public:
    DoubleHashingHash() : table(TABLE_SIZE_DOUBLE, -1) {}

    int hash1(int key) { return key % TABLE_SIZE_DOUBLE; }
    int hash2(int key) { return PRIME_FOR_HASH2 - (key % PRIME_FOR_HASH2); }

    void insert(int key) {
        int initial_idx = hash1(key);
        int step = hash2(key);
        int current_idx = initial_idx;
        int i = 0;

        std::cout << "\n--- 이중 해싱: 키 " << key << " 삽입 시도 (초기: " << initial_idx << ", 간격: " << step << ")" << std::endl;

        while (table[current_idx] != -1) {
            std::cout << "  [충돌] 인덱스 " << current_idx << "에 " << table[current_idx] << " 있음. 탐사 횟수: " << i << std::endl;
            i++;
            current_idx = (initial_idx + i * step) % TABLE_SIZE_DOUBLE;
            std::cout << "  [탐사] 다음 인덱스: " << current_idx << std::endl;

            if (i >= TABLE_SIZE_DOUBLE) {
                std::cout << "  [실패] 삽입할 공간을 찾을 수 없습니다." << std::endl;
                return;
            }
        }
        table[current_idx] = key;
        std::cout << "  [성공] 키 " << key << "를 인덱스 " << current_idx << "에 삽입." << std::endl;
    }

    void display() {
        std::cout << "\n--- 이중 해싱 테이블 내용 ---" << std::endl;
        for (int i = 0; i < TABLE_SIZE_DOUBLE; ++i) {
            std::cout << "버킷[" << i << "]: " << (table[i] == -1 ? "_" : std::to_string(table[i])) << std::endl;
        }
        std::cout << "--------------------------" << std::endl;
    }
};

// --- main 함수: 두 클래스 사용 예시 ---
int main() {
    // 제곱 탐사 예시
    std::cout << "========== 제곱 탐사 테스트 ==========" << std::endl;
    QuadraticProbingHash qp_hash;
    qp_hash.insert(23); // 23 % 11 = 1
    qp_hash.insert(34); // 34 % 11 = 1 (충돌) -> (1 + 1*1) % 11 = 2
    qp_hash.insert(12); // 12 % 11 = 1 (충돌) -> (1 + 1*1) % 11 = 2 (충돌) -> (1 + 2*2) % 11 = 5
    qp_hash.insert(45); // 45 % 11 = 1 (충돌) -> (1 + 1*1) % 11 = 2 (충돌) -> (1 + 2*2) % 11 = 5 (충돌) -> (1 + 3*3) % 11 = 10
    qp_hash.insert(67); // 67 % 11 = 1 (충돌) -> (1 + 1*1) % 11 = 2 (충돌) -> (1 + 2*2) % 11 = 5 (충돌) -> (1 + 3*3) % 11 = 10 (충돌) -> (1 + 4*4) % 11 = 6
    qp_hash.display();

    // 이중 해싱 예시
    std::cout << "\n========== 이중 해싱 테스트 ==========" << std::endl;
    DoubleHashingHash dh_hash;
    dh_hash.insert(23); // 23 % 11 = 1, step = 7 - (23 % 7) = 5
    dh_hash.insert(34); // 34 % 11 = 1, step = 7 - (34 % 7) = 1 (충돌) -> (1 + 1*1) % 11 = 2
    dh_hash.insert(12); // 12 % 11 = 1, step = 7 - (12 % 7) = 2 (충돌) -> (1 + 1*2) % 11 = 3
    dh_hash.insert(45); // 45 % 11 = 1, step = 7 - (45 % 7) = 4 (충돌) -> (1 + 1*4) % 11 = 5
    dh_hash.insert(67); // 67 % 11 = 1, step = 7 - (67 % 7) = 3 (충돌) -> (1 + 1*3) % 11 = 4
    dh_hash.display();

    return 0;
}