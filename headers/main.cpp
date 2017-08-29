#include <iostream>
#include "math.h"
using namespace std;

// Headers are literally the same thing as interfaces in Java
int main() {
	cout << add(2,5) << endl;
	cout << subtract(7,4) << endl;
	cout << add(7,9) << endl;
	cout << subtract(6,9) << endl;
	return 0;
}

int add(int a, int b) {
	return (a+b);
}

int subtract(int a, int b) {
	return (a-b);
}
