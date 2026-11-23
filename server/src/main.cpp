#include "pizzeria/pizza.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Pizza> menu;
    menu.emplace_back("p-1", "Маргарита",       30, 18.50, 5);
    menu.emplace_back("p-2", "Пепперони",       35, 24.90, 3);
    menu.emplace_back("p-3", "Четыре сыра",     30, 22.00, 1);
    menu.emplace_back("p-4", "Гавайская",       25, 16.00, 4);
    menu.emplace_back("p-5", "Мясное ассорти",  35, 27.50, 2);

    std::cout << "=== Меню пиццерии ===\n";
    for (const auto& pizza : menu) {
        std::cout << pizza.describe() << '\n';
    }

    std::cout << "\nЗаказ 1 ('" << menu.name() << "'): "
              << (menu.orderOne() ? "успешно" : "нет в наличии") << '\n';
    std::cout << "Заказ 2 ('" << menu.name() << "'): "
              << (menu.orderOne() ? "успешно" : "нет в наличии") << '\n';

    try {
        Pizza invalid("p-bad", "", 30, 15.00, 1);
    } catch (const std::invalid_argument& e) {
        std::cout << "\nОжидаемая ошибка валидации: " << e.what() << '\n';
    }

    return 0;
}
