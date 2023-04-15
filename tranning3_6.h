#ifndef EVENRANDOM
#define EVENRANDOM

#include <cstdlib>
#include <ctime>
#include <iostream>

class EvenRandom {
	int start;
	int end;
public:
	EvenRandom();
	int next();
	int nextInRange(int start, int end);
};

EvenRandom::EvenRandom() {
	srand((unsigned int)time(NULL));
	start = 0;
	end = RAND_MAX;
}

int EvenRandom::next() {
	while (true) {
		int even = rand() % (RAND_MAX + 1);
		if (even % 2 == 0) {
			return even;
		}
	}
}

EvenRandom::~EvenRandom()
{
}


#endif