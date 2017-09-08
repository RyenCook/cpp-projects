#include <string>
#include "bankaccount.h"
#include "bank.h"
#include "bankmanager.h"

BankManager::BankManager()
{
	std::string name = "Failed in BM";
	Bank t_bank(name);
	this->m_bank = t_bank;
}

BankManager::BankManager(Bank& t_bank)
{
	this->m_bank = t_bank;	
}

std::string BankManager::getName()
{
	return m_bank.m_name;
}

std::string BankManager::getInfo()
{
	return m_bank.m_account.getInfo();
}
