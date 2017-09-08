#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_

#include <string>

class BankAccount
{
	private:
		int m_id;
		std::string m_name;
		double m_balance;
	public:
		BankAccount();
		BankAccount(int& t_id, std::string& t_name, double& t_balance);
		std::string getInfo();
};

#endif /* BANK_ACCOUNT_H_ */
