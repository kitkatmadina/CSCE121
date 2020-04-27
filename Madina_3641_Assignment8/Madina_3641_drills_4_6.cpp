#include <iostream>
using namespace std;
// Define a class B1...
class B1 {
public:
	virtual void vf() { cout << "B1::vf() \n"; }
	void f() { cout << "B1::f() \n"; }
	virtual void pvf() = 0;
};
// Derive a class D1...
class D1 :public B1 {
public:
	virtual void vf() { cout << "D1::vf() \n"; }
	void f() { cout << "D1::f() \n"; }
};
class D2 : public D1 {
public:
	void pvf() override { cout << "D2:: pvf \n"; }
};
int main() {
	cout << "Creating a virtual function and trying to run the program as is creates errors.\n";
	cout << "This is because the function class is abstract but we have defined an object of it.\n";
	D2 d2;
	d2.f();
	d2.vf();
	d2.pvf();

	return 0;
}