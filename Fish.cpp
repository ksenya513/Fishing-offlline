#include "Fish.hpp"

Fish::Fish(const std::string &name, int cost, int weight) : name_(name), cost_(cost), weight_(weight) {}

std::string Fish::getRarity() const { return "common"; }

std::string Fish::getName() const { return name_; }

int Fish::getCost() const { return cost_; }

int Fish::getWeight() const { return weight_; }

std::string Fish::getInfo() const {
    return "<><\n" + name_ + "\nrarity: " + rarity_ + "\nweight: " + std::to_string(weight_) + "\ncost: " + std::to_string(cost_);
}
