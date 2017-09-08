#ifndef BANK_MANAGER_H_
#define BANK_MANAGER_H_

#include <string>
#include "bank.h"

class BankManager
{
	private:
		Bank m_bank;
	public:
		BankManager();
		BankManager(Bank&);
		std::string getName();
};

#endif /* BANK_MANAGER_H_ */
