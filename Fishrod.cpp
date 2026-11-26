#include "Fishrod.hpp"

Fishrod::Fishrod(const std::string &name, float luck, int max_weight, int price) : name_(name), luck_(luck), max_weight_(max_weight), price_(price) {}

std::string Fishrod::getName() const { return name_; }

float Fishrod::getLuck() const { return luck_; }

int Fishrod::getMaxWeight() const { return max_weight_; }

int Fishrod::getPrice() const { return price_; }

std::string Fishrod::getInfo() const {
    return name_ + "\nluck: " + std::to_string(luck_) + "\nmax weight: " + std::to_string(max_weight_) + "\nprice: " + std::to_string(price_);
}
