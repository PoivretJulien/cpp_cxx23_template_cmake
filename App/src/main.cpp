#include "Compute.h"
#include "Geometry.h"
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
  std::println("Sqrt : {0}", v);
  Vec3<float> v_a{1, 3, 4.5};
  std::println("\x1b[33m{0} {1:>7.3f}\x1b[0m", v_a.to_string(),
               v_a.length_mag());
  return EXIT_SUCCESS;
}