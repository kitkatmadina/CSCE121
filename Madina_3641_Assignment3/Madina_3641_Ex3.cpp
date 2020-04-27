//exercise 3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<double> dist;

	double sum = 0;	// accumulate total distance in sum
	double max = 0; // latgest distance

	cout << "please enter a whitespace-separated sequence of distances. Type 'exit' when you're done. : ";
	double val = 0;
	double min = 0;
	while (cin >> val) {	// read distance
		if (val <= 0) {
			if (dist.size() == 0);
			cout << "total distance " << sum << '\n';
			cout << "smallest distance " << min << '\n';
			cout << "greatest distance " << max << '\n';
			cout << "mean distance " << sum / dist.size() << '\n';
			return 0;
		}
		dist.push_back(val);	// store the value

								// update the "running" values:
		sum += val;
		min = *min_element(dist.begin(), dist.end());
		if (max<val)
			max = val;
	}
	if (dist.size() == 0);
	cout << "total distance " << sum << '\n';
	cout << "smallest distance " << min << '\n';
	cout << "greatest distance " << max << '\n';
	cout << "mean distance " << sum / dist.size() << '\n';
	return 0;
}