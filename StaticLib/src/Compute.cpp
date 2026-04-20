#include "Compute.h"

void fib(int n) {
  //
  long long fib_cursor{3};
  long long prev{2};
  long long result{0};
  long long ct{0};
  //
  std::print("fib sequence: ", fib_cursor);
  while (ct <= n) {
    if (ct != n) {
      std::print("\x1b[33m{0}\x1b[0m,", fib_cursor);
    } else {
      std::println("\x1b[33m{0}\x1b[0m", fib_cursor);
    }
    result = (prev) + (fib_cursor);
    prev = fib_cursor;
    fib_cursor = result;
    ct++;
  }
}