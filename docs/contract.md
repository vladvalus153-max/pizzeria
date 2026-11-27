# Контракт API

Файл описывает формат данных, которым обмениваются клиент и сервер.

## Форматы данных

### MenuItemDto

Позиция меню. Поле type определяет, какое из своих полей присутствует.

| Поле        | Тип         | Ограничения                   |
|-------------|-------------|-------------------------------|
| id          | строка      | не пустая                     |
| type        | строка      | pizza, drink или snack        |
| name        | строка      | не пустая                     |
| price       | число       | больше 0, в BYN               |
| available   | целое число | не меньше 0                   |
| sizeCm      | целое число | только у pizza: 25, 30 или 35 |
| volumeMl    | целое число | только у drink: больше 0      |
| weightGrams | целое число | только у snack: больше 0      |

### Пример

```json
[
  { "type": "pizza", "id": "p-1", "name": "Маргарита", "price": 18.5, "available": 5, "sizeCm": 30 },
  { "type": "pizza", "id": "p-2", "name": "Пепперони", "price": 24.9, "available": 3, "sizeCm": 35 },
  { "type": "drink", "id": "d-1", "name": "Кола", "price": 4.5, "available": 10, "volumeMl": 500 },
  { "type": "drink", "id": "d-2", "name": "Морс клюквенный", "price": 6, "available": 4, "volumeMl": 1000 },
  { "type": "snack", "id": "s-1", "name": "Картофель фри", "price": 7.2, "available": 6, "weightGrams": 150 }
]
```