#include <iostream>
#include <string>
#include "bank.h"
#include "bankmanager.h"

int main()
{
	BankAccount acc(1, "Ryan Cook", 100.00);
	Bank test("Bank of Cook", acc);
	BankManager BM(test);
	std::cout << BM.getName() << "\n";
	std::cout << BM.getInfo() << "\n";
	return 0;
}
