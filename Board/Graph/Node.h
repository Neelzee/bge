#include <vector>
#include <iostream>
#include <algorithm>

#pragma once

template<auto T>
class Node {
  int id{};
  // Nodes going IN
  std::vector<Node<T>> ins{};
  // Nodes going OUT
  std::vector<Node<T>> outs{};
  // Cost of going from the Node
  float fromCost{};
  // Cost of going to the Node
  float toCost{};

public:
  Node(int id, float fromCost, float toCost) : id(id), fromCost(fromCost), toCost(toCost) {}

  int get_id() {
    return this->id;
  }

  std::vector<Node<T>> get_ins() {
    return this->ins;
  }

  std::vector<Node<T>> get_outs() {
    return this->outs;
  }

  std::vector<Node<T>> get_neighbours() {
    std::vector<Node<T>> _ins = this->get_ins();
    std::vector<Node<T>> _outs = this->get_outs();

    std::vector<Node<T>> combinedVec(_ins.begin(), _ins.end());
    combinedVec.insert(combinedVec.end(), _outs.begin(), _outs.end());

    return combinedVec;
  }

  void add_ins(Node<T> node) {
    this->ins.insert(node);
  }

  void remove_ins(int node_id) {
    this->ins.erase(std::remove_if(this->ins.begin(), this->ins.end(), [node_id](const Node<T> &node) {
      return node->id == node_id;
    }), this->ins.end());
  }

  void add_outs(Node<T> node) {
    this->outs.insert(node);
  }

  void remove_outs(int node_id) {
    this->outs.erase(std::remove_if(this->outs.begin(), this->outs.end(), [node_id](const Node<T> &node) {
      return node->id == node_id;
    }), this->outs.end());
  }

  float get_toCost() {
    return this->toCost;
  }

  float get_fromCost() {
    return this->fromCost;
  }
};




