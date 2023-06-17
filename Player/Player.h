#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

Player:
  private:
    int id;
    std::string name;
    int position;

  public:
    Player(int id, std::string name);
    int getId();
    std::string getName();
    void setName(std::string name);
    int getPosition();
    void setPosition(int position);
