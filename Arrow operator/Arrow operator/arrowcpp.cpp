#include <iostream>
#include<string>

class Entity
{
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

int main()
{
	Entity e;
	//e.Print();

	Entity* ptr = &e;
	ptr->Print();
	std::cin.get();
}