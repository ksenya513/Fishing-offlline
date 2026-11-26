#ifndef FISHROD_H
#define FISHROD_H
#include <iostream>
#include <string>

class Fishrod {
  private:
    std::string name_;
    float luck_;
    int max_weight_;
    int price_;

  public:
    explicit Fishrod(const std::string &name, float luck, int max_weight, int price);
    virtual ~Fishrod() = default;
    std::string getName() const;
    float getLuck() const;
    int getMaxWeight() const;
    int getPrice() const;
    std::string getInfo() const;
};
#endif