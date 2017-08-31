#include <string>
#include "../include/bankaccount.h"

BankAccount::BankAccount(int t_no, std::string t_name, double t_balance)
{
	m_no = t_no;
	m_name = t_name;
	m_balance = t_balance;
}

void BankAccount::setName(std::string t_name)
{
	m_name = t_name;
}

void BankAccount::setBalance(double t_balance)
{
	m_balance += t_balance;
}

int BankAccount::getNumber()
{
	return m_no;
}

std::string BankAccount::getName()
{
	return m_name;
}

double BankAccount::getBalance()
{
	return m_balance;
}
