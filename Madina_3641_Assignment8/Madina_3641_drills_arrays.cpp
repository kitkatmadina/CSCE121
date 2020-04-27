#include <iostream>
using namespace std;
// Define a class B1...
class B1 {
public:
	virtual void vf() { cout << "B1::vf() \n"; }
	void f() { cout << "B1::f() \n"; }
}; 
// Derive a class D1...
class D1 :public B1 {
public:
	virtual void vf() { cout << "D1::vf() \n"; }
};

int main() {
	//make a B1 object and call each function
	B1 b1;
	cout << "b1.vf(); b1.f(); : \n";
	b1.vf();
	b1.f();
	//make a D1 object and call...
	D1 d1;
	cout << "d1.vf(); d1.f(); : \n";
	d1.vf();
	d1.f();
	// define a reference B1...
	B1& b2 = d1;
	cout << "b2.vf(); b2.f(); : \n";
	b2.vf();
	b2.f();
	

	return 0;
}