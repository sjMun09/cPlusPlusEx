#ifndef RANDOM
#define RANDOM

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Random {
	int start;
	int end;
public:
	Random();
	int next();
	int nextInRange(int start, int end);
    ~Random();
};

// 생성자 구현부
Random::Random() {
// 시드 값으로 현재 시간을 사용
srand((unsigned int)time(NULL));
// 기본 범위 설정
start = 0;
end = RAND_MAX;
}

// 0부터 RAND_MAX 사이의 난수 반환하는 함수 구현부
int Random::next() {
return rand() % (RAND_MAX + 1);
}

// start부터 end까지의 범위에서 난수 반환하는 함수 구현부
int Random::nextInRange(int start, int end) {
return rand() % (end - start + 1) + start;
}

Random::~Random()
{
}


#endif