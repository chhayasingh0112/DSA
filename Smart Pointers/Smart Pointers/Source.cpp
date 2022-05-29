#include <iostream>
#include<string>
#include<memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
	void Print() {}

};

//class ScopedPtr
//{
//private:
//	Entity* m_Ptr;
//public:
//	ScopedPtr(Entity* ptr)
//		: m_Ptr(ptr)
//	{
//	}
//
//	~ScopedPtr()
//	{
//		delete m_Ptr;
//	}
//};


int main()
{
	{
	std::shared_ptr<Entity> e0;
	{
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
		 
		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
		e0 = sharedEntity;

	}
	}

	std::cin.get();
}