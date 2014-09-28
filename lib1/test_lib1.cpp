#include "lib1.hpp"
#include <iostream>

int main()
{
  const int lib1_int = lib1_return_int();
  std::cout << "lib1_int = " << lib1_int << "\n";
  if (lib1_int == 5) {
    return 0;
  }
  return 1;
}
