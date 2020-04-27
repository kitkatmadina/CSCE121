#include <iostream>
#include <string>
using namespace std;
// Define a class B1...
class B2 {
public:
	virtual void pvf() = 0;
};
class D21: public B2 {
public:
	string s = "member string\n";
	void pvf() override { cout << s;  }
};
class D22: public B2 {
public:
	int i=7;
	void pvf() override { cout << i; }
};
void f(B2& b2) {
	b2.pvf();
}
int main() {
	D21 d21;
	D22 d22;
	cout << "d21.pvf(); d22.pvf(); :\n";
	d21.pvf();
	d22.pvf();

	return 0;
}