#include "Compute.h"
#include <cstdlib>
#include <print>
/*
   Basic main menu.
*/
int main(int argc, char *argv[]) {
  std::println("hello program template.");
  constexpr float v = constexpr_sqrt(81);
  fib(20);
  // Hello program template.
  std::println("Sqrt :{0}", v);
  return EXIT_SUCCESS;
}