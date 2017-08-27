#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[5];

	int input;
	cout << "Input a number: " << endl;
	cin >> input;

	a[0] = input;
	a[1] = input * 2;
	a[2] = input / 3;
	a[3] = input % 4;
	a[4] = pow(input, 2);

	for(int i=0; i<(sizeof(a)/sizeof(a[0]));i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	return 0;
}
