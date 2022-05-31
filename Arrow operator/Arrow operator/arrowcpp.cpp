#include <iostream>
#include<string>

class Entity
{
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr
{
private:
	Entity* m_obj;
public:
	ScopedPtr(Entity* entity)
		: m_obj(entity)
	{
	}

	~ScopedPtr()
	{
		delete m_obj;
	}

	Entity* operator->()
	{
		return m_obj;
	}
};

int main()
{
	ScopedPtr entity = new Entity();
	entity->Print();


	std::cin.get();
}