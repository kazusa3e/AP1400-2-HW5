#ifndef MOCHA_H
#define MOCHA_H

#include <ingredient.h>
#include <vector>
#include "espresso_based.h"

class Mocha final : public EspressoBased {
public:
    Mocha();
    ~Mocha() = default;
};
#endif // MOCHA_H