#include <string>
#include "bankaccount.h"
#include "bank.h"

Bank::Bank()
{
	m_name = "Failed";	
}

Bank::Bank(std::string t_name)
{
	m_name = t_name;
}

Bank::Bank(std::string t_name, BankAccount& t_account)
{
	m_name = t_name;
	m_account = t_account;
}
