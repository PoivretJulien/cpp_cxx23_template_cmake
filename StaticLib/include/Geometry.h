#include <concepts>
#include <format>

/// When a generic template is involved the whole definition
/// and declaration happen in the header file.
template <typename T>
  requires std::integral<T> || std::floating_point<T>
struct Vec3 {
  T x, y, z{0};
  T length_mag() { return sqrt(x * x + y * y + z * z); };
  std::string to_string() {
    return std::format("Vec3:(x:{0}y:{1}z:{2})", x, y, z);
  }
};