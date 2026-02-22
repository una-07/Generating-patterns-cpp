#pragma once
#include "ICloneable.h"

class Discount : public ICloneable {
public:
    double percent;
    Discount(double p);
    Discount* Clone() const override;
};
