#include "Compute.h"
#include "Geometry.h"
#include <cstdlib>
#include <print>
/*
   Basic main menu.
*/
int main(int argc, char *argv[]) {

  std::println("\x1b[32mHello program template.\x1b[0m");
  // compile time computation.
  constexpr float v = constexpr_sqrt(81);

  // Fibonacci sequence of 20 iteration.
  fib(20);

  // Hello program template.
  std::println("Sqrt : {0}", v);

  // two vectors definition.
  constexpr Vec3<float> v_a{1, 3, 4.2};
  constexpr Vec3<float> v_b{2, 6, 12.5};

  // here the Delta computed at compile time.
  constexpr auto v_c = v_b - v_a;

  // c++23 console logging.
  std::println("\x1b[33m{0:<23} length:{1:>7.3f}\x1b[0m", v_a.to_string(),
               v_a.length_mag());
  std::println("\x1b[35m{0:<23} length:{1:>7.3f}\x1b[0m", v_b.to_string(),
               v_b.length_mag());
  std::println("\x1b[34m{0:<23} length:{1:>7.3f}\x1b[0m", v_c.to_string(),
               v_c.length_mag());
  // std exit.
  return EXIT_SUCCESS;
}
