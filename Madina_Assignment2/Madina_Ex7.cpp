//Assignment 2 ex 7
//kirsten madina
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[3][20], t[20];
	int i, j;
	cout << "Enter any three string (name) : ";
	for (i = 0; i<3; i++)
	{
		cin >> str[i];
	}
	for (i = 1; i<3; i++)
	{
		for (j = 1; j<3; j++)
		{
			if (strcmp(str[j - 1], str[j])>0)
			{
				strcpy(t, str[j - 1]);
				strcpy(str[j - 1], str[j]);
				strcpy(str[j], t);
			}
		}
	}
	cout << "Strings (Names) in alphabetical order : \n";
	for (i = 0; i<3; i++)
	{
		cout << str[i] << "\n";
	}
}