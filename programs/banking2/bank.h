#ifndef BANK_H_
#define BANK_H_

#include <string>
#include "bankaccount.h"

class Bank
{
	public:
		std::string m_name;
		BankAccount m_account; // Vector??
		Bank();
		Bank(std::string t_name);
		Bank(std::string t_name, BankAccount& t_account);
};

#endif /* BANK_H_ */
