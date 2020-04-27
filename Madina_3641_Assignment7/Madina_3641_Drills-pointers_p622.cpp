#include <iostream>
#include <sstream>
#include <vector>
using namespace std; 

void print_array(ostream& os, int* a, int n) {
	for (int *i = a; i < a + n; i++) {
		os << *i << " ";

	}
	cout << endl;
}//"using print_array() from last drill

int main() {
	ostream& os = cout;
	int a = 7; 
	int* p1 = &a; //Allocate an int, initialize it to 7 and assign it to variable p1;
	cout << "p1:" << p1; // print the value of p1
	cout << "\n";
	print_array(os, p1, 1);// and the int it points to
	int* p2 = new int[7]{ 1,2,4,8,16,32,64 }; // allocate an array of seven ints
	cout << "p2: " << p2 <<endl; //print out the value of p2
	print_array(os, p2, 7); // and the array it points to
	int* p3 = p2; // declare an int* called p3 and initialize it with p2
	p1 = p2; // assign p1 to p2
	p3 = p2; // assign p3 to p2
	cout << "p1: " << p1 <<endl; // print value of p1
	print_array(os, p1, 7); //and what it points to
	cout << "p2: " << p2 <<endl;//print value of p2
	print_array(os, p2, 7); // and what it points to
	delete[] p2;//deallocate all the memory you allocated from free store
	p1 = new int[10]{ 1,2,4,8,16,32,64,128,256,512 };
	p2 = new int[10];
	for (int i = 0; i < 10; i++) {
		p2[i] = p1[i];
	}
	cout << "Printing p2: ";
	print_array(os, p2, 10);
	//Repeat 10-12 using vector rather than an array
	//int arr[10] = { 1,2,4,8,16,32,64,128,256,512 };
	vector<int> vect1{ 1,2,4,8,16,32,64,128,256,512 };
	/*for (int i = 0; i < 10; i++) {
		//vect1.push_back(arr[i]);
	}*/
	vector<int> vect2;
	for (int i = 0; i < vect1.size(); ++i) {
		vect2.push_back(vect1[i]);
	}
	cout << "Printing vect2: ";
	for(int i = 0; i < vect2.size(); ++i) {
		cout << vect2[i] << " ";
	}
	return 0;
}