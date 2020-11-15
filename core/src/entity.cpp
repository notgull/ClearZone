#include "entity.h"

#include <iostream>
using namespace std;

Entity::Entity(string s, int heal, int intel, int charis, int dex, int wisdom,
               int constit, double str, long sex, int num) {
  this->entityType = s;
  this->health = heal;
  this->intelligence = intel;
  this->charisma = charis;
  this->dexterity = dex;
  this->wisdom = wisdom;
  this->constitution = constit;
  this->strength = str;
  this->sexAppeal = sex;
  this->numEntities = num;
}

string Entity::getEntityType() { return this->entityType; }
void Entity::setEntityType(string s) { this->entityType = s; }

int Entity::getHealth() const { return this->health; }
void Entity::setHealth(int h) { this->health = h; }

void Entity::addItem(const Item& item) { this->inventory.push_back(item); }

void Entity::moveEntity(Direction dir) {
  if (dir == Up) {
    this->indexY -= 1;
  } else if (dir == Down) {
    this->indexY += 1;
  } else if (dir == Left) {
    this->indexX -= 1;
  } else if (dir == Right) {
    this->indexX += 1;
  }
}
