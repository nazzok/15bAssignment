/*
Morgan Marasch
December 2, 2021
CIS 1202.501

Assignment 15b
Write template functions
*/
#include <iostream>
using namespace std;

template <typename T>
T half(T number) {
	return number / 2;
}

//overridden for integers
int half(int number) {
	number = round(number / 2.0);
	return number;
}

int main() {
	cout << half(9.4) << endl;
	cout << half(5.0f) << endl;
	cout << half(5) << endl;
	return 0;
}