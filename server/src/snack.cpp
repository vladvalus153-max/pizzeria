#include "pizzeria/snack.h"
#include <stdexcept>
#include <sstream>
#include <iomanip>

Snack::Snack(std::string id, std::string name, int weightGrams, double price, int available)
    : MenuItem(std::move(id), std::move(name), price, available),
      weightGrams_(weightGrams) {
    if (weightGrams_ <= 0)
        throw std::invalid_argument("Вес закуски должен быть больше 0 г");
}

std::string Snack::describe() const {
    std::ostringstream out;
    out << "[" << kind() << "] " << name() << " (" << weightGrams_ << " г) — "
        << std::fixed << std::setprecision(2) << price() << " BYN "
        << "(доступно: " << available() << " шт.)";
    return out.str();
}
