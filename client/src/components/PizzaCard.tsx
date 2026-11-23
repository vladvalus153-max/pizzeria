import type { Pizza } from "../types";

// Карточка только показывает пиццу, которую получила через props
export function PizzaCard({ pizza }: { pizza: Pizza }) {
  return (
    <article className="card">
      <h2>{pizza.name}</h2>
      <p>{pizza.sizeCm} см, {pizza.price.toFixed(2)} BYN</p>
      <p>Доступно: {pizza.available}</p>
    </article>
  );
}