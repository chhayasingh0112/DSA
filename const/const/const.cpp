#include<iostream>
#include<string>

class Entity
{
private:
	int m_X, m_Y;
	mutable int var;
public:
	int GetX() const
	{
		return m_X;
	}

	int SetX(int x)
	{
		m_X = x;
	}
};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}

int main()
{
	Entity e;
	const int MAX_AGE = 90;

	const int* a = new int;

	a = (int*)&MAX_AGE;

	std::cout << *a << std::endl;
	std::cin.get();

}