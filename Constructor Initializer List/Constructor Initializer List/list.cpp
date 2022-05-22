#include <iostream>
#include<string>

class Example
{
public:
	Example()
	{
		std::cout << "Created Entity!" << std::endl;

	}

	Example(int x)
	{
		std::cout << "Created Entity With " << x << "!" << std::endl;
	}
};


class Entity
{
private:
	std::string m_Name;
	Example m_Example;
public:
	Entity()
	{
		m_Name = std::string("Unknown");
		m_Example = Example(1);
	}
	Entity(const std::string& name)
		: m_Name(name)
	{
		m_Name = name;
	}

	const std::string& GetName() const { return m_Name; }
};

int main()
{
	Entity e0;
	

	std::cin.get();

}