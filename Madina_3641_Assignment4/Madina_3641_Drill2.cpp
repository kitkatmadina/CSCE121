//Drill 2
#include <iostream>
using namespace std;

void swap_v(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_cr(const int% , const int& ) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	int x = 7;
	int y = 9;
	cout << "implementing swap_v of x = 7 and y = 9\n";
	swap_v(x, y);
	cout << "implementing swap_r(7,9) \n";
	swap_r(7, 9);
	cout << "Won't run because your inputs are integer values rather than variable integers.";
	cout << "implementing swap_cr of cx = 7 and cy = 9\n";
	const int cx = 7;
	const int cy = 9;
	swap_cr(cx, cy);
	cout << "Won't run because you can't have a 'pass-by-reference' as a constant.\n";
	cout << "implementing swap_v(7.7,9.9)\n";
	swap_v(7.7, 9.9);
	cout << "Won't run because '7.7 and 9.9' are of type double.\n";
	cout << "implementing swap_v(double dx 7.7, double dx 9.9)\n";
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy);
	cout << "Won't run because dy and dx are of type double when the function call is for integers.\n";
	cout << "implementing swap_r(7.7,9.9)\n";
	swap_r(7.7, 9.9);
	cout << "Won't run because you are passing by reference doubles rather than integers, and you can't pass by reference values. They have to be variables.\n";

	return 0;

}