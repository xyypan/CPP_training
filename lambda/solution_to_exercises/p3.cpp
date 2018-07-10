#include <iostream>
#include <algorithm>
#include <vector>

int main () {
	std::vector < int > a {1 ,2 ,3};
	auto print_lambda = [](int x) { std::cout << x << '\n'; };
	//std::for_each will call print_lambda
	std::for_each (a.begin(), a.end(), print_lambda);
	return 0;
}
