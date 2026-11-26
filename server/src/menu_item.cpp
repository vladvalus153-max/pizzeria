#include "pizzeria/menu_item.h"
#include <stdexcept>
#include <utility>
#include <sstream>
#include <iomanip>

MenuItem::MenuItem(std::string id, std::string name, double price, int available)
    : id_(std::move(id)),
      name_(std::move(name)),
      price_(price),
      available_(available) {
    if (id_.empty())    throw std::invalid_argument("Артикул (ID) не задан");
    if (name_.empty())  throw std::invalid_argument("Название позиции не задано");
    if (price_ <= 0.0)  throw std::invalid_argument("Цена должна быть больше 0");
    if (available_ < 0) throw std::invalid_argument("Количество не может быть отрицательным");
}

bool MenuItem::orderOne() {
    if (available_ == 0) return false;
    --available_;
    return true;
}

void MenuItem::restock(int count) {
    if (count <= 0)
        throw std::invalid_argument("Количество для пополнения должно быть больше 0");
    available_ += count;
}

std::string MenuItem::describe() const {
    std::ostringstream out;
    out << "[" << kind() << "] " << name_ << " — "
        << std::fixed << std::setprecision(2) << price_ << " BYN "
        << "(доступно: " << available_ << " шт.)";
    return out.str();
}
