#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a {0,1,2,3,4,5,6};
	auto lambda2 = [& a ]( int x ) { a[x]++; };
	std::vector < int > indices {0,3};
	//std::for_each ( lambda2’s caller ) can ’t access a
	std::for_each ( indices.begin(), indices.end(), lambda2);
	return 0;
}
