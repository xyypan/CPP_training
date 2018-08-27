#include <iostream>
#include <memory>
struct Pineapple {
  std::unique_ptr<int> p;
  Pineapple(std::unique_ptr<int> &&p) : p(std::move(p)) {
    std::cout << "constructing a Pineapple\n";
  }
  ~Pineapple() { std::cout << "destroying a Pineapple\n"; }
};
int main() {
  std::unique_ptr<int> p{new int{1}};
  Pineapple pinapple(std::move(p));
}
