#pragma once
#include <limits>
#include <print>

/// A constexpr-compatible square root using Newton-Raphson
constexpr float constexpr_sqrt(float s) {
  if (s < 0.0f)
    return std::numeric_limits<float>::quiet_NaN();
  if (s == 0.0f)
    return 0.0f;

  float x = s; // Initial guess
  float prev = 0.0f;

  // Iterate until the value stops changing significantly
  // (Usually takes 5-8 iterations for float precision)
  while (x != prev) {
    prev = x;
    x = 0.5f * (x + s / x);
  }
  return x;
}

/// Basic function that print fibonacci
/// sequences from 0 to n iteration.
void fib(int n);