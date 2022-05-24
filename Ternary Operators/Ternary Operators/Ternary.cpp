#include <iostream>
#include<string>


static int s_Level = 8;
static int s_Speed = 2;


int main()
{
	s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;
	std::string rank = s_Level > 10 ? "Master" : "Beginner";
	std::cout << rank << std::endl;
	std::cout <<"Speed "  << s_Speed << std::endl;
	
	std::cout <<"Level " << s_Level << std::endl;
	std::cin.get();
}