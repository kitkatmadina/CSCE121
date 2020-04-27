//exercise 2
/*if we define the median of a sequence as a number so that exactly
as many elements come before it in the sequence as come after it," fix the program in 4.6.3
so that it always prints out a median. Hint: a median need not be an element of the sequence*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	cout << "Please enter a data set relating to temperatures:";
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);
	sort(temps.begin(),temps.end());
	cout << "Median temperature:" << (temp[0]+temps[temps.size()])/2 << '\n';
	return 0;
}