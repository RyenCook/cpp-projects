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
	if(myBank.getAccount(1) != -1)
	{
		myBank.removeAccount(1);
		std::cout << "Worked" << std::endl;
	}else{
		std::cout << "Failed" << std::endl;
	}
	return 0;
}
