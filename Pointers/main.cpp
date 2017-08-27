#include <iostream>
using namespace std;

int main() {
	int var = 20;
	int *ip;

	ip = &var;

	cout << "Value of var variable: ";
	cout << var << endl;

	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	// Reference variables, any change made to the original will affect the child
	int i;
	int& j = i;

	int input;

	cout << "Enter in a value: " << flush;
	cin >> input;

	i = input;

	cout <<  "Value of i: " << j << endl;
	cout << "Value of i reference: " << i << endl;

	return 0;
}
