//Kirsten Madina
//UIN 626003641
// Assignment 1 question 4
#include <iostream>
using namespace std;
int main()
{
	// write a program that can calculate your final score using the weights listed below.
	// 3 quizzes 10 points each with total weight 12%
	// 2 exams 100 points each with the total weight 60%
	// 4 assignments 100 points each with the total weight 28%
	cout << "Enter points for 3 quizzes:";
	int quiz1, quiz2, quiz3;
	cin >> quiz1;
	cin >> quiz2;
	cin >> quiz3;
	cout << "Enter points for 2 exams:";
	int exam1, exam2;
	cin >> exam1;
	cin >> exam2;
	cout << "Enter points for 4 assignments:";
	int a1, a2, a3, a4;
	cin >> a1;
	cin >> a2;
	cin >> a3;
	cin >> a4;
	int total;
	int quizavg;
	quizavg = (quiz1 + quiz2 + quiz3) / 3;
	int examavg;
	examavg = (exam1 + exam2) / 2;
	int aavg;
	aavg = (a1 + a2 + a3 + a4) / 4;
	total = ((quizavg*10)*0.12 + examavg*0.6 + aavg*0.28);
	cout << "Your total score for this class will be" << total << "%.";

}