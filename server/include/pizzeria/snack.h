#pragma once
#include "pizzeria/menu_item.h"

class Snack : public MenuItem {
public:
    Snack(std::string id, std::string name, int weightGrams, double price, int available);

    int weightGrams() const noexcept { return weightGrams_; }
    std::string kind() const override { return "snack"; }
    std::string describe() const override;

private:
    int weightGrams_ = 0;
};
