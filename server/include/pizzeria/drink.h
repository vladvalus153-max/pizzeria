#pragma once
#include "pizzeria/menu_item.h"

class Drink : public MenuItem {
public:
    Drink(std::string id, std::string name, int volumeMl, double price, int available);

    int volumeMl() const noexcept { return volumeMl_; }
    std::string kind() const override { return "Напиток"; }
    std::string describe() const override;

private:
    int volumeMl_ = 0;
};
