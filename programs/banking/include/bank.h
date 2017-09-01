#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>
#include <vector>
#include "bankaccount.h"

class Bank
{
	private:
		std::string m_name;
		std::vector<BankAccount> m_accounts;
	public:
		Bank(std::string name);
		int getAccount(int t_no);
		void addAccount(BankAccount t_bank);
		void removeAccount(int t_no);
		void updateAccount(int t_no, std::string t_name);
};

#endif
