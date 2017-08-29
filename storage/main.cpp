#include <iostream>
using namespace std;

/* Storage classes define the scope and life-time of variables/functions
 * 
 * auto - the default storage class for all local variables 
 * register - recommends to store the variable in the register
 * static - same as Java
 * extern - defines a global variable located "externally"
 * mutable - allows a function be modified by a const member function
 */

static int a = 10;
extern int b; // In some other file in the project is a global variable called "b"
int main() {
	/* Both of these call the default auto storage class*/
	int c;
	auto int d;

	register int e; // 'Recommends' the compilier stores the variable in the processor register

	return 0;
}
