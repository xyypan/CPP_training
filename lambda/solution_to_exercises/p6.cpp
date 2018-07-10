#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> a{1,2,3};
    int sum = 0;
    //TODO: define a lambda and use std::for_each
	std::for_each(a.begin(), a.end(), [&sum](int x) { sum += x; });
    //Afterwards, sum should be 6
	std::cout << sum << '\n';
    return 0;
}
