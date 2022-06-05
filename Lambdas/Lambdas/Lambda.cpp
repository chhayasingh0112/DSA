#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>


void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int value : values)
		func(value);
}


int main()
{
	std::vector<int> values = { 1,9,3,4,8,6,7 };
	auto it= std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });

	std::cout << *it << std::endl;
	int a = 15;

	auto lambda = [=](int value) {std::cout << "Value: " << value << std::endl; };

	ForEach(values, lambda);

	std::cin.get();
}