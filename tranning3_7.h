#ifndef SELECTABLERANDOM
#define SELECTABLERANDOM

#include <cstdlib>
#include <ctime>
#include <iostream>

class SelectableRandom {
	int start;
	int end;
public:
	SelectableRandom();
	int next(int even_or_odd);
	int nextInRange(int start, int end, int even_or_odd);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned int)time(NULL));
	start = 0;
	end = RAND_MAX;
}

int SelectableRandom::next(int even_or_odd) {
	int result;
	while (true) {
		result = rand() % (RAND_MAX + 1);
		if (result % 2 == even_or_odd) {
			return result;
		}
	}
}

int SelectableRandom::nextInRange(int start, int end, int even_or_odd) {
	int result;
	while (true) {
		result = rand() % (end - start + 1) + start;
		if (result % 2 == even_or_odd) {
			return result;
		}
	}
}