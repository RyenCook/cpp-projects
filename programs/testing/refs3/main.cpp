#include <iostream>
#include <string>

/* I AM A GOD */

class A
{
	private:
		std::string message;
	public:
		A();
		A(std::string t_message);
		void speak();
};

class B
{
	private:
		A a;
	public:
		B(A&);
		void speak();
};

A::A()
{
	message = "Failed";
}

A::A(std::string t_message)
{
	message = t_message;
}

void A::speak()
{
	std::cout << "Hello!" << "\n";
}

B::B(A& t_a)
{
	a = t_a; 
}

void B::speak()
{
	a.speak();
}

int main()
{
	std::string mes = "Hi!";
	A m_a(mes);
	B m_b(m_a);
	m_b.speak();
	return 0;
}
