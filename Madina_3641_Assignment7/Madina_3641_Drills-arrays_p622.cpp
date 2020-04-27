#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void print_array10(ostream& os, int* a) {
	for (int *i = a; i < a + 10;i++) {
		os << *i << " ";
		
	}
	cout << endl;
}//Write a function print_array10...
void print_array(ostream& os, int* a, int n) {
	for (int *i = a; i < a + n; i++) {
		os << *i << " ";
		
	}
	cout << endl;
}//write a function print_array...
void print_vector(ostream& os, vector<int> a) {
	for (int i = 0; i < a.size(); i++) {
		os << a[i] << " ";
	}
	cout << endl;
}
int main() {
	ostream& os = cout;
	int* a1 = new int[10]; //Allocate an array of ten ints on the free store using new.
	for(int i = 0; i<=10;i++){
		cout << *a1 << " ";
	}
	cout << endl;//Print the values of the ten ints to cout
	delete[] a1; //Deallocate the array (using delete[]).
	int* a2 = new int[10]{ 100,101,102,103,104,105,106,107,108,109 };//allocate an array f 10 int..
	print_array10(os, a2);//and print out its values
	delete[] a2; //delete the arrays
	int* a3 = new int[11]{ 100,101,102,103,104,105,106,107,108,109,110 };//allocate an array of 11 int...
	print_array(os, a3,11);//and print out its values.
	delete[] a3;
	int* a4 = new int[20]{ 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119};
	//allocate and array of 20...
	print_array(os, a4, 20);
	delete[] a4;
	//Repeating steps 5,6,8 using a vector
	int arr[10] = { 100,101,102,103,104,105,106,107,108,109 };
	vector<int> vect1;
	for (int i = 0; i < 10; i++) {
		vect1.push_back(arr[i]);
	}
	print_vector(os, vect1);
	int arr2[11] = { 100,101,102,103,104,105,106,107,108,109,110 };
	vector<int> vect2;
	for (int i = 0; i < 11; i++) {
		vect2.push_back(arr2[i]);
	}
	print_vector(os, vect2);
	int arr3[20] = { 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };
	vector<int> vect3;
	for (int i = 0; i < 20; i++) {
		vect3.push_back(arr3[i]);
	}	
	print_vector(os, vect3);
	return 0;


}