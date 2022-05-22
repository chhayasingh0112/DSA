#include<iostream>
#include<string>

int main()
{
	const int MAX_AGE = 90;

	int* a = new int;
	*a = 2;
	a = (int*)&MAX_AGE;

	std::cout << *a << std::endl;
	std::cin.get();

}