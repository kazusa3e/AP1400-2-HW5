#include "cappuccino.h"
#include "ingredient.h"
#include "sub_ingredients.h"

Cappuccino::Cappuccino() {
    name_ = "Cappuccino";
    ingredients_.push_back(new Espresso{2});
    ingredients_.push_back(new Milk{2});
    ingredients_.push_back(new MilkFoam{1});
}