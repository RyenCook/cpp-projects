#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_

#include <string>

class BankAccount
{
	private:
		int m_no;
		std::string m_name;
		double m_balance;
	public:
		BankAccount(int t_no, std::string t_name, double t_balance);
		void setName(std::string name);
		void setBalance(double balance);
		int getNumber();
		std::string getName();
		double getBalance();
};

#endif
