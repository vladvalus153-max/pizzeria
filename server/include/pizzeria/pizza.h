#pragma once
#include "pizzeria/menu_item.h"

class Pizza : public MenuItem {
public:
    Pizza(std::string id, std::string name, int sizeCm, double price, int available);

    int sizeCm() const noexcept { return sizeCm_; }
    std::string kind() const override { return "Пицца"; }
    std::string describe() const override;

private:
    int sizeCm_ = 0;
};
