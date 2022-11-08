#include "dynamic_arr.hpp"

struct Vertex {
  float x, y, z;
};

std::ostream &operator<<(std::ostream &stream, const Vertex &vertex) {
  stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
  return stream;
}

void Function(const std::vector<Vertex>& vertices){
  
}

void dynamic_arr_main() {
  std::vector<Vertex> vertices;
  vertices.push_back({1, 2, 3});
  vertices.push_back({4, 5, 6});

  for (int i = 0; i < vertices.size(); i++)
    std::cout << vertices[i] << std::endl;

//  vertices.clear();
  vertices.erase(vertices.begin() + 1);

  for (Vertex &v : vertices)
    std::cout << v << std::endl;

}