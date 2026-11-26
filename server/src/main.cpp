#include "pizzeria/pizza.h"
#include "pizzeria/drink.h"
#include "pizzeria/snack.h"
#include <iostream>
#include <memory>
#include <array>

int main() {
    std::array<std::unique_ptr<MenuItem>, 5> menu = {
        std::make_unique<Pizza>("p-1", "Маргарита", 30, 18.50, 5),
        std::make_unique<Pizza>("p-2", "Пепперони", 35, 24.90, 3),
        std::make_unique<Drink>("d-1", "Кола",      500, 4.50, 10),
        std::make_unique<Drink>("d-2", "Морс клюквенный", 1000, 6.00, 4),
        std::make_unique<Snack>("s-1", "Картофель фри", 150, 7.20, 6)
    };

    std::cout << "=== Полное меню пиццерии ===\n";
    for (const auto& item : menu) {
        std::cout << item->describe() << '\n';
    }

    std::cout << "\nЗаказ позиции '" << menu.at(2)->name() << "': "
              << (menu.at(2)->orderOne() ? "успешно" : "нет в наличии") << '\n';
    std::cout << "После заказа: " << menu.at(2)->describe() << '\n';

    // Проверка шага 4 (защита от срезки):
    // MenuItem slice = *menu.at(0); // Ошибка компиляции: MenuItem абстрактный и копирование запрещено

    return 0;
}
