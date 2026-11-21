#include "pizzeria/pizza.h"
#include <stdexcept>
#include <utility>
#include <sstream>
#include <iomanip>

Pizza::Pizza(std::string id, std::string title, int sizeCm, double price, int available)
    : id_(std::move(id)),
      title_(std::move(title)),
      sizeCm_(sizeCm),
      price_(price),
      available_(available) {
    validate();
}

void Pizza::validate() const {
    if (id_.empty())    throw std::invalid_argument("Артикул (ID) не задан");
    if (title_.empty()) throw std::invalid_argument("Название пиццы не задано");
    if (sizeCm_ != 25 && sizeCm_ != 30 && sizeCm_ != 35)
        throw std::invalid_argument("Диаметр пиццы должен быть 25, 30 или 35 см");
    if (price_ <= 0.0)
        throw std::invalid_argument("Цена должна быть больше 0");
    if (available_ < 0)
        throw std::invalid_argument("Количество на кухне не может быть отрицательным");
}

bool Pizza::orderOne() {
    if (available_ == 0) return false;
    --available_;
    return true;
}

void Pizza::restock(int count) {
    if (count <= 0)
        throw std::invalid_argument("Количество для пополнения должно быть больше 0");
    available_ += count;
}

std::string Pizza::describe() const {
    std::ostringstream out;
    out << title_ << " (" << sizeCm_ << " см) — "
        << std::fixed << std::setprecision(2) << price_ << " BYN "
        << "[доступно: " << available_ << " шт.]";
    return out.str();
}
