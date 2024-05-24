#ifndef ESPRESSO_BASED_H
#define ESPRESSO_BASED_H

#include <string>
#include <vector>
#include "ingredient.h"

class EspressoBased {
public:
    std::string get_name() const { return name_; }
    double price() const;
    void brew() const;
    const std::vector<Ingredient *> &get_ingredients() const { return ingredients_; }
    void add_side_item(Ingredient *const side);
    std::vector<Ingredient *> &get_side_items() { return side_items_; }

    virtual ~EspressoBased();

protected:
    EspressoBased() = default;
    EspressoBased(const EspressoBased &esp);
    void operator=(const EspressoBased &esp);

    std::vector<Ingredient *> ingredients_;
    std::vector<Ingredient *> side_items_;
    std::string name_;
};

#endif  // ESPRESSO_BASED_H