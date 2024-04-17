/*
Oliver Moore
CIS 1202
4/17/2024
*/
#include "personalLibv1.4.h"
template<typename T>
T half(T value) {
	return value / 2;
}
int half(int value) {
	// Round according to usual rounding rules
	return round((value / 2));
}
int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 15;
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	endProgram();
}
