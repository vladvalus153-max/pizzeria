import { PizzaCard } from "./components/PizzaCard";
import type { Pizza } from "./types";

const pizzas: Pizza[] = [
  { id: "p-1", name: "Маргарита", sizeCm: 30, price: 18.5, available: 5 },
  { id: "p-2", name: "Пепперони", sizeCm: 35, price: 24.9, available: 3 },
  { id: "p-3", name: "Четыре сыра", sizeCm: 30, price: 22, available: 1 },
  { id: "p-4", name: "Гавайская", sizeCm: 25, price: 16, available: 4 },
  { id: "p-5", name: "Мясное ассорти", sizeCm: 35, price: 27.5, available: 2 },
];

export default function App() {
  return (
    <main className="catalog">
      {pizzas.map(pizza => <PizzaCard key={pizza.id} pizza={pizza} />)}
    </main>
  );
}