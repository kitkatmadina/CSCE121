//Kirsten Madina 
/* UIN 626003641
Assignment 2 Exercises 4 and 5*/
#include <iostream>
using namespace std;
int main() {
	double val1, val2;
	double sum;
	double difference;
	double product;
	double ratio;
	cout << "Please enter two integer variables. \n";
	cin >> val1;
	cin >> val2;
	if (val1 < val2) {
		cout << "Larger Value: " << val2 << ".\n Smaller Value: " << val1 << ".\n";
	}
	else if (val1 > val2) {
		cout << "Larger Value: " << val1 << ".\n Smaller Value: " << val2 << ".\n";
	}
	sum = val1 + val2;
	difference = val1 - val2;
	product = val1 * val2;
	ratio = val1 / val2;
	cout << "Sum: " << sum << "\nDifference: " << difference << "\nProduct: " << product << "\nRatio: " << ratio;
	/*The difference between the results as integers and the results as doubles is that the double inputs and outputs can have decimals,
	and the output integers in type double will display a decimal number (Ex: 5.0) */
	return 0;
}