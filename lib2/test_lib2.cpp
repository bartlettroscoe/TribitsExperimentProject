#include "lib2.hpp"
#include <iostream>

int main()
{
  const int lib2_int = lib2_return_int();
  std::cout << "lib2_int = " << lib2_int << "\n";
  if (lib2_int == 8) {
    return 0;
  }
  return 1;
}
