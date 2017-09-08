#include <iostream>
#include <string>
#include "bank.h"
#include "bankmanager.h"

int main()
{
	Bank test("My name is test");
	BankManager BM(test);
	std::cout << BM.getName() << "\n";
	return 0;
}
