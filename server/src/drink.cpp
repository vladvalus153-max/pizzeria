#include "pizzeria/drink.h"
#include <stdexcept>
#include <sstream>
#include <iomanip>

Drink::Drink(std::string id, std::string name, int volumeMl, double price, int available)
    : MenuItem(std::move(id), std::move(name), price, available),
      volumeMl_(volumeMl) {
    if (volumeMl_ <= 0)
        throw std::invalid_argument("Объём напитка должен быть больше 0 мл");
}

std::string Drink::describe() const {
    std::ostringstream out;
    out << "[" << kind() << "] " << name() << " (" << volumeMl_ << " мл) — "
        << std::fixed << std::setprecision(2) << price() << " BYN "
        << "(доступно: " << available() << " шт.)";
    return out.str();
}
