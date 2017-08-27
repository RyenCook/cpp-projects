#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int a;

	srand((unsigned)time(NULL)); // sets the seed

	for(int i  = 0; i < 10; i++) {
	a = rand();
	cout << "Random number: " << a << endl;
	}

	return 0;
}
