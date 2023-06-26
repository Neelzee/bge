#include "Node.h"
#include <iostream>
#include <vector>
#include "NodeCost.h"

Node::Node(int id) : id(id), neighbors() { }

void Node::addNeighbor(Node* neighbor, const NodeCost& cost) {
    neighbors.emplace_back(neighbor, cost);
}

std::vector<std::pair<Node*, NodeCost>> Node::getNeighbors() {
    return neighbors;
}

void Node::replaceNeighbors(std::vector<std::pair<Node*, NodeCost>> newNeighbors) {
    neighbors = std::move(newNeighbors);
}

bool Node::removeNeighbor(int id) {
    for (auto it = neighbors.begin(); it != neighbors.end(); ++it) {
        Node* neighborNode = it->first;
        if (neighborNode->id == id) {
            neighbors.erase(it);
            return true;
        }
    }
    return false;
}

