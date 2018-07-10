#include <functional>
#include <iostream>

std::function<void()> create_alarm () {
	std::string message = "Wakeup call!\n";
    return [&](){ std::cout << message; };
}

int main() {
	create_alarm()();
}
