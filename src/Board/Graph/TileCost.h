#ifndef TILECOST_H
#define TILECOST_H

class TileCost {
    private:
        int cost;
    
    public:
        TileCost(int cost);
        int getCost();
        void setCost(int newCost);
}
