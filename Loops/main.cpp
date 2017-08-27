#include <iostream>
using namespace std;

/* LOOPS
 * There are three main loops in C++: while, for and do...while (and nested)
 */

/* LOOP CONTROL STATEMENTS
 * These statements control the execution from its normal sequence, they are:
 * break - terminates the current loop
 * continue - causes the loop to skip the remainder of its body and loop
 * goto - transfers control to the labeled statement
 */

int main() {

	int a = 0;
	while(a < 5) {
		cout << "while: " << a << endl;
		a++;
	}

	for(int i = 0; i < 5; i++) {
		cout << "for: " << i << endl;
	}

	int b = 0;
	do {
		cout << "do: " << b << endl;
		b++;
	}while(b<5);
	
	int c = 0;
	while(c < 5) {
		cout << "while: " << c << endl;
		if(c == 3) {
			cout << "LOOP BROKEN" << endl;
			break;
		}
		c++;
	}

	int d = 0;
	while(d<5) {
		if(d == 4) {
			cout << "SKIPPED" << endl;
			d++;
			continue;
		}
		cout << "While: " <<  d << endl;
		d++;
	}
	
	int e = 0;
	LOOP:while(e<5) {
                if(e == 4) {
                        cout << "SKIPPED" << endl;
			e++;
                        goto LOOP;
                }
                cout << "while: " << e << endl;
		e++;
	     }
             
	return 0;
}
