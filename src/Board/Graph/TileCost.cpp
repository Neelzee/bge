#include "TileCost.h";

TileCost::TileCost(int cost) : cost(cost) { }

int TileCost::getCost() {
  return cost;
}


void setCost(int newCost) {
  cost = newCost;
}
