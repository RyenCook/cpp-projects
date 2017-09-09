#include <string>
#include "bankaccount.h"

BankAccount::BankAccount()
{
	m_id = 0;
	m_name = "Failed Name";
	m_balance = 0.0;
}

BankAccount::BankAccount(int t_id, std::string t_name, double t_balance)
{
	m_id = t_id;
	m_name = t_name;
	m_balance = t_balance;
}

std::string BankAccount::getInfo()
{
	return (m_name);
}
