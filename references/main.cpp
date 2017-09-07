#include <iostream>
#include <string>

void printIt(std::string& t_string)
{
	std::cout << t_string << "\n";
}

int main()
{
	int i;
	int&r = i; // Reference to I

	std::string s;
	std::string& d = s;

	std::cout << "Input a value: ";
	std::cin >> i;
	std::cin >> s;

	std::cout << "The value of i: " << i << "\n";
	std::cout << "The value of the reference: " << r << "\n";

	std::cout << "The value of s: " << s << "\n";
    std::cout << "The value of the reference: " << d << "\n";

	printIt(s);
	printIt(d);

	return 0;
}
