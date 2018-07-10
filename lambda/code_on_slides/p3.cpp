#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> a{1, 2, 3};
  // TODO: define print_lambda here
  // std::for_each will call print_lambda
  std::for_each(a.begin(), a.end(), print_lambda);
  return 0;
}
