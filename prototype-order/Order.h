#pragma once
#include <vector>
#include "Product.h"
#include "Discount.h"

class Order : public ICloneable {
public:
    std::vector<Product*> products;
    Discount* discount;
    double deliveryCost;

    Order();
    ~Order();
    Order* Clone() const override;
};
