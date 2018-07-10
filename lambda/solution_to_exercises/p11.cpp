#include <iostream>
#include <vector>
#include <algorithm>

struct Squirrel {
    std::string name;
    int age;
    Squirrel (const std::string &name , int age): name(name) , age(age){}
};
int main() {
    std::vector<Squirrel> squirrels
		{{"Emily", 4}, {"Luis", 1}, 
    	 {"Charlie", 5}, {"Sara", 9}};
    //TODO: write a comparison_lambda for Squirrel
    //TODO: sort the squirrels  
	auto comparison_lambda = [](const Squirrel &s1, const Squirrel &s2) -> bool { return s1.age < s2.age; };
	std::cout << "Squirrels before sorting\n";
	std::for_each(squirrels.begin(), squirrels.end(), [](const Squirrel &s) {std::cout << s.name << " " << s.age << '\n';});
	std::sort(squirrels.begin(), squirrels.end(), comparison_lambda);
	std::cout << "Squirrels after sorting\n";
	std::for_each(squirrels.begin(), squirrels.end(), [](const Squirrel &s) {std::cout << s.name << " " << s.age << '\n';});
	return 0;
}
