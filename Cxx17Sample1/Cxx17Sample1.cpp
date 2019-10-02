
#include <iostream>
#include <vector>
#include <execution>

int main()
{
	std::vector<int> vec;
	std::sort(std::execution::par_unseq, vec.begin(), vec.end());
}
