#include <string>
#include <vector>
#include "../include/bank.h"
#include "../include/bankaccount.h"

Bank::Bank(std::string t_name)
{
	m_name = t_name;
}

int Bank::getAccount(int t_no)
{
	for(std::vector<BankAccount>::size_type i = 0; i < m_accounts.size(); i++)
	{
		if(m_accounts[i].getNumber() == t_no)
		{
			return i;
		}

		return -1;
	}
}

void Bank::addAccount(BankAccount t_bank)
{
	m_accounts.push_back(t_bank);
}

void Bank::removeAccount(int t_index)
{
	m_accounts.erase(m_accounts.begin() + t_index);
}
