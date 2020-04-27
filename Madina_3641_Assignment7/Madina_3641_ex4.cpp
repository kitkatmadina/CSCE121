#include <iostream>
#include <string>
using namespace std;

int is_lower(char c) {
	if (c >= 'a'&& c <= 'z')
		return 1;
	else
		return 0;
}
void to_upper(char* c) {
	for (int i = 0; c[i] != '\0'; i++) {
		if (is_lower(c[i])) {
			c[i] -= (32);
		}
	}
	c[i] = '\0';
}
int main() {
	char s[100];
	cout << "enter the string." << endl;
	cin >> s;
	to_upper(s);
	cout << s;
	return 0;
}