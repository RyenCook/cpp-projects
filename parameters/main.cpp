#include <iostream>
#include <string>

class myClass {
	private:
		std::string name;
	public:
		myClass();
		myClass(std::string &ref);
		void printName();
};

myClass::myClass(std::string& ref)
{
	name = ref;
}

void myClass::printName()
{
	std::cout << name << std::endl;
}

int main()
{
	std::string test = "hi";
	myClass hi(test);
	hi.printName();
	return 0;
}
