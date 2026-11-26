import { MenuItemCard } from "./components/MenuItemCard";
import type { MenuItem } from "./types";

// Те же пять позиций, что и в серверной программе
const items: MenuItem[] = [
  { type: "pizza", id: "p-1", name: "Маргарита", price: 18.5, available: 5, sizeCm: 30 },
  { type: "pizza", id: "p-2", name: "Пепперони", price: 24.9, available: 3, sizeCm: 35 },
  { type: "drink", id: "d-1", name: "Кола", price: 4.5, available: 10, volumeMl: 500 },
  { type: "drink", id: "d-2", name: "Морс клюквенный", price: 6, available: 4, volumeMl: 1000 },
  { type: "snack", id: "s-1", name: "Картофель фри", price: 7.2, available: 6, weightGrams: 150 },
];

export default function App() {
  return (
    <main className="catalog">
      {items.map(item => <MenuItemCard key={item.id} item={item} />)}
    </main>
  );
}