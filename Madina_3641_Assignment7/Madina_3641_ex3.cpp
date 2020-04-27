#include <iostream>
#include <string>
using namespace std;

int is_upper(char c) {
	if (c >= 'A'&& c <= 'Z')
		return 1;
	else
		return 0;
}
void to_lower(char* c) {
	for (int i = 0; c[i] != '\0'; i++) {
		if (is_upper(c[i])) {
			c[i] += (32);
		}
	}
	c[i] = '\0';
}
int main() {
	char s[100];
	cout << "enter the string." << endl;
	cin >> s;
	to_lower(s);
	cout << s;
	return 0;
}