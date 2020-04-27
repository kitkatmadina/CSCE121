//Question 4
#include <iostream>
#include <vector>
using namespace std;

void vectprint(const string& title, const vector<int>& v)
{
	cout << title << "\n";
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << ' ';
	}
}
void vectreverse(vector<int>& v) {
	vector<int> vect; 
	for (int i = v.size() - 1; i >= 0; --i)
		vect.push_back(v[i]);
	v = vect;
}
void swapreverse(vector<int>& v) {
	for (int i = 0; i < v.size() / 2; ++i)
		swap(v[i], v[v.size() - 1 - i]);
}
int main() {
	vector<int> val;
	int a;
	cout << "Input integers corresponding to values in a vector: \n";
	while (cin >> a)
		val.push_back(a);
	vectprint("\nInput: ", val);
	vectreverse(val);
	vectprint("\nReversed via vector: ", val);
	swapreverse(val);
	vectprint("\nReverse via swap: ", val);
	return 0;
}