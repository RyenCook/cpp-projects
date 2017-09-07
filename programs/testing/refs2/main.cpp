#include <iostream>
#include <string>

class A
{
	private:
	public:
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
	A m_a;
	B m_b(m_a);
	m_b.speak();
	return 0;
}
