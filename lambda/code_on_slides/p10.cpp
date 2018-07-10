#include <iostream>
#include <vector>

struct ExplicitLambda {
	//captures go here
	std::vector<int> &a;
	ExplicitLambda (std::vector<int> &vec): a(vec) {}
	//body of the lambda goes into a callable operator
	void operator() (int x) {
		a[x]++;
	}
};

int main() {
	std::vector<int> a{0,1,2,3,4,5,6};
	auto lambda = [&a](int x) { a[x]++; };
	ExplicitLambda object_pretending_to_be_lambda(a);

	lambda(0);
	object_pretending_to_be_lambda(0);
	return 0;
}
