#include "espresso_based.h"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <sstream>
#include "ingredient.h"

double EspressoBased::price() const {
    return std::accumulate(ingredients_.begin(), ingredients_.end(), 0.0, [](auto acc, Ingredient *i) {
               return acc + i->price();
           }) +
           std::accumulate(side_items_.begin(), side_items_.end(), 0.0, [](auto acc, const Ingredient *const &i) {
               return acc + i->price();
           });
}

void EspressoBased::brew() const {
    std::ostringstream oss;
    std::for_each(ingredients_.begin(), ingredients_.end(), [&oss](const Ingredient *const &i) {
        oss << i->get_name() << ":\t\t" << i->get_units() << std::endl;
    });
    std::cout << oss.str() << std::endl;
}

EspressoBased::~EspressoBased() {
    std::for_each(ingredients_.begin(), ingredients_.end(), [](const Ingredient *const &i) {
        delete i;
    });
    ingredients_.clear();
    std::for_each(side_items_.begin(), side_items_.end(), [](const Ingredient *const &i) {
        delete i;
    });
    side_items_.clear();
}

EspressoBased::EspressoBased(const EspressoBased &esp) {
    name_ = esp.name_;
    std::for_each(esp.ingredients_.begin(), esp.ingredients_.end(), [this](const Ingredient *const &i) {
        this->ingredients_.push_back(new Ingredient{*i});
    });
    std::for_each(esp.side_items_.begin(), esp.side_items_.end(), [this](const Ingredient *const &i) {
        this->side_items_.push_back(new Ingredient{*i});
    });
}

void EspressoBased::operator=(const EspressoBased &esp) {
    if (this == &esp) return;
    std::for_each(ingredients_.begin(), ingredients_.end(), [](const Ingredient *const &i) {
        delete i;
    });
    ingredients_.clear();
    std::for_each(side_items_.begin(), side_items_.end(), [](const Ingredient *const &i) {
        delete i;
    });
    side_items_.clear();

    name_ = esp.name_;
    std::for_each(esp.ingredients_.begin(), esp.ingredients_.end(), [this](const Ingredient *const &i) {
        this->ingredients_.push_back(new Ingredient{*i});
    });
    std::for_each(esp.side_items_.begin(), esp.side_items_.end(), [this](const Ingredient *const &i) {
        this->side_items_.push_back(new Ingredient{*i});
    });
}

void EspressoBased::add_side_item(Ingredient *const side) {
    side_items_.push_back(side);
}