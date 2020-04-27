#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

double a, b, c, x1, x2;
vector<double> roots;
void quad()
{
	double a, b, c;
	cout << "Enter the three coefficients (a b c) of your quadratic equation: \n";
	while (cin >> a >> b >> c) {
		if (a == 0) {
			if (b == 0) {
				cout << "No roots. \n";
			}
			else {
				x1 = -(c / b);
				roots.push_back(x1);
			}
		}
		else if (b == 0) {
			double var = -c / a;
			if (var == 0)
				cout << "x = 0";
			else if (var < 0)
				cout << "No Solution.\n";
			else { // var > 0
				x1 = sqrt(var);
				x2 = -sqrt(var);
				roots.push_back(x1);
				roots.push_back(x2);
			}

		}
		else {
			x1 = (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
			x2 = (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
			roots.push_back(x1);
			roots.push_back(x2);
		}
	}
	if (a*pow(x1, 2) + b * x1 - c == 0 && a*pow(x2, 2) + b * x2 - c == 0) {
		for (int x : roots) {
			cout << "\nx = " << x << endl;
		}
	}
	else
		cerr << "Input or calculation error.";

}

int main() {
	quad();
	return 0;
}