#include <iostream>
using namespace std;

/* FUNCTIONS
 * A function is agroup of statements that together perform a task. A function is decl
 * ared like so "return_type function_name(parameters) {}"
 */

int main() {
	int input1, input2;
	cout << "Enter in two values" << endl;
	cin >> input1;
	cin >> input2;

	int result = max(input1, input2);

	cout << "The maximum value is " << result << endl;
}

int max(int a, int b) {
	if(a>b) {
		return a;
	}else{
		return b;
	}
}
