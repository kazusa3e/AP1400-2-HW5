#include "mocha.h"
#include "ingredient.h"
#include "sub_ingredients.h"

Mocha::Mocha() {
    name_ = "Mocha";
    ingredients_.push_back(new Espresso{2});
    ingredients_.push_back(new Milk{2});
    ingredients_.push_back(new MilkFoam{1});
    ingredients_.push_back(new Chocolate{1});
}
