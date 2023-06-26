#include "Player.h"

#include <iostream>
#include <string>


Player::Player(int id, std::string name) : id(id), name(name) {  }


int Player::getId() {
  return id;
}

std::string Player::getName() {
  return name;
}

void Player::setName(std::string name) : name(name) { }

int Player::getPosition() {
  return position;
}

void Player::setPosition(int position) : position(position) { }
