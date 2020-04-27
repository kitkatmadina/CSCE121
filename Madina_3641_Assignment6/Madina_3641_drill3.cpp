//Drill 2
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ostream>
using namespace std;

class Name_pair {
public:
	vector<string> name;
	vector<int> age;
	void read_names();
	void read_ages();
	friend ostream &operator <<(ostream &os, Name_pair &n) {
		n.sortpair();
		for (int i = 0; i <= n.name.size() - 1 && i <= n.age.size() - 1; i++) {
			os << "(" << n.name[i] << ", " << n.age[i] << ")" << endl;
		}
	}
	friend bool operator==(Name_pair &n, Name_pair &m) {
		n.sortpair();
		m.sortpair();
		if (n.name.size() == m.name.size()) {
			for (int i = 0; i < n.name.size(); i++) {
				if (n.name[i] == m.name[i] && n.age[i] == m.age[i])
					return true;
			}

		}
	}
	friend bool operator!=(Name_pair &n, Name_pair &m) {
		n.sortpair();
		m.sortpair();
		if (n.name.size() != m.name.size()) {
			return true;
		}
		else if (n.name.size() == m.name.size()) {
			for (int i = 0; i < n.name.size(); i++) {
				if (n.name[i] != m.name[i] || n.age[i] != m.age[i])
					return true;
			}

		}
	}
	void sortpair();
};


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
	for (int i = 0; i <= name.size() - 1; i++) {
		for (int j = 1; j <= name.size() - 1; j++) {
			if (name[j - 1] > name[j]) {
				string temp = name[j];
				int a = age[j];
				name[j] = name[j - 1];
				age[j] = age[j - 1];
				name[j - 1] = temp;
				age[j - 1] = a;
				count++;
			}
		}
		if (count == 0)
			break;

	}

}

int main() {
	Name_pair n;
	n.read_names();
	n.read_ages();
	cout << n;
	Name_pair m;
	m.read_names();
	m.read_ages();
	cout << m;
	cout << "How do the Name_pairs compare?" << endl;
	if (n == m){
		cout << "They are the same!" << endl;
	}
	else if (n != m) {
		cout << "They are different." << endl;
	}
	return 0;
}