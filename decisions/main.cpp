#include <iostream>
using namespace std;

/* DECISION MAKING STATEMENTS
 * C++ has three decision making statements: if, else and switch (and nested)
 */

int main() {
	int input;
	cout << "Input a value: " << endl;
	cin >> input;

	if(input%2 == 0) {
		cout << "The value is even." << endl;
	}else{
		cout << "The value is odd." << endl;
	}

	char grade;
	cout << "Input a grade: " << endl;
	cin >> grade;

	switch(grade) {
		case 'A':
			cout << "Excellent!" << endl;
			break;
		case 'B':
			cout << "Well done." << endl;
			break;
		case 'C':
			cout << "You passed." << endl;
			break;
		case 'D':
			cout << "NC" << endl;
			break;
		case 'F':
			cout << "NC" << endl;
			break;
		default:
			cout << "Invalid grade" << endl;
			break;
	}

	cout << "Your grade is " << grade << endl;

	return 0;
}
