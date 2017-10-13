#ifndef BANK_H_
#define BANK_H_

#include <string>
#include <vector>
#include "bankaccount.h"

class Bank
{
	public:
		std::string m_name;
		BankAccount m_account;
		std::vector<BankAccount> m_accounts;// Vector??
		Bank();
		Bank(std::string t_name);
		Bank(std::string t_name, BankAccount& t_account);
		void addAccount(BankAccount& t_account);
		std::string getAccount(int i);
};

#endif /* BANK_H_ */
