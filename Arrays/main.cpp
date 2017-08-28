#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[5];

	int input;
	cout << "Input a number: " << flush;
	cin >> input;

	a[0] = input;
	a[1] = input * 2;
	a[2] = input / 3;
	a[3] = input % 4;
	a[4] = pow(input, 2);

	for(int i=0; i<(sizeof(a)/sizeof(a[0]));i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	// Multi-dimensional array
	string animals[][3] = {{"cat", "dog", "fish"},{"zebra", "giraffe", "elephant"}};

	for(int i=0; i< sizeof(animals)/sizeof(animals[0]); i++) {
		for(int j=0; j < sizeof(animals[0])/sizeof(string); j++) {
			cout << animals[i][j] << " " << flush;
		}

		cout << endl;
	}

	return 0;
}
