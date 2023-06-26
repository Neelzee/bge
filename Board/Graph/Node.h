#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <vector>
#include "NodeCost.h"

class Node {
    private:
        int id;
        std::vector<std::pair<Node*, NodeCost>> neighbors;

    public:
        Node(int id);

        void addNeighbor(Node* neighbor, const NodeCost& cost);

        std::vector<std::pair<Node*, NodeCost>> getNeighbors();
        void replaceNeighbors(std::vector<std::pair<Node*, NodeCost>> neighbors);
        bool removeNeighbor(int id);
};
