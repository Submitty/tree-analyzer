#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers{1, 2, 3, 4, 5};
	numbers.erase(numbers.begin());
	for (int num : numbers)
	{
		std::cout << num << std::endl;
	}
	return 0;
}

