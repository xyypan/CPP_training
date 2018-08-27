#include <iostream>
#include <memory>
#include <stdexcept>

struct Banana {
  std::string origin;
  Banana() { std::cout << "Constructing a Banana\n"; }
  ~Banana() { std::cout << "Destroying a Banana\n"; }
};
struct Pineapple {
  std::string origin;
  Pineapple() { std::cout << "Constructing a Pineapple\n"; }
  ~Pineapple() { std::cout << "Destroying a Pineapple\n"; }
};
struct Apple {
  std::string origin;
  Apple() { std::cout << "Constructing an Apple\n"; }
  ~Apple() { std::cout << "Destroying an Apple\n"; }
};
struct Lunch {
  // resources needed
  Banana banana_;
  Pineapple pineapple_;
  Apple apple_;

  Lunch() = default;
  ~Lunch() { std::cout << "Destroying a lunch\n"; }
};
int main() { Lunch lunch; }
