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
	return 0;
}
