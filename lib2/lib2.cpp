#include "lib2.hpp"
#include "lib1.hpp"

int lib2_return_int()
{
  return 3 + lib1_return_int();
}
