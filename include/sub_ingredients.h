#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H

#include <ingredient.h>
#include <cstddef>

class Cinnamon : public Ingredient {
public:
    Cinnamon(std::size_t units) : Ingredient{5, units} {
        name_ = "Cinnamon";
    }
};

class Chocolate : public Ingredient {
public:
    Chocolate(std::size_t units) : Ingredient{5, units} {
        name_ = "Chocolate";
    }
};

class Sugar : public Ingredient {
public:
    Sugar(std::size_t units) : Ingredient{1, units} {
        name_ = "Sugar";
    }
};

class Cookie : public Ingredient {
public:
    Cookie(std::size_t units) : Ingredient{10, units} {
        name_ = "Cookie";
    }
};

class Espresso : public Ingredient {
public:
    Espresso(std::size_t units) : Ingredient{15, units} {
        name_ = "Espresso";
    }
};

class Milk : public Ingredient {
public:
    Milk(std::size_t units) : Ingredient{10, units} {
        name_ = "Milk";
    }
};

class MilkFoam : public Ingredient {
public:
    MilkFoam(std::size_t units) : Ingredient{5, units} {
        name_ = "MilkFoam";
    }
};

class Water : public Ingredient {
public:
    Water(std::size_t units) : Ingredient{1, units} {
        name_ = "Water";
    }
};

#endif  // SUB_INGREDIENTS_H