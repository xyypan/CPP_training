#include <iostream>
#include <vector>

int main() {
	std::vector<int> a {0,1,2,3,4,5,6};
	//lambda1 captures a by value
	auto lambda1 = [a](int x) { return a[x]; };
	//lambda2 captures a by reference
	auto lambda2 = [& a](int x) { a[x]++; };
	return 0;
}
