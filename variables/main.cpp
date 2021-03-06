#include <iostream>
using namespace std;

/* Valid variable types in C++ are:
 * --------------------------------
 *  bool - Stores a boolean value
 *  char - Stores a character
 *  int - Stores an integer
 *  float - Stores a floating point (of 4 bytes or about 7 digits)
 *  double - Stores a floating point (of 8 bytes or about 15 digits)
 *  wchar_t - Is like a character, but can store values larged than 256 (ie unicode > ascii)
 */

// Any variables placed outside a function are global
int a, b; // These variables are DEFINED as they do not use "extern"
extern int c, d; // These variables are DECLARED by the usage of the keyword 'extern', so the computer always knows they will exist

int main() {
	// Any variables placed inside a function are local
	int c, d; // If variables are DECLARED they still must be DEFINED elsewhere to work
	int e, f;

	// All of these variables have been now been INITIALIZED
	a = 1; 
	b = 2;
	c = 52;
	d = 73;
	e = 8;
	f = 91;

	cout << "The value of a + b is " << (a + b) << endl;
	cout << "The value of c - d is " << (c - d) << endl;
	cout << "The value of e * f is " << (e * f) << endl;

	bool g, h;

	g = true;
	h = 0; // Boolean values can both be set to true/false or 1/0

	cout << "Booleans can both be " << g << " or " << h << endl;

	char i, j;

	i = 'A'; // Chars are set using single quotes
	j = 65; // Chars accept both characters and their ascii equivalents

	cout << "Both " << i << " and " << j << " are 'A'" << endl;

	float k;

	k = 0.5f; // All values must have 'f' placed at the end

	double l;
	l = 0.999;

	cout << "Both are outputted as the decimal values " << k << " and " << l << endl;

        /* Constant variables are defined by 'const', and it is best practice to
         * capitalize and to initalize in the same line */
        const int M = 0;

        cout << "The constant M is equal to " << M << endl;

	signed int n = -100; // Signed modifier, allows negative
	unsigned int o = 999; //Unsigned modifier, positive only
	short int  p = 5; // Limits width to 2 bytes
	long double q = 0.238243228582357728375; // Long extends length by 2 bytes (could have long long)
	signed r = -69; // Modifier by themeselves assume int as a short hand (signed r = signed int r)

	cout << "The value of n " << n << endl;
	cout << "The value of o " << o << endl;
	cout << "The value of p " << p << endl;
	cout << "The value of q " << q << endl;
	cout << "The value of r " << r << endl;

	// Other modifiers include volatile and restrict

	return 0;
}
