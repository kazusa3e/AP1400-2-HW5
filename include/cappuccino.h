#ifndef CAPPUCCINO
#define CAPPUCCINO

#include <ingredient.h>
#include <vector>
#include "espresso_based.h"

class Cappuccino final : public EspressoBased {
public:
    Cappuccino();
    ~Cappuccino() = default;
};

#endif  // CAPPUCCINO