#include "Tile.h"
#include <iostream>
#include <vector>
#include "TileCost.h"

Tile::Tile(int id) : id(id), neighbors() { }

void Tile::addNeighbor(Tile* neighbor, const TileCost& cost) {
    neighbors.emplace_back(neighbor, cost);
}

std::vector<std::pair<Tile*, TileCost>> Tile::getNeighbors() {
    return neighbors;
}

void Tile::replaceNeighbors(std::vector<std::pair<Tile*, TileCost>> newNeighbors) {
    neighbors = std::move(newNeighbors);
}

bool Tile::removeNeighbor(int id) {
    for (auto it = neighbors.begin(); it != neighbors.end(); ++it) {
        Tile* neighborTile = it->first;
        if (neighborTile->id == id) {
            neighbors.erase(it);
            return true;
        }
    }
    return false;
}

int Tile::getId() {
	return id;
}
