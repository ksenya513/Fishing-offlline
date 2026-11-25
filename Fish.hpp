#ifndef FISH_H
#define FISH_H
#include <iostream>
#include <string>

class Fish {
  protected:
    std::string rarity_;
    std::string name_;
    int cost_;
    int weight_;

  public:
    explicit Fish(const std::string &rarity, const std::string &name, int cost, int weight);
    virtual ~Fish() = default;
    std::string getRarity() const;
    std::string getName() const;
    int getCost() const;
    int getWeight() const;
    virtual std::string getInfo() const;
};
#endif
