#include <string>
#include "bank.h"
#include "bankmanager.h"

BankManager::BankManager()
{
	Bank t_bank("Failed in BM");
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
