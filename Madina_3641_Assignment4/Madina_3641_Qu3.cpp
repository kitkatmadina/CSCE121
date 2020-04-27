//Question 3
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct set {
	int first, second;
};

set make_pair(int x, int y) {
	return { x,y };
}
int Fibonacci(int k) {
	if (k <= 1) {
		return (k, 0);
	}
	else {
		make_pair(int i, int j) = Fibonacci(k - 1);
		return (i + j, i);
	}
}
int main() {
	int k = 7;
	Fibonacci(k);
	return 0;
}