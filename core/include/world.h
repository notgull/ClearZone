#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include <memory>
#include <queue>
#include <vector>

#include "cell.h"
#include "choice.h"
#include "player.h"

using namespace std;

class World {
 protected:
  unique_ptr<unique_ptr<Cell[]>[]> cells;
  int width;
  int height;

  std::queue<std::unique_ptr<Event>> event_queue;
  std::vector<std::unique_ptr<Entity>> entities;

  void generate_events();
  std::shared_ptr<char[]> compile_map();
 public:
  World(int width, int height);

  void moveEntity(string);
  unique_ptr<Event> next_event();
  Player *get_player();
};
#endif
