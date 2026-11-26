import type { MenuItem } from "../types";

// Если добавить новый тип и не обработать его в switch, TypeScript покажет ошибку
function assertNever(value: never): never {
  throw new Error(`Необработанный тип: ${JSON.stringify(value)}`);
}

// Один компонент для всех трёх типов
export function MenuItemCard({ item }: { item: MenuItem }) {
  switch (item.type) {
    case "pizza":
      return (
        <article className="card">
          <h2>{item.name}</h2>
          <p>{item.sizeCm} см, {item.price.toFixed(2)} BYN</p>
          <p>Доступно: {item.available}</p>
        </article>
      );
    case "drink":
      return (
        <article className="card">
          <h2>{item.name}</h2>
          <p>{item.volumeMl} мл, {item.price.toFixed(2)} BYN</p>
          <p>Доступно: {item.available}</p>
        </article>
      );
    case "snack":
      return (
        <article className="card">
          <h2>{item.name}</h2>
          <p>{item.weightGrams} г, {item.price.toFixed(2)} BYN</p>
          <p>Доступно: {item.available}</p>
        </article>
      );
    default:
      return assertNever(item);
  }
}