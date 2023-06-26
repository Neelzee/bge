#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <vector>
#include "TileCost.h"

class Tile {
    private:
        int id;
        std::vector<std::pair<Tile*, TileCost>> neighbors;

    public:
        Tile(int id);

        void addNeighbor(Tile* neighbor, const TileCost& cost);
	int getId();
        std::vector<std::pair<Tile*, TileCost>> getNeighbors();
        void replaceNeighbors(std::vector<std::pair<Tile*, TileCost>> neighbors);
        bool removeNeighbor(int id);
};
