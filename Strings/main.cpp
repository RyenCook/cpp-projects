#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char greeting1[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // The technical string
	char greeting2[] = "Hi"; // The "C-String"
	string greeting3 = "Hola"; // The string class

	/* STRING FUNCTIONS 
	 * strcpy(a, b) - copies string b into a
	 * strcat(a, b) - concatenates string a and b
	 * strlen(a) - returns the length of string a
	 * strcmp(a, b) - returns 0 if a=b, -1 if a<b or 1 if a>b
	 * strchr(a, ch) - returns first pointer to char ch in string a
	 * strstr(a, b) - returns first pointer to string a in string b
	 */

	char a[] = "Hello";
	char b[] = "World";
	char c[15];
	int l; // l for length

	strcpy(c, a);
	cout << "strcpy(c, a): " << c << endl;
	
	strcat(a, b);
	cout << "strcat(a, b): " << a << endl;

	l = strlen(a);
	cout << "strlen(a): " << l << endl;

	string d = "Hello";
	string e = "World";
	string f;
	int len;

	f = d;
	cout << "f: " << f << endl;

	f = d + e;
	cout << "d + e: " << f << endl;

	len = f.size();
	cout << "f.size(): " << len << endl;

	return 0;
}
