#include "Order.h"
#include <iostream>

int main() {
    Order* baseOrder = new Order();
    baseOrder->products.push_back(new Product("Laptop", 500000));
    baseOrder->discount = new Discount(10);
    baseOrder->deliveryCost = 2000;

    Order* clonedOrder = baseOrder->Clone();
    clonedOrder->products[0]->price = 450000;

    std::cout << "Cloned order created" << std::endl;

    delete baseOrder;
    delete clonedOrder;
    return 0;
}

