#include <iostream>
#include <string>
#include "bank.h"
#include "bankmanager.h"

int main()
{
	std::string name = "My name is test";
	std::string a_name = "My name is ryan";
	int a_id = 1;
	double a_bal = 100.0;
	BankAccount acc(a_id, a_name, a_bal);
	Bank test(name, acc);
	BankManager BM(test);
	std::cout << BM.getName() << "\n";
	std::cout << BM.getInfo() << "\n";
	return 0;
}
