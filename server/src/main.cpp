#include "pizzeria/pizza.h"
#include <iostream>

int main() {
    Pizza p1("p-1", "Маргарита",       30, 18.50, 5);
    Pizza p2("p-2", "Пепперони",       35, 24.90, 3);
    Pizza p3("p-3", "Четыре сыра",     30, 22.00, 1);
    Pizza p4("p-4", "Гавайская",       25, 16.00, 4);
    Pizza p5("p-5", "Мясное ассорти",  35, 27.50, 2);

    std::cout << "=== Меню пиццерии ===\n";
    std::cout << p1.describe() << '\n';
    std::cout << p2.describe() << '\n';
    std::cout << p3.describe() << '\n';
    std::cout << p4.describe() << '\n';
    std::cout << p5.describe() << '\n';

    std::cout << "\nЗаказ 1 ('" << p3.name() << "'): "
              << (p3.orderOne() ? "успешно" : "нет в наличии") << '\n';
    std::cout << "Заказ 2 ('" << p3.name() << "'): "
              << (p3.orderOne() ? "успешно" : "нет в наличии") << '\n';

    try {
        Pizza invalid("p-bad", "", 30, 15.00, 1);
    } catch (const std::invalid_argument& e) {
        std::cout << "\nОжидаемая ошибка валидации: " << e.what() << '\n';
    }

    return 0;
}
