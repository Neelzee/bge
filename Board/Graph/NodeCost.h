#ifndef NODECOST_H
#define NODECOST_H

class NodeCost {
    private:
        int cost;
    
    public:
        NodeCost(int cost);
        int getCost();
        void setCost(int newCost);
}
