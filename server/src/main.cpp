#include "pizzeria/pizza.h"
#include "pizzeria/drink.h"
#include "pizzeria/snack.h"
#include <iostream>

int main() {
    Pizza p1("p-1", "Маргарита", 30, 18.50, 5);
    Pizza p2("p-2", "Пепперони", 35, 24.90, 3);
    Drink d1("d-1", "Кола",      500, 4.50, 10);
    Drink d2("d-2", "Морс клюквенный", 1000, 6.00, 4);
    Snack s1("s-1", "Картофель фри", 150, 7.20, 6);

    // Полиморфный массив базовых указателей MenuItem* (без std::vector)
    MenuItem* menu[5] = { &p1, &p2, &d1, &d2, &s1 };

    std::cout << "=== Полное меню пиццерии (полиморфизм) ===\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << menu[i]->describe() << '\n';
    }

    std::cout << "\nЗаказ позиции '" << menu[2]->name() << "': "
              << (menu[2]->orderOne() ? "успешно" : "нет в наличии") << '\n';
    std::cout << "После заказа: " << menu[2]->describe() << '\n';

    return 0;
}
