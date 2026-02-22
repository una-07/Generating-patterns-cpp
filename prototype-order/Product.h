#pragma once
#include <string>
#include "ICloneable.h"

class Product : public ICloneable {
public:
    std::string name;
    double price;

    Product(const std::string& n, double p);
    Product* Clone() const override;
};
