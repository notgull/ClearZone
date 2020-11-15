#include <iostream>
#include <vector>
#include "cell.h"
using namespace std;

Cell::Cell() {
    this->cellBiome = Biome;
}

Cell::Cell(Biome b, vector<Entity> e) {
    this->ent = e;
    this->cellBiome = b;
}

Biome *Cell::getBiome() const { return this->cellBiome; }
void Cell::setBiome(const Biome& b) { this->cellBiome = b; }

vector<Entity> Cell::getEnt() const { return this->ent; }
void Cell::setEnt(vector<Entity> e) { this->ent = e; }