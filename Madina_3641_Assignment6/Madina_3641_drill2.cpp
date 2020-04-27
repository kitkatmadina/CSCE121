//Drill 2
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std; 

class Name_pair {
public: 
	vector<string> name;
	vector<int> age;
	void read_names();
	void read_ages();
	void print();
	void sortpair();
};
Name_pair n;
void Name_pair::read_names() {
	cout << "Please Enter Names: ";
	for (int i = 0; ;i++) {
		string inputName;
		cin >> inputName;
		if (inputName.length() == 1)
			break;
		name.push_back(inputName);
		
	}
}
void Name_pair::read_ages() {
	for (int i = 0; i < name.size(); i++) {
		int inputAge;
		cout << "How old is " << name[i] << endl;
		cin >> inputAge;
		age.push_back(inputAge);
	}
}

void Name_pair::sortpair() {
	int count = 0;
	for (int i = 0; i <= name.size()-1; i++) {
		for (int j = 1; j <= name.size()-1; j++) {
			if (name[j-1] > name[j]) {
				string temp = name[j];
				int a = age[j];
				name[j] = name[j-1];
				age[j] = age[j-1];
				name[j-1] = temp;
				age[j-1] = a;
				count++;
			}
		}
		if (count == 0)
			break;
		
	}
	
}

void Name_pair::print() {
	n.sortpair();
	for (int i = 0; i <= name.size()- 1 && i <= age.size() - 1; i++)
		cout << "(" << name[i] << "," << age[i] << ")"<<endl;
}

int main() {
	n.read_names();
	n.read_ages();
	n.print();

}