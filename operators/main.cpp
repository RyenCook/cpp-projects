#include <iostream>
using namespace std;

/* C++ has many built-in operators, which include:
 * arithmetic
 * relational
 * logical
 * bitwise
 * assignment
 * and miscellaneous
 */
int main() {

	int a = 3;
	int b = 2;

	bool c = true;
	bool d = false;

	int e = 60;
	int f = 12;

	cout << endl << "a = " << a << ", b = " << b << endl;
	cout << "c = " << c << ", d = " << d << endl << endl;

	cout << "/* ARITHMETIC OPERATORS */" << endl; // Outputs int values
	cout << "a+b:  " << (a+b) << endl;
	cout << "a-b:  " << (a-b) << endl;
	cout << "a*b:  " << (a*b) << endl;
	cout << "a/b:  " << (a/b) << endl;
	cout << "a%b:  " << (a%b) << endl; // outputs remainder
	a++;
	cout << "a++:  " << a << endl;
	b--;
	cout << "b--:  " << b << endl << endl;

	cout << "/* RELATIONAL OPERATORS */" << endl;// outputs 1/0, 1 = true, 0 = false
	cout << "a==b: " << (a==b) << endl;
	cout << "a!=b: " << (a!=b) << endl;
	cout << "a>b: " << (a>b) << endl;
	cout << "a<b: " << (a<b) << endl;
	cout << "a>=b: " << (a>=b) << endl;
	cout << "a<=b: " << (a<=b) << endl << endl;

	cout << "/* LOGICAL OPERATORS */" << endl; // outputs 1/0 like relational
	cout << "c&&d: " << (c&&d) << endl;
	cout << "c||d: " << (c||d) << endl;
	cout << "!(c&&d): " << !(c&&d) << endl << endl;

	cout << "/* BITWISE OPERATORS */" << endl; // Outputs numerical value of binary value
	// E = 0011 1100, F = 0000 1101
	cout << "e&f: " << (e%f) << endl; //bitwise AND, copies bit if it exists in both operands (E&f = 0000 1100 = 12)
	cout << "e|f: " << (e|f) << endl; // bitwise OR, copies bit if it exists in either  operands (E|F = 0011 1100 = 61)
	cout << "e^f: " << (e^f) << endl; // bitwise XOR, copies bit if it exists in only onerands (E^F = 0011 0001 = 49)
	cout << "~e: " << (~e) << endl; // binary ones complement operator (invert bits + 1)
	cout << "e<<2: " << (e<<2) << endl; // binary left shift operator (shift bits left by param (e<<2 e = 0011 1100 -> 1111 0000 = 240)
	cout << "e>>2: " << (e>>2) << endl << endl; // binary right shift operator (shifts bits right by param (ee>>2 e = 0011 1100 -> 0000 1111 = 12)

	cout << "/* ASSIGNMENT OPERATORS */" << endl;
	a = 5;
	cout << "a=5: " << a << endl;
	a += 2;
	cout << "a+=2: " << a << endl; // a = a + 2
	a -= 2;
	cout << "a-=2: " << a << endl; // a = a - 2
	a *= 4;
	cout << "a*=4: " << a << endl; // a = a * 4
	a /= 4;
	cout << "a/=4: " << a << endl; // a = a / 4
	a%=3;
	cout << "a%3: " << a << endl; // a = a % 3
	a<<=2;
	cout << "a<<2: " << a << endl; // a = a << 2
	a>>=3;
	cout << "a>>3: " << a << endl; // a = a >> 3
	a&=2;
	cout << "a&=2: " << a << endl; // a = & 2
	a^=2;
	cout << "a^=2: " << a << endl; // a = a ^ 2
	a|=3;
	cout << "a|=3: " << a << endl << endl; // a = a | 2

	cout << "/* MISCELLANEOUS OPERATORS */" << endl;
	cout << "sizeof(a): " << sizeof(a) << endl; // returns size in bytes of variable
	a=(a<10)?5:7;
	cout << "(a=(a<10)?5:7): " << a << endl; // same as java conditional assignment
	a=(a++,a-2,a*2);
	cout << "a=(a++,a-2,a*2): " << a << endl; // series of assignments, with the variable being set to the rightmost value at the end
	cout << "(double)a: " << (double) a << endl; // same as java casting
	cout << "&a: " << &a << endl; // outputs memory address of variable
	cout << "*a: " << *(&a) << endl << endl; // outputs the value of the variable at a given address
	
	return 0;
}
