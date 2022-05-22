#include<iostream>
#include<string>

int main()
{
	const int MAX_AGE = 90;

	const int* a = new int;

	a = (int*)&MAX_AGE;

	std::cout << *a << std::endl;
	std::cin.get();

}