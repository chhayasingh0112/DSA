#include <iostream>

struct Entity
{
	int x, y;
};

int main()
{
	Entity e = { 5,8 };

	int* position = (int*)&e; 

	int y = *(int*)((char*)&e + 4);

	std::cout << position[0] << ", " << position[1] << std::endl;
	std::cout << y << std::endl;  

	std::cin.get();

}