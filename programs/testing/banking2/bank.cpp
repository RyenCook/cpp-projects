#include <string>
#include "bank.h"

Bank::Bank()
{
	m_name = "Failed";	
}

Bank::Bank(std::string t_name)
{
	m_name = t_name;
}
