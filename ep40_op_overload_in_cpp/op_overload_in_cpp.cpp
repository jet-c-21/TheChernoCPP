//
// Created by puff on 2022-10-29.
//

#include "op_overload_in_cpp.hpp"

struct Vector2 {
  float x, y;

  Vector2(float x, float y) : x(x), y(y) {}

  Vector2 Add(const Vector2 &other) const {
    return Vector2(x + other.x, y + other.y);
  }

  Vector2 operator+(const Vector2 &other) const {
    return Add(other);
  }

  Vector2 Multiply(const Vector2 &other) const {
    return Vector2(x * other.x, y + other.y);
  }

  Vector2 operator*(const Vector2 &other) const {
    return Multiply(other);
  }

  bool operator==(const Vector2& other) const {
    return x == other.x && y == other.y;
  }

  bool operator!=(const Vector2& other) const {
    return !(*this == other);
  }

};

std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
  stream << other.x << ", " << other.y;
  return stream;
}

void op_overload_in_cpp_main() {
  Vector2 position(4.0f, 4.0f);
  Vector2 speed(0.5f, 1.5f);
  Vector2 power_up(1.1f, 1.1f);

  Vector2 result_1 = position.Add(speed.Multiply(power_up));
  Vector2 result_2 = position + speed * power_up;

  std::cout << result_1 << std::endl;
  std::cout << result_2 << std::endl;
  std::cout << (result_1 == result_2) << std::endl;
}
