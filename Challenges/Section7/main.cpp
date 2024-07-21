#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	std::vector<int32_t> vector1 {};
	std::vector<int32_t> vector2 {};
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	/*
	for (const auto& element : vector1)
	{
		std::cout << element << ' ';
	}
	std::cout << '\n';
	*/
	
	for(size_t i{}; i < vector1.size(); ++i)
	{
		std::cout << vector1.at(i) << ' ';
	}
	std::cout << '\n';
	std::cout << vector1.size() << '\n';
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	for(size_t i{}; i < vector2.size(); ++i)
	{
		std::cout << vector2.at(i) << ' ';
	}
	std::cout << '\n';
	std::cout << vector2.size() << '\n';
	
	std::vector<std::vector<int32_t>> vector2d {};
	vector2d.push_back(vector1);
	vector2d.push_back(vector2);
	
	for(size_t i{}; i < vector2d.size(); ++i)
	{
		for(size_t j{}; j < vector2d[i].size(); ++j)
		{
			std::cout << vector2d[i].at(j) << ' ';
		}
	}
	
	vector1.at(0) = 1000;
	std::cout << '\n';
	
	return 0;
} 