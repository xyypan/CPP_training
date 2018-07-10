#include <string>
#include <iostream>

int main() {
    struct Squirrel {
        std::string name ;
        int age ;
        Squirrel (const std::string& name , int age):
            name (name) , age (age){}
        void operator()() {
            std::cout << "Squirrel " << name << " is called.\n";
        }
    };
    Squirrel new_squirrel ( "Charlie" , 5);
    new_squirrel();
    return 0;
}
