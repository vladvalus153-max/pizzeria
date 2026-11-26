#include "pizzeria/pizza.h"
#include <stdexcept>
#include <sstream>
#include <iomanip>

Pizza::Pizza(std::string id, std::string name, int sizeCm, double price, int available)
    : MenuItem(std::move(id), std::move(name), price, available),
      sizeCm_(sizeCm) {
    if (sizeCm_ != 25 && sizeCm_ != 30 && sizeCm_ != 35)
        throw std::invalid_argument("Диаметр пиццы должен быть 25, 30 или 35 см");
}

std::string Pizza::describe() const {
    std::ostringstream out;
    out << "[" << kind() << "] " << name() << " (" << sizeCm_ << " см) — "
        << std::fixed << std::setprecision(2) << price() << " BYN "
        << "(доступно: " << available() << " шт.)";
    return out.str();
}
