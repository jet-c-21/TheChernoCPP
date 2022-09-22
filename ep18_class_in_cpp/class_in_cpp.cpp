#include "class_in_cpp.hpp"

class Player {
 public:
  int x, y;
  int speed;

  void move(int xa, int ya){
    x += xa * speed;
    y += ya * speed;
  }
};

void move_by_func(Player& player, int xa, int ya){
  player.x += xa * player.speed;
  player.y += ya * player.speed;
}

void class_in_cpp_main() {
  Player player;
  player.x = 5;
  move_by_func(player, 1, -1);

  player.move(1, -1);

}