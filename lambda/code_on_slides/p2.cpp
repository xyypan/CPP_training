#include <iostream>

int main() {
	auto simple_lambda = []( int x ) { return x +1; };
	int x = simple_lambda (100);
	std :: cout << " x : " << x << "\n" ;
	return 0;
}
