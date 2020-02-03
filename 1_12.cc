#include <iostream>
int main()
{
	int sum = 0;
	for (int num =50; num <= 100; ++num)
		sum += num;
	std::cout << "50 dao 100 de he shi "
			  << sum << std::endl;
	return 0;
}