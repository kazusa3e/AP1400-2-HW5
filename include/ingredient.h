#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <cstddef>
#include <string>

class Ingredient {
public:
    Ingredient(const Ingredient &other) = default;

    double get_price_unit() const { return price_unit_; }
    std::size_t get_units() const { return units_; }
    std::string get_name() const { return name_; }
    double price() const { return price_unit_ * units_; }

protected:
    Ingredient(double price_unit, std::size_t units)
        : price_unit_(price_unit), units_(units) {}
    double price_unit_;
    std::size_t units_;
    std::string name_;
};

#endif  // INGREDIENT_H