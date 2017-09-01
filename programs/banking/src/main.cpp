#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "../include/bankaccount.h"
#include "../include/bank.h"

int main()
{
	Bank myBank("Bank of Ryan");
	double bal = 200.5;
	BankAccount myAcc(1, "Ryan Cook", bal);
	myBank.addAccount(myAcc);
	std::string new_name;
	std::cout << "Enter a new name: " << std::flush;
	std::cin >> new_name;
	if(myBank.getAccount(1) != -1)
	{
		myBank.updateAccount(myBank.getAccount(1), new_name);
		std::cout << "Updated" << std::endl;
	}else{
		std::cout << "Not Updated" << std::endl;
	}
	if(myBank.getAccount(1) != -1)
	{
		myBank.removeAccount(1);
		std::cout << "Worked" << std::endl;
	}else{
		std::cout << "Failed" << std::endl;
	}
	return 0;
}
