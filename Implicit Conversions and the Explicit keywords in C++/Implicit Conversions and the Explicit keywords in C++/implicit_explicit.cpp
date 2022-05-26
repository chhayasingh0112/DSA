#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name)
		:m_Name(name),m_Age(-1){}
	Entity(int age)
		:m_Name("Unknown"),m_Age(age){} 
};

void PrintEntity(const Entity& entity)
{
	//Printing
}

int main()
{
	PrintEntity(21);
	
	Entity a="Riya singh";
	Entity b=21;
	
	std::cin.get();
}
