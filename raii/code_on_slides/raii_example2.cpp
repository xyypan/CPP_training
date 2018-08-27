#include <iostream>
#include <memory>
#include <stdexcept>

struct Banana {
  std::string origin;
  Banana() { std::cout << "Constructing a Banana" << std::endl; }
  ~Banana() { std::cout << "Destroying a Banana" << std::endl; }
};

struct Lunch {
  std::unique_ptr<Banana> banana_ptr_;
  Lunch() : banana_ptr_(std::make_unique<Banana>()) { throw std::exception(); }
  ~Lunch() { std::cout << "Destroying a Lunch" << std::endl; }
};
int main() { Lunch lunch; }
